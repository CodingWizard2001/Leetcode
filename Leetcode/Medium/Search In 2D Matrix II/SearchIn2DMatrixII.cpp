// Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:

//  1.  Integers in each row are sorted in ascending from left to right.
//  2.  Integers in each column are sorted in ascending from top to bottom.

#include<iostream>
#include<vector>
using namespace std;
bool searchMatrix(vector<vector<int>>& matrix, int target){
    int left = 0, right = matrix[0].size() - 1;
    while(left < matrix.size() && right >= 0){
        if(matrix[left][right] == target) return true;
        else if(matrix[left][right] > target) --right;
        else ++left;
    }
    return false;
}
int main(){
    int rows,cols;
    cout<<"Enter no. of rows : ";
    cin>>rows;
    cout<<"Enter no. of cols : ";
    cin>>cols;
    vector<vector<int>>matrix;
    cout<<"Give input : "<<endl;
    for(int i = 0;i < rows;i++){
        vector<int>v;
        for(int j = 0;j < cols;j++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        matrix.push_back(v);
    }
    int target;
    cout<<"Enter the target element : ";
    cin>>target;
    if(searchMatrix(matrix,target)){
        cout<<"Found the element";
    }
    else{
        cout<<"Sorry element not found";
    } 
}