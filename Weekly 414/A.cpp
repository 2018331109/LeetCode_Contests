#include <string>
#include <bitset>
using namespace std;

class Solution {
public:
    string convertDateToBinary(string date) {
        int year = stoi(date.substr(0, 4));
        int month = stoi(date.substr(5, 2));
        int day = stoi(date.substr(8, 2));

        string yearBinary = bitset<32>(year).to_string();
        yearBinary = yearBinary.substr(yearBinary.find('1')); // Remove leading zeroes

        string monthBinary = bitset<32>(month).to_string();
        monthBinary = monthBinary.substr(monthBinary.find('1')); // Remove leading zeroes

        string dayBinary = bitset<32>(day).to_string();
        dayBinary = dayBinary.substr(dayBinary.find('1')); // Remove leading zeroes

        return yearBinary + "-" + monthBinary + "-" + dayBinary;
    }
};

