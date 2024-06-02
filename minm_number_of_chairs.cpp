#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    static int minimumchairs(string s){
        int chairs = 0,  count = 0;
        for(int i = 0; i < s.length(); i++){
            if (s[i] == 'E') ++count;
            else --count;

            chairs = max(chairs, count);
    }
    return chairs;
    }
};
int main() {

    // Your code here
    string s;
    cin >> s;
    cout << Solution::minimumchairs(s) << endl;


    return 0;
}