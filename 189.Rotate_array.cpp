//better solution
/*#include <bits/stdc++.h>
using namespace std;

vector<int>arra(vector<int> & arr,int k)
{

    int size=arr.size();
    k=k % size;
    vector<int>temp;

    for(int i=size-k;i<size;i++)
    {
        temp.push_back(arr[i]);
    }

    for(int i=size-k-1;i>=0;i--)
    {
        arr[i+k]=arr[i];
    }

    for(int i=0;i<k;i++)
    {
        arr[i]=temp[i];
    }

    return arr;

}

int main()
{
    int size,k;
    cin>>size>>k;

    vector<int>arr(size);

    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    vector<int>result=arra(arr,k);

    for(int x:result)
    {
        cout<<x<<" ";
    }

}
*/


//optimal solution =>>
class Solution {
public:

     void reverse(int start,int end,vector<int>&nums){
            while(start<end)
            {
                swap(nums[start++],nums[end--]);
            }
        }
    void rotate(vector<int>& nums, int k) { 
        int size=nums.size();
        k=k%size;
        int calc=size-k;
        reverse(0,calc-1,nums);
        reverse(calc,size-1,nums);
        reverse(0,size-1,nums);


    }
};