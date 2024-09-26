#include <bits/stdc++.h>
using namespace std;

int sum(vector<int> s)
{
    int sum=0;
    for (int i = 0; i < s.size(); i++)
    {
            sum=sum+s[i];
    }
    return sum;
}

int main()
{
    vector<int> s = {1,2,5,3,4,1,2,3,4};
    
    int ans = sum(s);
    cout<<"sum od all element is : "<<ans;
    
 
    return 0;
}