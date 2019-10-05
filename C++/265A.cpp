#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[50], t[50];
    cin>>s>>t;
    int position = 0, counter = 0;
    for(int i=0; i<strlen(t); i++)
    {
        if(s[position] == t[i] && position<strlen(s))
        {
            
            position++;
        }

        // for(int j=position; j<strlen(t); j++)
        // {
        //     if(s[i] == t[j])
        //     {
        //         counter++;
        //         break;
        //     }
        //     j++;
            
        
    }
    cout<<position+1;
    return 0;
}