// Given three integers x, y, and bound, return a list of all the powerful integers that have a value less than or equal to bound. An integer is powerful if it can be represented as xi + yj for some integers i >= 0 and j >= 0.

#include<bits/stdc++.h>
using namespace std;
vector<int> powerfulIntegers(int x, int y, int bound) {
    unordered_set<int>ans;
    for (int i = 1; i < bound; i *= x) {
        for (int j = 1; i + j <= bound; j *= y) {
            ans.insert(i + j);
            if (y == 1) break;
        }
        if (x == 1) break;
    }
    return {ans.begin(),ans.end()};
}
int main(){
    int x,y,bound;
    cout<<"Enter the value of x : ";
    cin>>x;
    cout<<"Enter the value of y : ";
    cin>>y;
    cout<<"Enter the value of bound : ";
    cin>>bound;
    vector<int>result = powerfulIntegers(x,y,bound);
    cout<<"List of all the powerful integers are : ";
    for(int i = 0;i < result.size();i++){
        cout<<result[i]<<" ";
    }
}