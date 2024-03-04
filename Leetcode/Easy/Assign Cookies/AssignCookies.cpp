// Assume you are an awesome parent and want to give your children some cookies. But, you should give each child at most one cookie. Each child i has a greed factor g[i], which is the minimum size of a cookie that the child will be content with; and each cookie j has a size s[j]. If s[j] >= g[i], we can assign the cookie j to the child i, and the child i will be content. Your goal is to maximize the number of your content children and output the maximum number.

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int findContentChildren(vector<int>& g, vector<int>& s){
    sort(g.begin(),g.end());
    sort(s.begin(),s.end());
    int i = 0,j = 0,count = 0;
    while(i < g.size() && j < s.size()){
        if(s[j] >= g[i]){
            count++;
            i++;
            j++;
        }
        else{
            j++;
        }
    }
    return count;
}
int main(){
    int size1,size2;
    cout<<"Enter the greed of childrens : ";
    cin>>size1;
    vector<int>g;
    cout<<"Give input : ";
    for(int i = 0;i < size1;i++){
        int x;
        cin>>x;
        g.push_back(x);
    }
    cout<<"Enter the size of the cookies : ";
    cin>>size2;
    vector<int>s;
    cout<<"Give input : ";
    for(int i = 0;i < size2;i++){
        int x;
        cin>>x;
        s.push_back(x);
    }
    cout<<"Maximum children can assigned by the cookie is : "<<findContentChildren(g,s);
}