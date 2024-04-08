// The school cafeteria offers circular and square sandwiches at lunch break, referred to by numbers 0 and 1 respectively. All students stand in a queue. Each student either prefers square or circular sandwiches. The number of sandwiches in the cafeteria is equal to the number of students. The sandwiches are placed in a stack. At each step: 1. If the student at the front of the queue prefers the sandwich on the top of the stack, they will take it and leave the queue. 2. Otherwise, they will leave it and go to the queue's end. This continues until none of the queue students want to take the top sandwich and are thus unable to eat. You are given two integer arrays students and sandwiches where sandwiches[i] is the type of the i​​​​​​th sandwich in the stack (i = 0 is the top of the stack) and students[j] is the preference of the j​​​​​​th student in the initial queue (j = 0 is the front of the queue). Return the number of students that are unable to eat.


#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        vector<int> count(2);
        for (const int student : students) ++count[student];
        for (int i = 0; i < sandwiches.size(); ++i) {
          if (count[sandwiches[i]] == 0) return sandwiches.size() - i;
          --count[sandwiches[i]];
        }
        return 0;
    }
};
int main(){
    Solution solution;

    // First
    vector<int> students = {1, 1, 0, 0};
    vector<int> sandwiches = {0, 1, 1, 0};
    int remainingStudents = solution.countStudents(students, sandwiches);
    cout << "Number of students who won't be able to eat: " << remainingStudents << endl;

    // Second
    students = {1,1,1,0,0,1};
    sandwiches = {1,0,0,0,1,1};
    remainingStudents = solution.countStudents(students, sandwiches);
    cout << "Number of students who won't be able to eat: " << remainingStudents << endl;
}