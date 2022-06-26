#include<bits/stdc++.h>
using namespace std;
int subarraysXor(vector<int> &arr, int x)
{
    unordered_map<int, int> mp;
    int prefix_xor = 0;
    int count = 0;
    for(int i=0; i<arr.size(); i++){
        prefix_xor ^= arr[i];
        if(prefix_xor == x)count++; // subarray from 0 to i
        if(mp.find(prefix_xor ^ x) != mp.end()){ //from k to i
            count += mp[prefix_xor ^ x];
        }
        mp[prefix_xor]++;
    }
    return count;
}
int main(){
 
    return 0;
}