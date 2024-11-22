#include<iostream>
using namespace std;
void intTri(int n){
    for (int i = 1; i <=n; i++)
    {
        for (int j = n; j>0; j--)
        {
            if (j<=i)
            {
                cout<<n-j+1;
            }
            else 
            {
                cout<<" ";
            }

        }
        cout<<"\n";
        
    }
    
}
int main()
{
    intTri(5);
    return 0;
}