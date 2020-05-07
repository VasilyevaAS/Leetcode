//https://leetcode.com/problems/day-of-the-week/submissions/


class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {
        int days = countDaysFrom1971(day, month, year);
        return weekName[(days+ 5) % 7];
    }
    bool isLeapYear(int year) {
        return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
    }
    int countDaysFrom1971(int day, int month, int year) {
        int res = 0;
        bool leapYear = isLeapYear(year);
        year --;
        while (year >= 1971) {
            res += isLeapYear(year) ? 366 : 365;
            year--;
        }
        while (month > 1) {
            res += daysOfMonth[leapYear][month - 2];
            month--;
        }
        res += day - 1;
        return res;
    }
    int daysOfMonth[2][12] = {
        {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
        {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
    };
    string weekName[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
};
