#include<iostream>
using namespace std;
void table(int n){
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=10;j++)
        {
            cout<<i*j <<" ";
        }
        cout<<endl;
    }
}
int main()
{
    table(5);
    return 0;
}