# 452. Minimum Number of Arrows to Burst Balloons

### Description
There are some spherical balloons taped onto a flat wall that represents the XY-plane. The balloons are represented as a 2D integer array points where points[i] = [xStart, xEnd] denotes a balloon whose horizontal diameter stretches between xStart and xEnd. You do not know the exact y-coordinates of the balloons.

Arrows can be shot up directly vertically (in the positive y-direction) from different points along the x-axis. A balloon with xStart and xEnd is burst by an arrow shot at x if xStart <= x <= xEnd. There is no limit to the number of arrows that can be shot. A shot arrow keeps traveling up infinitely, bursting any balloons in its path.

Given the array points, return the minimum number of arrows that must be shot to burst all balloons.

### Code
```cpp

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

```

### Steps to solution:

- If the input vector points is empty, the function returns 0, indicating that no arrows are needed.
- The function sorts the points based on their starting positions.
- It initializes start and end variables with the starting and ending positions of the first point, respectively.
- It initializes ans variable to 1, indicating that at least one arrow will be needed.
- It iterates through each point in the sorted points vector.
- For each point, if its starting position is less than or equal to the current ending position (end), it updates the start position to the maximum of the current starting position and the start variable, and updates the end position to the minimum of the current ending position and the ending position of the point.
- If the starting position of the point is greater than the current ending position (end), it means a new arrow is needed. In this case, it increments the ans variable by 1 and updates both the start and end positions to the starting and ending positions of the current point.
- After processing all points, it returns the final value of the ans variable, which represents the minimum number of arrows needed to burst all balloons.

#### Time Complexity: O(nlogn)  
#### Space Complexity: O(1)