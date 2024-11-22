#include<iostream>
using namespace std;
int left(int arr[],int n)
{
    
    int temp=arr[0];
    for (int i=0;i<n;i++)
    {
        arr[i]=arr[i+1];
    
    }
    arr[n-1]=temp;
}
int main()
{
    int a[]={5,7,9,7,1};
    int w=left(a,5);
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}