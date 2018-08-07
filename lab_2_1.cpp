#include<bits/stdc++.h>
using namespace std;
int top,nn;
char * s[500];
void display()
{
	int i=0;
	for(i=0;i<top;i++)
	{
		cout<<s[i]<<endl;
		//i++;
	}
}
void deletee()
{
	int i;
	cout<<"enter the ith name to delete\n";
	cin>>i;
	free(s[i]);
}
void insert()
{
   cout<<"enter the length and then name\n";
   int n;
   cin>>n;
   char st[n];
   cin>>st;
   s[top]= new char[n+1];
   strcpy(*(s+top),st);
   //cout<<s[top]<<endl;
   top++;
}
int main()
{
	cout<<"enter the size of table\n";
	cin>>nn;
	//cahr name[50];
	cout<<"enter the initial values\n";
	for(int i=0;i<nn;i++)
	{ 
	 cout<<"enter the length\n";
	 int n;
	 cin>>n;
	 char name[n];
	 cin>>name;
	 s[top]=new char[n+1];
	 strcpy(*(s+top),name);
	 top++;
	}
	printf("enter your choice\n1: To insert a name\n2: To delete a name\n3: To display\n4: To exit\n");
	while(1)
	{
		cout<<"enter choice again\n";
		int ch;
		cin>>ch;
		//bool check=false;
		switch(ch)
		{
			case 1:
				{
				   insert();
				   break;
			    }
			case 2:
				{
					deletee();
					break;
				}
			case 3:
				{
					display();
					break;
				}
			case 4:
				{
					exit(0);
				}
		}
		//cout<<p[top-1];
		//if(check==true)
		  //  break;
	}
}
