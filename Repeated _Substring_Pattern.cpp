#include <bits/stdc++.h>
using namespace std;

int main() {

    // Your code here
    class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        // Concatenate s with itself
        string ss = s + s;
        
        // Remove the first and last characters from the concatenated string
        string modified_ss = ss.substr(1, ss.length() - 2);
        
        // Check if the original string s is a substring of the modified concatenated string
        return modified_ss.find(s) != string::npos;
        //This comparison checks whether the result of find is not equal to npos.
        // If the result is not npos, it means the substring s was found in modified_ss.
        //If the result is npos, it means the substring s was not found in modified_ss.
    }
};


    return 0;
}