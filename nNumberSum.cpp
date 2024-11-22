#include<iostream>
using namespace std;
int nNumsum(int n)
{
    int sum=0;
    sum = n*(n+1)/2;
    return sum;

    
}
int main()
{
    cout<<nNumsum(50);
    
    return 0;
}