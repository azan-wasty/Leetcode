//#include <vector>
//using namespace std;
//
//class Solution {
//public:
//    int maxArea(vector<int>& height) {
//        int* start = &height[0];
//        int* end = &height[height.size() - 1];
//        int max_capacity = 0;
//
//        while (start < end) {
//            // current width between pointers
//            int width = (end - start);
//
//            // find height of container (shorter line)
//            int h = (*start < *end) ? *start : *end;
//
//            // calculate capacity
//            int capacity = h * width;
//
//            // update max
//            if (capacity > max_capacity)
//                max_capacity = capacity;
//
//            // move the smaller side inward
//            if (*start < *end)
//                start++;
//            else
//                end--;
//        }
//
//        return max_capacity;
//    }
//};
