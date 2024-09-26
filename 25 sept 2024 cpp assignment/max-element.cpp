#include <bits/stdc++.h>
using namespace std;

int findMax(vector<int> arr)
{
     int max=INT_MIN;
     for(int i=0 ;i<arr.size() ;i++)
     {
         if(max<arr[i])
         {
             max=arr[i];
         }
     }
     return max;
}

int main() {

     vector<int> arr={19,18,17,1,2,9,90} ;
    
     int ans= findMax(arr);
     cout<<ans;
}