//one pass hash table //TC- O(n*log n)
#include <bits/stdc++.h>
using namespace std;

int main() {

    // Your code here
    class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Create a map to store the value-to-index mappings
        map<int, int> mpp;

        // Get the size of the input vector
        int n = nums.size();

        // Iterate through each element in the vector
        for(int i = 0; i < n; i++) {
            // Calculate the complement that would sum with nums[i] to equal the target
            int more = target - nums[i];

            // Check if the complement exists in the map
            if(mpp.count(more)) {
                // If it exists, return the indices of the complement and the current element
                return {mpp[more], i};
            }

            // If the complement is not found, add the current element and its index to the map
            mpp[nums[i]] = i;
        }

        // If no solution is found, return an empty vector
        return {};
    }
};


    return 0;
}