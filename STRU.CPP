#include<iostream>
using namespace std;
int main()
{
    struct point
    {
        int a;
        int y;
    };
    point arr[5];
    for (int i=0;i<5;i++)
    {
        arr[i].a=i;
        arr[i].y=i*10;
    }
    for(int i=0;i<5;i++)
    {
        cout<<arr[i].a<<" ";
        cout<<arr[i].y<<endl;
    }
    
    return 0;
}