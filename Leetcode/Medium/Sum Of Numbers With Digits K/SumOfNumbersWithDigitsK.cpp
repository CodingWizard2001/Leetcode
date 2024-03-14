// Given two integers num and k, consider a set of positive integers with the following properties: The units digit of each integer is k. The sum of the integers is num. Return the minimum possible size of such a set, or -1 if no such set exists.

#include<iostream>
using namespace std;
int minimumNumbers(int num, int k) {
    if (num == 0) return 0;
    for (int i = 1; i <= 10 && i * k <= num; ++i)
        if (i * k % 10 == num % 10)
        return i;
    return -1;
}
int main(){
    int num,k;
    cout<<"Enter a number : ";
    cin>>num;
    cout<<"Units digit of each integer : ";
    cin>>k;
    cout<<"The minimum possible size of such a set is : "<<minimumNumbers(num,k);
}