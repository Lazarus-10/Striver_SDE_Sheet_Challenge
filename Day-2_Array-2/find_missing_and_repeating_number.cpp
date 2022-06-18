#include<bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h> 
bool isSet(int num, int pos){
    int i=0;
    while(i != pos){
        num >>= 1;
        i++;
    }
    return num&1;
}
pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
    //--------- O(5n), O(1) ----------

    // E.g {4,3,2,1,1}
    int a_xor_b = 0;
    //Xor all arr[i] -> x
    // x ^(1^2^3^....^n)
    // x^y = num
    for(int i=1; i<=n; i++){
        a_xor_b ^= i^arr[i-1];
    }
    // find the first set bit position(bcz this will be our point for seperating the number, as xor of 2 bits are 1 only if they are different)
    int set_bit_pos = 0;
    while(a_xor_b){
        if(a_xor_b & 1){
            break;
        }
        a_xor_b >>= 1;
        set_bit_pos++;
    }
    // put the number with set bit at "set_bit_pos" in "set_container"
    // put the number with unset bit at "set_bit_pos" in "unset_container"
    int set_container = 0, unset_container = 0;
    for(int i=0; i<n; i++){
        if(isSet(arr[i], set_bit_pos)){
            set_container ^= arr[i];
        }else{
            unset_container ^= arr[i];
        }
    }
    // xor the baskets with 1 to n numbers to filter out the missing and repeating numbers
    for(int i=1; i<=n; i++){
        if(isSet(i, set_bit_pos)){
           set_container ^= i; 
        }else{
            unset_container ^= i;
        }
    }

    // figure out which is missing and which is repeating
    for(int i=0; i<n; i++){
        if(arr[i] == set_container){
            return {unset_container, set_container};
        }
    }
    return {set_container, unset_container};
    // -------------------------- O(N), O(N) ------------------------------------
//        unordered_map<int, int> mp;
//        for(int i=0; i<n; i++){
//            mp[arr[i]]++;
//        }
//         pair<int, int> ans;
//         for(int i=1; i<=n; i++){
//             if(mp[i] == 0){
//                 ans.first = i;
//             }
//             else if(mp[i] == 2){
//                 ans.second = i;
//             }
//         }
//        return ans;
}

int main(){
 
    return 0;
}