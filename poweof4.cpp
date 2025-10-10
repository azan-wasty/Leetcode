//#include <iostream>
//using namespace std;
//
//class Solution {
//public:
//    bool isPowerOfFour(int n) {
//        // must be positive
//        if (n <= 0) return false;
//
//        // check power of 2
//        if ((n & (n - 1)) != 0) return false;
//
//        // check if it's in the "power of 4" positions
//        return (n & 0x55555555) != 0;
//    }
//};
