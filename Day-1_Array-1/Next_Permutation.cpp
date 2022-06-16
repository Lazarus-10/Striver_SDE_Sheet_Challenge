#include<bits/stdc++.h>
using namespace std;
class Solution {
    // 5 4 7 5 3 2
    // 5 4 2 3 5 7
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        if(n <= 1)return;
        if(nums[n-1] > nums[n-2]){
            swap(nums[n-1], nums[n-2]);
            return;
        }
        int i = n-2;
        while(i >= 1){
            if(nums[i] > nums[i-1]){
                break;
            }
            i--;
        }
        reverse(nums.begin()+i, nums.end());
        if(i > 0){
            int j = i-1;
            while(i<n && nums[i] <= nums[j]){
                i++;
            }
            swap(nums[i], nums[j]);
        }
        // int n = nums.size();
        // if(n <= 1)return;
        // if(nums[n-1] > nums[n-2]){
        //     swap(nums[n-1], nums[n-2]);
        //     return;
        // }
        // int i = n-2;
        // while(i >= 1 && (nums[i] <= nums[i-1])){
        //     i--;
        // }
        // reverse(nums.begin()+i, nums.end());
        // if(i > 0){
        //     auto it = upper_bound(nums.begin()+i, nums.end(), nums[i-1]);
        //     swap(nums[i-1], nums[it - nums.begin()]);
        // }
    }
};
int main(){
    
    return 0;
}