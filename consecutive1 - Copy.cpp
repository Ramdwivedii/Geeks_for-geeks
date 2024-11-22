#include<iostream>
#include<vector>
using namespace std;
int fun(vector<int> arr)
{
    int count=0;
    int total=0;
    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i]==1)
        {
            count++;

        }
        
        if (total<count)
            {
                total=count;
            }
        if (arr[i]!=1)
        {
            
            count=0;
        }
        
        
    }
    return total;

    
}

int main()
{
    vector<int> arr={1,1,1,1,1,0,0,0};
    cout<<fun(arr);
    return 0;
}