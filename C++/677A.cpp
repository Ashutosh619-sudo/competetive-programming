#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, h, counter = 0;
    cin>>n>>h;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    for(int i=0; i<n; i++)
    {
        if(arr[i]>h)
            counter += 2;
        else
            counter++;        
    }
    cout<<counter;
    return 0;
}