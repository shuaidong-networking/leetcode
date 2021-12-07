/*
Example 1:
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Output: Because nums[0] + nums[1] == 9, we return [0, 1].

Example 2:
Input: nums = [3,2,4], target = 6
Output: [1,2]

Example 3:
Input: nums = [3,3], target = 6
Output: [0,1]
*/
#include<stdio.h>
#include <vector>
using namespace std;

//set two pointer
vector<int> twoSum(vector<int>& nums, int target) {
    int len = nums.size();
    for(int i=0; i<len; i++){
        for(int j = i+1; j < len; j++){
            if (nums[j] == target - nums[i])
                return {i,j};
                
        }
    }
    return {-1, -1};
}

int main(int argc, char const *argv[])
{

    vector <int>numbers = {1,4,3,6,5,8};
    twoSum(numbers, 9);
    return 0;
}
