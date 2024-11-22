#include<iostream>
using namespace std;
int sum(int n,int k=1)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1){
            return k;
    }
    else {
        return sum(n-1,n+k);
    }
}
int main()
{
    cout<<sum(1);
    return 0;
}