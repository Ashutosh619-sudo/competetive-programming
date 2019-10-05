#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a[4], sum = 0;
	char s[100000];
	for(int i=0; i<4; i++)
		cin>>a[i];
	cin>>s;
	for(int i=0; i<strlen(s); i++)
	{
		if(s[i] == '1')
			sum = sum + a[0];
		if(s[i] == '2')
			sum = sum + a[1];
		if(s[i] == '3')
			sum = sum + a[2];
		if(s[i] == '4')
			sum = sum + a[3];
	}
	cout<<sum;
	
	return 0;
}
