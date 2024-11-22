
#include<iostream>
using namespace std;
void square(int s) {
    // code here
    for (int i=1;i<=s;i++)
    {
        int j=1;
        while(j<=s)
        {
            if (i==1 or i==s){
            cout<<"*";
            
            }
            else 
            {
                if (j==1 or j==s)
                {
                    cout<<"*";
                }
                else  { 
                    cout<<" ";
                    
                }
               
            }
            j++;
            
           
        }
        cout<<endl;
    }
}
int main()
{
    square(5);
    
    return 0;
}
 