/*
Blaine Swieder
LeetCode (C++): Maximum Difference between Increasing Elements
Date: June 16th, 2025
*/

#include <iostream> 
#include <vector>
#include <algorithm> 

using namespace std;

class Solution{ 
public: 
    int maximumDifference(vector<int>& nums){
        int minVal = nums[0];
        int maxDiff = -1; 

        for (int i = 1; i < nums.size(); ++i){
            if (nums[i] > minVal){
                maxDiff = max(maxDiff, nums[i] - minVal);
            } else {
                minVal = nums[i];
            }
        }

        return maxDiff;
    }
};

int main(){
    Solution sol;

    vector<int> nums1 = {7, 1, 5, 4};
    vector<int> nums2 = {9, 4, 3, 2};
    vector<int> nums3 = {1, 5, 2, 10};

    cout << "Example 1 Output: " << sol.maximumDifference(nums1) << endl; // Desired Output: 4
    cout << "Example 2 Output: " << sol.maximumDifference(nums2) << endl; // Desired Output: -1
    cout << "Example 3 Output: " << sol.maximumDifference(nums3) << endl; // Desired Output: 9

    return 0;
}

