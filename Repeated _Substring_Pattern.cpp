#include <bits/stdc++.h>
using namespace std;


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


int main() {

    // Your code here
   Solution solution;
    // Test cases
    string s1 = "abab";
    string s2 = "aba";
    string s3 = "abcabcabcabc";

    // Check the results
    bool result1 = solution.repeatedSubstringPattern(s1); // Expected: true
    bool result2 = solution.repeatedSubstringPattern(s2); // Expected: false
    bool result3 = solution.repeatedSubstringPattern(s3); // Expected: true

    // Output results
    cout << boolalpha; // Print true/false instead of 1/0
    cout << "s1: " << result1 << endl; // true
    cout << "s2: " << result2 << endl; // false
    cout << "s3: " << result3 << endl; // true


    return 0;
}