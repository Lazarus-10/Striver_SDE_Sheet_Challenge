#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    //Boyer-Moore Voting Algorithm
    int majorityElement(vector<int>& nums) {
        int candidate;
        int count = 0;
        for(int i=0; i<nums.size(); i++){
            if(count == 0){
                candidate = nums[i];
                count++;
            }else if(nums[i] == candidate){
                count++;
            }else{
                count--;
            }
        }
        return candidate;
    }
};
int main(){
 
    return 0;
}