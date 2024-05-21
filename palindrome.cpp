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