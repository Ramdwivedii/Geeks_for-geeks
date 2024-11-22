#include<iostream>
using namespace std;
void zeroEnd(int arr[],int n)
{
    int temp[n]={0};
    int res=0;
    for(int i=0;i<n;i++)
    {
        if (arr[i]!=0)
        {
            temp[res]=arr[i];
            res++;
        }
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=temp[i];
    }
}
int main()
{
    int a[]={0,8,0,4,0,99,7,0,4};
    zeroEnd(a,9);
    for(int i=0;i<9;i++)
    {
        cout<<a[i]<<" ";
    }

    
    return 0;
}