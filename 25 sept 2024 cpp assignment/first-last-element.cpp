 #include <bits/stdc++.h>
using namespace std;

int findLastOccurrence(vector<int>& s, int target)
{
    int index = -1; 
    int index2=-1;
    for (int i = 0; i < s.size(); i++)
    {
        if (target == s[i])
        {
            index = i; 
        }
        if(target==s[i])
        {
            index2=i;
            break;
        }
    }
    return index ;  
}

int main()
{
    vector<int> v = {7, 9, 6, 4, 2, 5, 3,6, 2};
    int target;
    cin >> target;
    int ans = findLastOccurrence(v, target);
     
    

    return 0;
}