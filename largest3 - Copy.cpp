#include<iostream>
using namespace std;
int largestOf3(int n1, int n2 , int n3)
{
    if (n1>n2 and n1>n2)  
    {
      return n1;
    }
    else if (n2>n1)
    {
        if (n2>n3)
        {
            return n2;
        }
        else 
        {
            return n3;
        }
    }
    else if (n3>n1)
    {
        if (n3>n2)
        {
            return n3;
        }
        else 
        {
            return n2;
        }
    }
    else {
        return n1;
    }
    
}

int main()
{
    cout<<largestOf3(5,5,5);
    return 0;
}