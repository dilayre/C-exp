#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int a;
	cin>>a;
	int x[a];
	for(int i=0;i<a;i++)
	{
		x[i]=rand()%100;
	}
	
	for(int i=0;i<a;i++)
	{
		cout<<x[i]<<endl;
	}
	int ek=101;
	for(int i=0;i<a;i++)
	{
		if(x[i]<ek)
		{
			ek=x[i];
		}
	}
	cout<<ek;
}
