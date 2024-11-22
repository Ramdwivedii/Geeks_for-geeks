#include<iostream>
using namespace std;
bool leapYear(int n)
{
    if ((n%4==0 and n%100!=0) or (n%400==0))
    {
        return true;
    }
    else {
        return false;
    }
}
int main()

{
    cout<<leapYear(2025);
    return 0;
}