#include<iostream>
using namespace std;
void square(int n){
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < n; j++)
       {
        cout<<"*"<<" ";
       }
       cout<<"\n";
       
    }
    
}
int main()
{
    square(5);
    return 0;
}