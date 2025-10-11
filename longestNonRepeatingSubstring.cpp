//#include <string>
//using namespace std;
//
//class Solution {
//public:
//    int lengthOfLongestSubstring(string s) {
//        string a = "";
//        int len = 0;
//        int max_len = 0;
//
//        for (int i = 0; s[i] != 0; i++) {
//            for (int j = 0; a[j] != 0; j++) {
//                if (s[i] == a[j]) {
//                    a.erase(0, j + 1); 
//                    break;
//                }
//            }
//            a.push_back(s[i]); // add current character
//            len = a.size();
//            if (len > max_len) {
//                max_len = len;
//            }
//        }
//        return max_len;
//    }
//};
