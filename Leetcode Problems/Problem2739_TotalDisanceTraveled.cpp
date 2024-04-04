// A truck has two fuel tanks. You are given two integers, mainTank representing the fuel present in the main tank in liters and additionalTank representing the fuel present in the additional tank in liters. The truck has a mileage of 10 km per liter. Whenever 5 liters of fuel get used up in the main tank, if the additional tank has at least 1 liters of fuel, 1 liters of fuel will be transferred from the additional tank to the main tank. Return the maximum distance which can be traveled.


#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        return (mainTank + min((mainTank - 1) / 4, additionalTank)) * 10;
    }
};
int main(){
    Solution solution;
    int mainTank = 4, additionalTank = 1;
    cout<<"Total distance traveled: "<<solution.distanceTraveled(mainTank,additionalTank)<<" km"<< endl;

    mainTank = 7, additionalTank = 3;
    cout<<"Total distance traveled: "<<solution.distanceTraveled(mainTank,additionalTank)<<" km"<< endl;

    mainTank = 14, additionalTank = 10;
    cout<<"Total distance traveled: "<<solution.distanceTraveled(mainTank,additionalTank)<<" km"<< endl;
}