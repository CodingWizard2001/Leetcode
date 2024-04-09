// A bus has n stops numbered from 0 to n - 1 that form a circle. We know the distance between all pairs of neighboring stops where distance[i] is the distance between the stops number i and (i + 1) % n. The bus goes along both directions i.e. clockwise and counterclockwise. Return the shortest distance between the given start and destination stops.


#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int clockwise = 0;
        int counterclockwise = 0;
        if (start > destination) swap(start, destination);
        for (int i = 0; i < distance.size(); ++i) {
          if (i >= start && i < destination) clockwise += distance[i];
          else counterclockwise += distance[i];
        }
        return min(clockwise, counterclockwise);
    }
};
int main(){
    Solution solution;

    // 1st Step
    vector<int> distance = {1, 2, 3, 4};
    int start = 0;
    int destination = 1;
    int minDistance = solution.distanceBetweenBusStops(distance, start, destination);
    cout << "Minimum distance between bus stops: " << minDistance << endl;

    // 2nd Step
    distance = {1, 2, 3, 4};
    start = 0;
    destination = 2;
    minDistance = solution.distanceBetweenBusStops(distance, start, destination);
    cout << "Minimum distance between bus stops: " << minDistance << endl;

    // 3rd Step
    distance = {1, 2, 3, 4};
    start = 0;
    destination = 3;
    minDistance = solution.distanceBetweenBusStops(distance, start, destination);
    cout << "Minimum distance between bus stops: " << minDistance << endl;
}