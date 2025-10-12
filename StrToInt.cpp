//#include <string>
//#include <climits>
//using namespace std;
//
//class Solution {
//public:
//    int myAtoi(string s) {
//        int i = 0, sign = 1;
//        long num = 0;
//
//
//        while (s[i] == ' ') i++;
//
//        // Check sign
//        if (s[i] == '-' || s[i] == '+') {
//            if (s[i] == '-') sign = -1;
//            i++;
//        }
//
//        // Convert digits
//        while (s[i] >= '0' && s[i] <= '9') {
//            num = num * 10 + (s[i] - '0');
//            i++;
//
//            // Handle overflow
//            if (num * sign > INT_MAX) return INT_MAX;
//            if (num * sign < INT_MIN) return INT_MIN;
//        }
//
//        return (int)(num * sign);
//    }
//};
