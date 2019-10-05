#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, temp, counter=0, ans=0;
    cin>>n;
    temp = n;
    int sures[n];
    while(n)
    {
        for(int i=0; i<3; i++)
            cin>>sures[i];
        for(int i=0; i<3; i++)
            {
                if(sures[i] == 1)
                    counter++;
            } 
        if(counter>1)      
            ans++; 
        counter = 0;
        n--;
    }
    cout<<ans;
    return 0;
}