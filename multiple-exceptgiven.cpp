#include<iostream>
using namespace std;
void Multiple_except(int n , int e)
{
    for (int i = 0; i <=n; i++)
    {
        if (i%3==0){
            continue;
        }
        else {cout<<i<<" ";}
    }
    
}
int main()

{
Multiple_except(10,3);
    
    return 0;
}