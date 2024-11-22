#include<iostream>
using namespace std;
int lastDigit(int n)
{
    int ld = n%10;
    return abs(ld);
}
int main()
{
    cout<<lastDigit(-45245);
    return 0;
}