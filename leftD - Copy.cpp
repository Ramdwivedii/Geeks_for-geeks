#include<iostream>
using namespace std;
void reverse(int a[], int low, int high)
    {
        while(low<high)
        {
            swap(a[low],a[high]);
            low++;
            high--;
        }
    }
void leftD(int arr[],int n,int d)
{
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
}

    
    

int main()
{
    int a[]={5,877,9,35,94,4,5};

    leftD(a,7,2);
    for(int i=0;i<7;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}