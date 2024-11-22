#include<iostream>
using namespace std;
int seclargest(int arr[],int n)
{
    int res= -1;
    int largest=0;
    for (int i=1;i<n;i++)
    {
        if(arr[i]>arr[largest])
        {
            res=largest;
            largest=i;
        }
        else if (arr[i]!=arr[res])
        {
            if ((res==-1) || (arr[i]>arr[res]))
            {
                res=i;
            }
        }
        
    }
    return res;

}
int main()
{
    int a[]={10,10,10,10,10};
    cout<<seclargest(a,5);
    return 0;
}