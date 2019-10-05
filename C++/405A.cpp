#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr;
    int n, input;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>input;
        arr.push_back(input);
    }
    sort(arr.begin(), arr.end());
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    return 0;
}