// You are given an n x n integer matrix grid. Generate an integer matrix maxLocal of size (n - 2) x (n - 2) such that: maxLocal[i][j] is equal to the largest value of the 3 x 3 matrix in grid centered around row i + 1 and column j + 1. In other words, we want to find the largest value in every contiguous 3 x 3 matrix in grid.Return the generated matrix.

#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid){
        int n = grid.size();
        vector<vector<int>>ans(n - 2,vector<int>(n - 2));
        for(int i = 0;i < n - 2;i++)
            for(int j = 0;j < n - 2;j++)
                for(int x = i;x < i + 3;x++)
                    for(int y = j;y < j + 3;y++)
                        ans[i][j] = max(ans[i][j],grid[x][y]);
        return ans;
    }
};
int main(){
    int rows;
    cout<<"Enter no. of rows : ";
    cin>>rows;
    vector<vector<int>>grid;
    cout<<"Give input : ";
    for(int i = 0;i < rows;i++){
        vector<int>v;
        for(int j = 0;j < rows;j++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        grid.push_back(v);
    }
    cout<<"Our matrix : "<<endl;
    for(int i = 0;i < rows;i++){
        for(int j = 0;j < rows;j++){
            cout<<grid[i][j]<<" ";
        }
        cout<<endl;
    }
    Solution solve;
    vector<vector<int>> result = solve.largestLocal(grid); 
    cout<<"Resulted matrix by collecting largest value : "<<endl;
    for(int i = 0;i < result.size();i++){
        for(int j = 0;j < result[i].size();j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
}