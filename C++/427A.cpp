#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, freeOff=0, crimes=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    for(int i=0; i<n; i++)
    {
        if(arr[i]>0)
        {
            freeOff = freeOff + arr[i];
        }
        else
        {
            if((freeOff > 0))
            {
                freeOff--;
            }
            else
            {
                crimes++;
            }
            
        }
    }

    cout<<abs(crimes);
    
    return 0;
}