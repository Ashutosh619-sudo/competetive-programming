#include <bits/stdc++.h>
using namespace std;

int main()
{
	char str[100];
	int uCount=0, lCount=0;
	vector<int> indexL, indexU;
	cin>>str;
	for(int i=0; i<strlen(str); i++)
	{
		if(isupper(str[i]))
		{
			uCount++;
			indexU.push_back(i);
		}
		else
		{
			lCount++;
			indexL.push_back(i);
		}
	}
	if(uCount > lCount)
	{
		for(int i=0; i<=indexL.size(); i++)
		{
			str[indexL[i]] = char(toupper(str[indexL[i]]));
		}
		
		
	}
	
	else
	{
		for(int i=0; i<=indexU.size(); i++)
		str[indexU[i]] = char(tolower(str[indexU[i]]));
	}
	cout<<str;
	return 0;
}
