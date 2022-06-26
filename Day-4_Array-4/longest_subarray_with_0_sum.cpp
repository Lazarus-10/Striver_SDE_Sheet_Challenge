
#include<bits/stdc++.h>
using namespace std;
int LongestSubsetWithZeroSum(vector < int > arr) {
    unordered_map<int, int> mp;
    mp[0] = -1;
    int sum = 0;
    int ans = 0;
    for(int i=0; i<arr.size(); i++){
        sum += arr[i];
        if(mp.find(sum) != mp.end()){
            ans = max(ans, i-mp[sum]);
        }else{
            mp[sum] = i;
        }
    }
    return ans;
}
int main(){
 
    return 0;
}