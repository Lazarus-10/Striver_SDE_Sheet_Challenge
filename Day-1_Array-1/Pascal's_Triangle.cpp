#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=0; i<numRows; i++){
            vector<int> row(i+1);
            row[0] = row[i] = 1;
            for(int j=1; j<i; j++){
                row[j] = ans[i-1][j-1] + ans[i-1][j];
            }
            ans.push_back(row);
        }
        return ans;
        
        
        // if(numRows == 1)return {{1}};
        // else if(numRows == 2)return {{1}, {1,1}};
        // vector<vector<int> > ans{{1}, {1,1}};
        // for(int i=2; i<numRows; i++){
        //     vector<int> toPush;
        //     toPush.push_back(1);
        // for(int j=0; j<i-1; j++){
        //         toPush.push_back(ans[i-1][j] + ans[i-1][j+1]);
        //     }
        //     toPush.push_back(1);
        //     ans.push_back(toPush);
        // }
        // return ans;
    
    }
};

int main(){
    
    return 0;
}