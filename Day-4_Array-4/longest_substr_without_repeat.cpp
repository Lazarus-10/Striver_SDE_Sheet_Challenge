#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // unordered_set<char> st;
        // int ans = 0;
        // int start = 0, end = 0;
        // for(; end < s.length(); end++){
        //     if(st.find(s[end]) != st.end()){
        //         ans = max(ans, end - start);
        //         while(s[start] != s[end]){
        //             st.erase(s[start++]);
        //         }
        //         start++;
        //     }
        //     st.insert(s[end]);
        // }
        // ans = max(ans, end - start);
        // return ans;

        unordered_map<char, int> mp;
        int ans = 0;
        int l = 0, r = 0;
        for(; r<s.length(); r++){
            if(mp.find(s[r]) != mp.end()){
                ans = max(ans, r - l);
                l = max(l, mp[s[r]]+1);
            }
            mp[s[r]] = r;
        }
        ans = max(ans, r - l);
        return ans;
    }
};
int main(){
    Solution obj;
    cout << obj.lengthOfLongestSubstring("abcaabcdba") << endl;
    cout << obj.lengthOfLongestSubstring("bbbbbb") << endl;
    cout << obj.lengthOfLongestSubstring("abcabcbb") << endl;
    cout << obj.lengthOfLongestSubstring("tmmzuxt") << endl;
    cout << obj.lengthOfLongestSubstring("pwwkew");
    return 0;
}