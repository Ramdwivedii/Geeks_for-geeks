#include<iostream>
using namespace std;
int NdaysBefore(int currentDay , int dayBefore){

    int newDay=dayBefore%7;
        int day = (currentDay-newDay+7)%7;
        return day;
}
int main()
{
    cout<<NdaysBefore(0,2);
    return 0;
}