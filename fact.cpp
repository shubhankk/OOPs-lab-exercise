#include<bits/stdc++.h>
using namespace std;
int fact=1;
int facto(int n)
{
	fact=fact*n;
	if(n==1)
	  return fact;
    return facto(n-1);
}
int main()
{
	int n;
	cin>>n;
	cout<<facto(n);
}
