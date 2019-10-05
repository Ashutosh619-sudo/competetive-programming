// Distinct chars = odd --> MALE
// female -->CHAT WITH HER!
// male --> "IGNORE HIM!"

#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str[100];
    set<char> userName;
    cin>>str;

    for(int i=0; i<strlen(str); i++)
        userName.insert(str[i]);
    if(userName.size() % 2 == 0)
        cout<<"CHAT WITH HER!";
    else
        cout<<"IGNORE HIM!";
 
    return 0;
}