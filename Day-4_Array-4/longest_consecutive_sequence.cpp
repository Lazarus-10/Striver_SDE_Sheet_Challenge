#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        for(int x : nums){
            st.insert(x);
        }
        int ans = 0;
        for(int x : st){
            // can use st.find() also
            if(!st.count(x-1)){
                int count = 0;
                while(st.count(x++)){
                   count++; 
                }
                ans = max(ans, count);
            }
        }
        return ans;
    }
};

int main(){
 
    return 0;
}