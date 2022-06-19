#include<bits/stdc++.h>
using namespace std;
class Solution {
    //bruteforce
    int helper3(int m, int n){
        if(m < 0 || n < 0)return 0;
        if(m == 0 && n == 0)return 1;
        return helper3(m-1, n) + helper3(m, n-1);
    }
    //memoization(Top-Down DP) (O(mn), O(mn))
    int helper2(int m ,int n, vector<vector<int>> &memo){
        if(m < 0 || n < 0)return 0;
        if(memo[m][n] != 0)return memo[m][n];
        if(m == 0 && n == 0)return 1;
        return memo[m][n] = helper2(m-1, n, memo) + helper2(m, n-1, memo);
    }
    //memoization(Top-Down DP) (O(mn), O(mn))
    int helper(int i, int j, int m, int n, vector<vector<int>> &memo){
        if(i >= m || j >= n)return 0;
        if(memo[i][j] != 0)return memo[i][j];
        if(i == m-1 && j == n-1)return 1;
        return memo[i][j] = (helper(i+1, j, m, n, memo) + helper(i, j+1, m, n, memo));
    }
public:
    int uniquePaths(int m, int n) {
        // vector<vector<int>> dp(m, vector<int>(n, 0));
        // return helper(0, 0, m, n, dp);
        // return helper2(m-1, n-1, dp);
        
        //Tabulation(Bottom-Up DP) (O(mn), O(mn))
        // for(int i=0; i<m; i++){
        //     dp[i][0] = 1;
        // }
        // for(int i=0; i<n; i++){
        //     dp[0][i] = 1;
        // }
        // for(int i=1; i<m; i++){
        //     for(int j=1; j<n; j++){
        //         dp[i][j] = dp[i-1][j] + dp[i][j-1];
        //     }
        // }
        // return dp[m-1][n-1];
        
        // Combinatorics (T.C: O(m-1) or O(n-1))
        // https://takeuforward.org/data-structure/grid-unique-paths-count-paths-from-left-top-to-the-right-bottom-of-a-matrix/
        int N = n + m - 2;
        int r = m - 1; // or n - 1
        double res = 1;
    
        // Calculate NCr
        for (int i = 1; i <= r; i++)
            res = res * (N - r + i) / i;
        return (int)res;
    }
};
int main(){
 
    return 0;
}