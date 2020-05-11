//https://leetcode.com/problems/employee-importance/


/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
        int value = 0;
        queue<int> ids;
        map<int, Employee*> hashId;
        for(int i = 0; i < employees.size(); i++) {
            hashId[employees[i]->id] = employees[i];
        }
        ids.push(id);
        while(!ids.empty()) {
            Employee* current = hashId[ids.front()];
            ids.pop();
            value += current->importance;
            if(!current->subordinates.empty()) {
                for(int i = 0; i < current->subordinates.size(); i++) {
                    ids.push(current->subordinates[i]);
                }
            }
        }
        return value;
    }
};
