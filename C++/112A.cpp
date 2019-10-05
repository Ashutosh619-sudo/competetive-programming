#include <bits/stdc++.h>
#include <cctype>
using namespace std;

int main()
{
    char strX[100], strY[100];
    cin>>strX>>strY;
    for(int i=0; i<strlen(strX); i++)
    {
    strX[i] = char(tolower(strX[i]));
    strY[i] = char(tolower(strY[i]));    
    }
    int result = strcmp(strX, strY);

    if(result > 0)
        cout<<"1";
    else
    {
        if(result < 0)
            cout<<"-1";
        else
            cout<<"0";
    }
    return 0;
}