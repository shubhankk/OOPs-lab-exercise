#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int  count=0;
	cin>>s;
	char *p;
	p=&s[0];
	while(*p!='\0')
	{
		p++;
		count++;
	}
	cout<<count;
}
