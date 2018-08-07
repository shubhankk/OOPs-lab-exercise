#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,l;
	for(k=1;k<=5;k++)
	{
		for(l=0;l<5-k;l++)
		    cout<<" ";
		for(i=0;i<k;i++)
		   cout<<'*';
	    for(j=0;j<k-1;j++)
	       cout<<'*';
	   cout<<endl;
	}
}
