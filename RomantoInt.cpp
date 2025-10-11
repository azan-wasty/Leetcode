//#include <string>
//using namespace std;
//
//class Solution {
//public:
//    int romanToInt(string roman) {
//        int num = 0;
//        for (int i = 0; roman[i] != '\0'; i++) {
//            int currentValue = getRomanValue(roman[i]);
//            int nextValue = getRomanValue(roman[i + 1]);
//            if (currentValue < nextValue) num -= currentValue;
//            else num += currentValue;
//        }
//        return num;
//    }
//    int getRomanValue(char c) {
//        switch (c) {
//        case 'I': return 1;
//        case 'V': return 5;
//        case 'X': return 10;
//        case 'L': return 50;
//        case 'C': return 100;
//        case 'D': return 500;
//        case 'M': return 1000;
//        default: return 0;
//        }
//    }
//
//};