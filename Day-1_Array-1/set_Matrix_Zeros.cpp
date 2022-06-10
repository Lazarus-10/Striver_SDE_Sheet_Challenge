#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        // int row = matrix.size();
        // int col = matrix[0].size();
        // int col_to_be_zero[col], row_to_be_zero[row];
        // memset(col_to_be_zero, 0, sizeof(col_to_be_zero));
        // memset(row_to_be_zero, 0, sizeof(row_to_be_zero));
        // for(int i=0; i<row; i++){
        //     for(int j=0; j<col; j++){
        //         if(matrix[i][j] == 0){
        //             col_to_be_zero[j] = 1;
        //             row_to_be_zero[i] = 1;
        //         }
        //     }
        // }
        // for(int i=0; i<row; i++){
        //     for(int j=0; j<col; j++){
        //         if(col_to_be_zero[j] || row_to_be_zero[i]){
        //             matrix[i][j] = 0;
        //         }
        //     }
        // }
        
        // 1   2   3  4
        // 5   0   7  8
        // 0  10  11 12
        // 13 14  15  0
        
// --------------------------------------------------------------------------------------        
//         int row = matrix.size();
//         int col = matrix[0].size();
//         bool isZeroCol = false;
//         bool isZeroRow = false;
//         for(int i=0; i<col; i++){
//             if(matrix[0][i] == 0){
//                 isZeroRow = true;
//                 break;
//             }
//         }
//         for(int i=0; i<row; i++){
//             if(matrix[i][0] == 0){
//                 isZeroCol = true;
//                 break;
//             }
//         }
        
//         for(int i=1; i<row; i++){
//             for(int j = 1; j<col; j++){
//                 if(matrix[i][j] == 0){
//                     matrix[0][j] = matrix[i][0] = 0;
//                 }
//             }
//         }

//         for(int i=1; i<row; i++){
//             for(int j = 1; j<col; j++){
//                 if(matrix[0][j] == 0 || matrix[i][0] == 0){
//                     matrix[i][j] = 0;
//                 }
//             }
//         }       
//         if(isZeroRow){
//             for(int i=0; i<col; i++){
//                 matrix[0][i] = 0;
//             }
//         }
//         if(isZeroCol){
//             for(int i=0; i<row; i++){
//                 matrix[i][0] = 0;
//             }
//         }
// --------------------------------------------------------------------------------------
        int row = matrix.size();
        int col = matrix[0].size();
        bool col0 = false;
        for(int i=0; i<row; i++){
            if(matrix[i][0] == 0)col0 = true;
            for(int j=1; j<col; j++){
                if(matrix[i][j] == 0){
                    matrix[i][0] = matrix[0][j] = 0;
                }
            }
        }
        
        for(int i=row-1; i>=0; i--){
            for(int j=col-1; j>=1; j--){
                if(matrix[i][0] == 0 || matrix[0][j] == 0){
                    matrix[i][j] = 0;
                }
            }
            if(col0){
                matrix[i][0] = 0;
            }
        }
    }

};

int main(){
    
    return 0;
}