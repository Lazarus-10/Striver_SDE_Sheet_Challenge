#include<bits/stdc++.h>
using namespace std;
class Solution {
    // Read Shell sort also
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // O(m+n), O(m)
        // vector<int> temp(m);
        // for(int i=0; i<m; i++){
        //     temp[i] = nums1[i];
        // }
        // int i=0, j=0, k=0;
        // while(i < m && j < n){
        //     if(temp[i] < nums2[j]){
        //         nums1[k++] = temp[i++];
        //     }else{
        //         nums1[k++] = nums2[j++];
        //     }
        // }
        // while(i < m){
        //     nums1[k++] = temp[i++];
        // }
        // while(j < n){
        //     nums1[k++] = nums2[j++];
        // }
        
// ---------------------------------------------------------------------------------------------
        // O(m*n), O(1)
        // int i=0, j=0;
        // while(i<m && j<n){
        //     if(nums1[i] <= nums2[j]){
        //         i++;
        //     }else{
        //         swap(nums1[i++], nums2[j]);
        //         //insertion sort
        //         for(int k=1;k <n; k++){
        //             if(nums2[k] < nums2[k-1]){
        //                 swap(nums2[k], nums2[k-1]);
        //             }else{
        //                 break;
        //             }
        //         }
        //     }
        // }
        // while(j < n){
        //     nums1[i++] = nums2[j++];
        // }
        
// ---------------------------------------------------------------------------------------------
        // O(m+n) , O(1)
        for(int i=m, j=0; j<n; i++,j++){
            nums1[i] = nums2[j];
        }
        int gap = ceil((m+n)/2.0);
        while(gap){
            for(int i=0, j=gap; j<(m+n); i++, j++){
                if(nums1[i] > nums1[j]){
                    swap(nums1[i], nums1[j]);
                }
            }
            if(gap == 1)break;
            gap = ceil(gap/2.0);
        }

    
    }
};
int main(){
 
    return 0;
}