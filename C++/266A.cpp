#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char stones[n];
    int counter = 0;
    cin>>stones;
    
    for(int i=0; i<(strlen(stones)-1); i++)
        {
            if(stones[i] == stones[i+1])
            counter++;
        }
    cout<<counter;
    
    return 0;
}