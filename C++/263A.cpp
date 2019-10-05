#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5][5];
    int x,y, xMoves, yMoves;
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            cin>>arr[i][j];
        }
        for(int j=0; j<5; j++)
        {
            if(arr[i][j] == 1)
                {
                    x=i;
                    y=j;
                }
        }

    }

    if(x>2)
        xMoves = x-2;
    else
        xMoves = 2-x;
    if(y>2)
        yMoves = y-2;
    else
        yMoves = 2-y;
    cout<<xMoves+yMoves;

    return 0;
}