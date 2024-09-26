#include <bits/stdc++.h>
using namespace std;
vector<int> greaterValue(vector<int>& s, int target)
{
    vector<int> arr;
     for (int i = 0; i < s.size(); i++)
    {
        if ( s[i]>target)
        {
        arr.push_back(s[i]) ;
             
        }
    }
    return arr;
}

int main()
{
    vector<int> v = {7, 9, 6, 4, 2, 5, 3,6, 2,};
    int target;
    cin >> target;
    vector<int>ans = greaterValue(v,target);
    for(auto it: ans)
        {
            cout<<it<<" ";
        }

    return 0;
}