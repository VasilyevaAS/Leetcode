//https://leetcode.com/problems/walking-robot-simulation/

class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        int x = 0;
        int y = 0;
        int maximum = 0;
        char directions[] = {'N', 'E', 'S', 'W'};
        int index = 0;
        set<pair<int, int>> obstacleSet;
        for (vector<int> obstacle: obstacles) {
            obstacleSet.insert(make_pair(obstacle[0], obstacle[1]));
        }
        for(int i = 0; i < commands.size(); i++) {
            if(commands[i] == -1) {
                index = (index + 1) % 4;
            }
            else if(commands[i] == -2) {
                index = (index - 1 + 4) % 4;
            }
            else {
                for(int j = 0; j < commands[i]; j++) {
                    moveForward(obstacleSet, x, y, directions[index]);
                    maximum = max(maximum, x*x + y*y);
                }
            }
        }
        return maximum;
    }


private:
    void moveForward(set<pair<int, int>>& obstacleSet, int& x, int& y, char direction) {
        switch(direction) {
            case 'N':
                if (obstacleSet.find(make_pair(x, y + 1)) == obstacleSet.end()) {
                    y += 1;
                }
                break;
            case 'E':
                if (obstacleSet.find(make_pair(x + 1, y)) == obstacleSet.end()) {
                    x += 1;
                }
                break;
            case 'S':
                if (obstacleSet.find(make_pair(x, y - 1)) == obstacleSet.end()) {
                    y -= 1;
                }
                break;
            case 'W':
                if (obstacleSet.find(make_pair(x - 1, y)) == obstacleSet.end()) {
                    x -= 1;
                }
                break;
        }
    }
};
