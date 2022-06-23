#include<bits/stdc++.h>
using namespace std;
class Solution {
    // 1 2 3     1 3
      // i         j
int ans = 0;
void Sort(vector<int> &nums, int low, int mid, int high){
    int i=low, j=mid+1;
    while(i <= mid && j <= high){
        if(nums[i] > 2LL*nums[j]){
            ans += (mid-i+1);
            j++;
        }else i++;
    }
    i = low, j = mid+1;
    int k=0;
    vector<int> temp(high-low+1);
    while(i<=mid && j<=high){
        if(nums[i] <= nums[j]){  // keep in mind to put <= sign
            temp[k++] = nums[i++];
        }else{
            // This will not work as count inversion because we have to increment i only when nums[i] <= 2LL*nums[j] but in the if case it will be increased for nums[i] <= nums[j]
            // if(nums[i] > 2LL*nums[j]){
            //     ans += (mid-i+1);
            // }
            temp[k++] = nums[j++];
        }
    }
    while(i <= mid){
        temp[k++] = nums[i++];  
    }
    while(j <= high){
        temp[k++] = nums[j++];
    }
    for(i=low, k=0; i<=high; i++, k++){
        nums[i] = temp[k];
    }
}
void Merge(vector<int> &nums, int low, int high){
    if(low < high){
        int mid = low + (high-low)/2;
        Merge(nums, low, mid);
        Merge(nums, mid+1, high);
        Sort(nums, low, mid, high);
    }
}
public:
    int reversePairs(vector<int>& nums) {
        Merge(nums, 0, nums.size()-1);
        return ans;
    }
};
int main(){
 
    return 0;
}