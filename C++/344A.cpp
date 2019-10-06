#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, counter = 1, prev;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    prev = arr[0];
    for(int i=0; i<n; i++)
    {         
        if(prev != arr[i])
            counter++;
        prev = arr[i];
    }
    cout<<counter;  
    return 0;
}