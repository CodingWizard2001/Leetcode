// Given two numbers, hour and minutes, return the smaller angle (in degrees) formed between the hour and the minute hand.

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    double angleClock(int hour, int minutes) {
        const double hourHand = (hour % 12 + minutes / 60.0) * 30;
        const double minuteHand = minutes * 6;
        const double diff = abs(hourHand - minuteHand);
        return min(diff, 360 - diff);
    }
};
int main() {
    Solution solution;
    int hour = 12;
    int minutes = 30;
    cout<<"Angle at "<<hour<<":"<<minutes<<" is : "<< solution.angleClock(hour, minutes)<<" degrees"<<endl;

    hour = 3;
    minutes = 30;
    cout<<"Angle at "<<hour<<":"<<minutes<<" is : "<< solution.angleClock(hour, minutes)<<" degrees"<<endl;

    hour = 4;
    minutes = 50;
    cout<<"Angle at "<<hour<<":"<<minutes<<" is : "<< solution.angleClock(hour, minutes)<<" degrees"<<endl;

    return 0;
}