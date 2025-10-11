//#include <iostream>
//using namespace std;
//
//class Solution {
//public:
//    int reverse(int x) {
//        long long num = x; // convert to long long immediately
//        long long rev = 0;
//
//        int sign = 1;
//        if (num < 0) {
//            sign = -1;
//            num = -num; // safe now because num is long long
//        }
//
//        while (num > 0) {
//            int digit = num % 10;
//            rev = rev * 10 + digit;
//
//            // check overflow against 32-bit range
//            if (rev > (1LL << 31) - 1) {
//                return 0;
//            }
//
//            num = num / 10;
//        }
//
//        rev = rev * sign;
//
//        if (rev < -(1LL << 31)) {
//            return 0;
//        }
//
//        return (int)rev;
//    }
//};
