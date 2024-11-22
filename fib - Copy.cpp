#include<iostream>
using namespace std;

// int fact(int n,int k=1)
// {
//     if(n==0)
//     {
//         return k;
//     }
//     else 
//     {
//         return fact(n-1,n*k);
//     }
// }

int fibb(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if (n==1 || n==2)
    {
        
        return 1;
    }
    else
    {

        return (fibb(n-1)+fibb(n-2));       
    }
    
}
int main()
{

    cout<<fibb(6);
    return 0;
}