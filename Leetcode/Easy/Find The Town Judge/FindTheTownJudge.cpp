// In a town, there are n people labeled from 1 to n. There is a rumor that one of these people is secretly the town judge. If the town judge exists, then:

// The town judge trusts nobody.
// Everybody (except for the town judge) trusts the town judge.
// There is exactly one person that satisfies properties 1 and 2.

// You are given an array trust where trust[i] = [ai, bi] representing that the person labeled ai trusts the person labeled bi. If a trust relationship does not exist in trust array, then such a trust relationship does not exist. Return the label of the town judge if the town judge exists and can be identified, or return -1 otherwise.

#include<bits/stdc++.h>
using namespace std;
int findJudge(int n, vector<vector<int>>& trust) {
    vector<int>count(n + 1);
    for(vector<int>&t : trust){
        --count[t[0]];
        ++count[t[1]];
    }
    for(int i = 1;i < n + 1;i++){
        if(count[i] == n - 1){
            return i;
        }
    }
    return -1;
}
int main(){
    int n,rows,cols;
    cout<<"Enter people : ";
    cin>>n;
    cout<<"Enter no. of rows : ";
    cin>>rows;
    cout<<"Enter no. of cols : ";
    cin>>cols;
    vector<vector<int>>trust;
    cout<<"Give input : "<<endl;
    for(int i = 0;i < rows;i++){
        vector<int>v;
        for(int j = 0;j < cols;j++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        trust.push_back(v);
    }
    cout<<"The label of the town judge : "<<findJudge(n,trust);
}