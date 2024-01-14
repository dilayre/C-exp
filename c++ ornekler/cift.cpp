#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int e,ct=0,cs=0;
	float co=0.0;
	cin>>e;
	int x[e];
	for(int i=0;i<e;i++)
	{
		x[i]=rand()%10;
	}
	for(int i=0;i<e;i++)
	{
		cout<<x[i]<<endl;
	}
	
	for(int i=0;i<e;i++)
	{
		if(x[i]%2==0)
		{
			cs++;
			ct=ct+x[i];
		}
	}
	
	co=(float)ct/cs;
	cout<<"dizideki cift eleman sayisi="<<cs<<endl;
	cout<<"dizideki cift elemanlarin toplami="<<ct<<endl;
	cout<<"dizideki cift elemanlarin ortalamasi="<<co;
}
