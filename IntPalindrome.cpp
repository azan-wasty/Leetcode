//#include <iostream>
//using namespace std;
//
//class Solution {
//public:
//    bool isPalindrome(int x) {
//        long long n = x;
//        long long  rev = 0;
//        if (n < 0) {
//            return false;
//        }
//        while (n != 0) {
//            int digit = n % 10;
//            rev = rev * 10 + (n % 10);
//            n = n / 10;
//        }
//        return rev == x;
//
//    }
//};