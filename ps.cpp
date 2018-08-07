#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i=30,j,a,b,c,d,count=0;
	 while(true)
	 {
	 	j=i*i;
	 	count++;
	 	i++;
	 	//if(j>9999)
	 	  //break;
	 	  //cout<<j<<endl;
	 	  a=j%10;
	 	  b=(j%100)/10;
	 	  c=(j%1000)/100;
	 	  d=(j%10000)/1000;
	 	  cout<<d<<" "<<c<<" "<<b<<" "<<a<<aendl;
	 	  if(a==b&&c==d)
	 	    {
	 	    	cout<<j;
	 	    	//break;
	 	    }
	 }
	 cout<<endl<<count;
}
