#include<iostream>
#include<math.h>
using namespace std;
int binToDec(int n)
{
    int count=0;
    for(int i=n; i>0;i=i/10)
    {
        count++;
    }
    int dec=0;
    int rem;
    
    
    for (int k=0;k<count;k++)
    {
        rem=n%10;
        dec=dec+rem*pow(2,k);
        n=n/10;

    }
    return dec;
}
int main()
{

    cout<<binToDec(10111);
    return 0;
}