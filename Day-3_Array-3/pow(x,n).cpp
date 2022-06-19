#include<bits/stdc++.h>
using namespace std;
class Solution {
    double helper(double x, int n){
        if(n == 0)return 1;
        else if(n == 1)return x;
        double ans = helper(x, n/2);
        ans = ans*ans;
        if(n%2){
            ans = x*ans;
        }
        return ans;
    }
public:
        double myPow(double x, int n) {
            double ans = helper(x, n);
            return n >= 0 ? ans : 1/ans;
        }
    
};
int main(){
 
    return 0;
}