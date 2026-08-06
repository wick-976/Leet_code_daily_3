//better solution
/*#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};

    int size = arr.size();

    // Check if the array is empty
    if (arr.empty())
    {
        cout << "Array is empty!";
        return 0;
    }

    // Get the number of rotations
    int k;
    cout << "Enter the value of k: ";
    cin >> k;

    // Calculate effective rotations
    k = k % size;

    // Temporary array to store the last k elements
    vector<int> temp_array;

    for (int i = size - k; i < size; i++)
    {
        temp_array.push_back(arr[i]);
    }

    // Shift the remaining elements to the right
    for (int i = size - k - 1; i >= 0; i--)
    {
        arr[i + k] = arr[i];
    }

    // Copy the saved elements to the beginning
    for (int i = 0; i < k; i++)
    {
        arr[i] = temp_array[i];
    }

    // Print the rotated array
    cout << "Rotated Array: ";
    for (int x : arr)
    {
        cout << x << " ";
    }

    return 0;
}*/

//optimal solution =>>
/*
#include <bits/stdc++.h>
using namespace std;

void reversal(int start,int end,vector<int>&nums)
{
    while(start<end)
    {
       swap(nums[start++],nums[end--]);
    }
}

int main()
{
   vector<int>arr={1,2,3,4,5,6,7};
   int size=arr.size();
   int k;
   cin>>k;
   k=k%size;
   int calc=size-k;
   reversal(0,calc-1,arr);
   reversal(calc,size-1,arr);
   reversal(0,size-1,arr);
   
   
   for(int x:arr)
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