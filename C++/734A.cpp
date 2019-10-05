#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int aCount = 0, dCount = 0;
    cin>>n;
    char str[n];
    cin>>str;
    for(int i=0; i<n; i++)
    {
        if(str[i] == 'A')
            aCount++;
        else
            dCount++;
    }

    if(aCount > dCount)
        cout<<"Anton";
    else
    {
        if(aCount == dCount)
            cout<<"Friendship";
        else
        {
            cout<<"Danik";
        }
    }
    return 0;
}