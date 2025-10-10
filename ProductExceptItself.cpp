//#include <vector>
//using namespace std;
//
//class Solution {
//public:
//    vector<int> productExceptSelf(vector<int>& nums) {
//        int n = nums.size();
//        long long product = 1;
//        int zeroCount = 0;
//
//        for (int i = 0; i < n; i++) {
//            if (nums[i] != 0) product *= nums[i];
//            else zeroCount++;
//        }
//
//        vector<int> answer(n, 0);
//
//        for (int i = 0; i < n; i++) {
//            if (zeroCount > 1) answer[i] = 0;
//            else if (zeroCount == 1) {
//                if (nums[i] == 0) answer[i] = product;
//                else answer[i] = 0;
//            }
//            else answer[i] = product / nums[i];
//        }
//
//        return answer;
//    }
//};
