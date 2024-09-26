#include <bits/stdc++.h>
using namespace std;

int findMin(vector<int> arr)
{
     int min=INT_MAX;
     for(int i=0 ;i<arr.size() ;i++)
     {
         if(min>arr[i])
         {
             min=arr[i];
         }
     }
     return min;
}

int main() {
	
     vector<int> arr={19,18,17,1,2,9,90} ;
    
     int ans= findMin(arr);
     cout<<ans;
}