#include <bits/stdc++.h>
using namespace std;

int main() {

    // Your code here
    //select minimum in the whole array and place at the 0th index can call this rearranging in the ascending order
    //select minimum and & swap the numbers
    // the process can be completed in n-1 iteration 

   void selection_sort(int array[], int n) {
    for(int i = 0; i <= n-2; i++) {
        int min = i;
        for(int j = i+1; j <= n-1; j++) {
            if(array[j] < array[min]) {
                min = j;
            }
        }
        // Swap the found minimum element with the first element
        int temp = array[min];
        array[min] = array[i];
        array[i] = temp;
    }
}

int main() {
    int n;
    cin >> n;
    int array[n];
    for(int i = 0; i < n; i++) {
        cin >> array[i];
    }

    selection_sort(array, n);

    for(int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    
    return 0;
}