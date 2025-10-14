//#include <vector>
//#include <string>
//using namespace std;
//
//class Solution {
//public:
//    string longestCommonPrefix(vector<string>& strs) {
//        if (strs.empty()) return "";
//
//        string prefix = strs[0];
//        bool is = true;
//
//        for (int i = 1; i < strs.size(); i++) {
//            is = true; // reset for each string
//            for (int j = 0; is && j < prefix.size() && j < strs[i].size(); j++) {
//                if (strs[i][j] != prefix[j]) {
//                    prefix = prefix.substr(0, j);
//                    is = false;
//                }
//            }
//
//            // if we finished the loop but one string is shorter
//            if (is && strs[i].size() < prefix.size()) {
//                prefix = prefix.substr(0, strs[i].size());
//            }
//
//            if (prefix.empty()) return "";
//        }
//
//        return prefix;
//    }
//};
