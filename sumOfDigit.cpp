#include<iostream>
using namespace std;
int sumOfDigits(int n)
{
    if(n<=9)
    {
        return n;
    }
    else 
    {
        return n%10+ sumOfDigits(n/10);
    }
}
int main()
{
    cout<<sumOfDigits(873);
    return 0;
}