#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0;
        int j = 0;

        while (i < s.length() && j < t.length()) { 
            if (s[i] == t[j]) {  // if found the same character both pointers move forward 
                i += 1;
            }
            j += 1;  // second pointer always moves forward

            // Check outside the loop
            if (i == s.length()) { // every character found can only be checked via if `i` is fully iterated to the length of string `s` or not
                return true;
            }
        }

        return i == s.length();  // ensure all characters of `s` were found in `t` in the correct order
    }
};

int main() {
    // Your code here
    Solution solution;
    string s = "abc";
    string t = "ahbgdc";
    
    if (solution.isSubsequence(s, t)) {
        cout << "String s is a subsequence of string t" << endl;
    } else {
        cout << "String s is not a subsequence of string t" << endl;
    }

    return 0;
}
