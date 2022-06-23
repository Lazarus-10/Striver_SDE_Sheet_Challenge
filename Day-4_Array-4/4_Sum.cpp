#include<bits/stdc++.h>
using namespace std;
class Solution {
    // -3 -3 -2 -2 -2 0 0 4
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        if(n < 4)return{};
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0; i<n-3; i++){
            long target_3 = target - nums[i];
            for(int j=i+1; j<n-2; j++){
                long target_2 = target_3 - nums[j];
                int start = j+1, end = n-1;
                while(start < end){
                    int two_sum = nums[start] + nums[end];
                    if(two_sum < target_2) start++;
                    else if(two_sum > target_2)end--;
                    else{
                        ans.push_back({nums[i], nums[j], nums[start], nums[end]});
                        while(start < end && nums[start] == nums[++start]);
                        while(start < end && nums[end] == nums[--end]);
                    }
                }
                while(j+1 < n-2 && nums[j] == nums[j+1])j++;
            }
            while(i+1 < n-3 && nums[i] == nums[i+1])i++;
        }
        return ans;
        // -2 -1 0 0 1 2
    }
};
int main(){
 
    return 0;
}