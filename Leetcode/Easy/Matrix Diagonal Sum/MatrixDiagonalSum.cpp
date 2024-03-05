// Given a square matrix mat, return the sum of the matrix diagonals. Only include the sum of all the elements on the primary diagonal and all the elements on the secondary diagonal that are not part of the primary diagonal.

#include<iostream>
#include<vector>
using namespace std;
int diagonalSum(vector<vector<int>>& mat){
    int n = mat.size();
    int ans = 0;
    for(int i = 0;i < n;i++){
        ans += mat[i][i];
        ans += mat[n - i - 1][i];
    }
    return n % 2 == 0 ? ans : ans - mat[n / 2][n / 2];
}
int main(){
    int rows,cols;
    cout<<"Enter no. of rows : ";
    cin>>rows;
    cout<<"Enter no. of cols : ";
    cin>>cols;
    vector<vector<int>>mat;
    cout<<"Give input : "<<endl;
    for(int i = 0;i < rows;i++){
        vector<int>v;
        for(int j = 0;j < cols;j++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        mat.push_back(v);
    }
    cout<<"The sum of the matrix diagonals will be : "<<diagonalSum(mat);
}