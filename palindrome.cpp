#include <bits/stdc++.h>
using namespace std;

int main() {

    // Your code here
    //%10 is used to extract last digit of a number
    // /10 is used to eliminate last digit of a number

    int n;
    cin >> n;
    int temp = n;
    int revnum=0;

    while(n>0) {
        int ld = n%10 ;
        revnum = (revnum*10) + ld;
        n = n/10;
    }
    if(temp == revnum){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    return 0;
}

//----------------------------------------------------------------  ----------------------------------------------------------------

//runtime 0ms

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
        return false;
        
        long long ltemp = x; //long long is used here for overflow protection
        long long lVal = 0;
        while(ltemp!=0){
            lVal = (lVal * 10) + (ltemp % 10);
            ltemp = ltemp / 10;
        }
        return (lVal == x);
    }
};