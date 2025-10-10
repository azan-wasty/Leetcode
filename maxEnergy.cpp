//#include <vector>
//using namespace std;
//class Solution {
//public:
//    int maximumEnergy(vector<int>& energy, int k) {
//        int n = energy.size();
//        vector<int> dp(n);
//        int max_energy = INT_MIN;
//
//        // Build dp from end to start
//        for (int i = n - 1; i >= 0; --i) {
//            dp[i] = energy[i];
//            if (i + k < n)
//                dp[i] += dp[i + k];
//            if (dp[i] > max_energy)
//                max_energy = dp[i];
//        }
//        return max_energy;
//    }
//};