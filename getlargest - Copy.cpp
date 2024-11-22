#include<iostream>
using namespace std;
int getlargest(int arr[],int n)
{
    int l=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>arr[l]){
            l=i;
        }
    }
    return l;
}
int main()
{
    int arr[5]={0,0,99,99,4};
    cout<<getlargest(arr,5);
    return 0;
}