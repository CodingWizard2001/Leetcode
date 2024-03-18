// There are some spherical balloons taped onto a flat wall that represents the XY-plane. The balloons are represented as a 2D integer array points where points[i] = [xStart, xend] denotes a balloon whose horizontal diameter stretches between xStart and xend. You do not know the exact y-coordinates of the balloons. Arrows can be shot up directly vertically (in the positive y-direction) from different points along the x-axis. A balloon with xStart and xend is burst by an arrow shot at x if xStart <= x <= xend. There is no limit to the number of arrows that can be shot. A shot arrow keeps traveling up infinitely, bursting any balloons in its path. Given the array points, return the minimum number of arrows that must be shot to burst all balloons.

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int findMinArrowShots(vector<vector<int>>& points) {
    if(points.size() == 0) return 0;
    sort(points.begin(), points.end());
    int start = points[0][0], end = points[0][1];
    int ans = 1;
    for(vector<int>& point : points){
        if(point[0] <= end){
            start = point[0];
            end = min(end, point[1]);
        }
        else{
            ans++;
            start = point[0];
            end = point[1];
        }
    }    
    return ans;
}
int main(){
    int rows;
    cout<<"Enter no. of rows : ";
    cin>>rows;
    vector<vector<int>>points;
    cout<<"Give input : "<<endl;
    for(int i = 0;i < rows;i++){
        vector<int>v;
        for(int j = 0;j < 2;j++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        points.push_back(v);
    }
    cout<<"The minimum number of arrows that must be shot to burst all balloons are : "<<findMinArrowShots(points);
}