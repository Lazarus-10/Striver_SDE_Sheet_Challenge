#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int num1 = -1, num2 = -1;
        int count1 = 0, count2 = 0;
        bool temp1 = false, temp2 = false;
        for(int x : nums){
            if(x == num1 && temp1)count1++; // if it is first time temp1 will prohibit this block
            else if(x == num2 && temp2)count2++;
            else if(count1 == 0){
                num1 = x;
                count1++;
                temp1 = true;
            }else if(count2 == 0){
                num2 = x;
                count2++;
                temp2 = true;
            }else{
                count1--;
                count2--;
            }
        }
        // We are still not sure if the numbers are in majority(e.g {1 1 2 2 3 3}, num1 = 1, num2= 2) but they are not majority
        vector<int> ans;
        int count_num1 = 0, count_num2 = 0;
        for(int x : nums){
            if(x == num1){
                count_num1++;
            }else if(x == num2){
                count_num2++;
            }
        }
        if(count_num1 > nums.size()/3)ans.push_back(num1);
        if(count_num2 > nums.size()/3)ans.push_back(num2);
        return ans;
    }
};
int main(){
 
    return 0;
}