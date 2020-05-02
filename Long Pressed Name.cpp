//https://leetcode.com/problems/long-pressed-name/


class Solution {
public:
    bool isLongPressedName(const string &name, const string &typed) {
        size_t iName = 0;
        size_t iTyped = 0;
        while (true){
            if (iName == name.size() && iTyped == typed.size()){
                return true;
            }
            if (iName == name.size() || iTyped == typed.size()){
                return false;
            }
            if (name[iName] != typed[iTyped]){
                return false;
            }
            char c = name[iName];
            size_t nameGroupSize = 0;
            size_t typedGroupSize = 0;
            while (iName < name.size() && name[iName] == c){
                iName++;
                nameGroupSize++;
            }
            while (iTyped < typed.size() && typed[iTyped] == c){
                iTyped++;
                typedGroupSize++;
            }
            if (typedGroupSize < nameGroupSize){
                return false;
            }
        }
    }
};
