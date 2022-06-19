#include<bits/stdc++.h>
using namespace std;
long long ans = 0;
void Sort(long long *nums, int low, int mid, int high){
    int i=low, j=mid+1;
    int k=0;
    vector<long long> temp(high-low+1);
    while(i<=mid && j<=high){
        if(nums[i] <= nums[j]){  // keep in mind to put <= sign
            temp[k++] = nums[i++];
        }else{
            ans += (mid-i+1);
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
void Merge(long long *nums, int low, int high){
    if(low < high){
        long long mid = low + (high-low)/2;
        Merge(nums, low, mid);
        Merge(nums, mid+1, high);
        Sort(nums, low, mid, high);
    }
}
long long getInversions(long long *arr, int n){
//     long long ans = 0;
//     for(int i=0; i<n-1; i++){
//         for(int j=i+1; j<n; j++){
//             if(arr[i] > arr[j]){
//                 ans++;
//             }
//         }
//     }
    Merge(arr, 0, n-1);
    return ans;
}
int main(){
    
    return 0;
}