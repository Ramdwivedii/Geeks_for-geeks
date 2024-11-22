#include <iostream>
#include <vector>
using namespace std;
vector<int> fun(vector<int>&arr , int k)
{
    int sum=0;
    vector<int>newarr{arr[0],arr[1],arr[2]};
    int cum=arr[0]+arr[1]+arr[2];
    for(int i=0;i<arr.size();i++)
    {
        for(int j=i;j<k+i;j++)
        {
            sum+=arr[j];
        }
        if(sum<cum)
        {
            for(int m=0;m<k;m++)
            {
                newarr[m]=arr[i+m];
            }
        }
    }
    return newarr;
}
int main()
{
    vector<int> arr{3,2,1,-4,-6,-3,1};
    int k=3;
    vector<int> ans = fun(arr,k);
    for (int i = 0; i < ans.size(); ++i) {
        cout << ans[i] << " ";
    }
    return 0;

}


