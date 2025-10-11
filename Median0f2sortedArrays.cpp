//#include <iostream>
//#include <vector>
//using namespace std;
//
//class Solution {
//public:
//    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
//        int f = nums1.size();
//        int s = nums2.size();
//        int n = f + s;
//        vector<int> nums3(n);
//        int f1 = 0, s1 = 0, i = 0;
//
//        while (f1 < f && s1 < s) {
//            if (nums1[f1] < nums2[s1]) {
//                nums3[i] = nums1[f1];
//                f1++;
//            }
//            else {
//                nums3[i] = nums2[s1];
//                s1++;
//            }
//            i++;
//        }
//
//        while (f1 < f) {
//            nums3[i] = nums1[f1];
//            f1++;
//            i++;
//        }
//
//        while (s1 < s) {
//            nums3[i] = nums2[s1];
//            s1++;
//            i++;
//        }
//
//        double median;
//        if (n % 2 == 0) {
//            median = (nums3[n / 2] + nums3[(n / 2) - 1]) / 2.0;
//        }
//        else {
//            median = nums3[n / 2];
//        }
//
//        return median;
//    }
//};
