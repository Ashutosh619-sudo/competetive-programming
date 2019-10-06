#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, lastItr, firstItr, serejaCount=0, dimaCount=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    firstItr = 0;
    lastItr = n-1;
    int turn = 0;
    while(lastItr>=firstItr)
    {
        if(turn%2 == 0)
        {
            if(arr[firstItr]>arr[lastItr])
            {
                serejaCount = serejaCount + arr[firstItr];
                firstItr++;
            }
            else
            {
                serejaCount = serejaCount + arr[lastItr];
                lastItr--;
            }  
               
        }
        else
        {
            if(arr[firstItr]>arr[lastItr])
            {
                dimaCount = dimaCount + arr[firstItr];
                firstItr++;
            }
            else
            {
                dimaCount = dimaCount + arr[lastItr];
                lastItr--;
            }
        }
        turn++;
        // if((firstItr == lastItr))
        // {

        // }
    }

    cout<<serejaCount<<" "<<dimaCount;
    return 0;
}