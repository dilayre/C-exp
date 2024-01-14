#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	cout<<"Dizinin eleman sayisini giriniz";
	int e;
	cin>>e;
	int sayilar[e];
	for(int i=0;i<e;i++)
	{
		sayilar[i]=rand()%500;
	}
	for(int i=0;i<e;i++)
	{
		cout<<sayilar[i]<<endl;
	}
	int eb=0;
	for(int i=0;i<e;i++)
	{
		if(sayilar[i]>eb)
		{
			eb=sayilar[i];
		}
	}
	
	cout<<"Dizinin en buyuk elemani="<<eb<<endl;
}
