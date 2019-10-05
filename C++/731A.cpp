#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str[100];
    int dist, revDis, currentPos, sum = 0;
    cin>>str;
    //dist = (int)str[0] - 96;
    dist = 1;
    currentPos = 'a';

    dist = abs((int)str[0] - currentPos);

    for(int i=0; i<strlen(str); i++)
    {
        dist = abs((int)str[i] - currentPos);
        revDis = abs(26-dist);
        if(dist > revDis)
            sum = sum + revDis;
        else
            sum = sum + dist;
        currentPos = str[i];
    }

    cout<<sum;
    //TestingArea :-
    // cout<<x<<endl;
    return 0;
}