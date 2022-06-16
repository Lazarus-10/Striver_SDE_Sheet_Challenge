#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = INT_MAX, profit = 0;
        for(int i=0; i<prices.size(); i++){
            if(prices[i] < buy){
                buy = prices[i];
                continue;
            }
            profit = max(profit, prices[i]-buy);
        }
        return profit;
    }
};
int main(){
 
    return 0;
}