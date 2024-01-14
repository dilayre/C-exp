#include<iostream>
#include<stdlib.h>
//#include<conio.h>

using namespace std;
int main()
{
	int a,tek=0,cift=0;
	cout<<"Dizi eleman sayisini giriniz";
	cin>>a;
	int sayilar[a];
	for(int i=0;i<a;i++)
	{
		sayilar[a]=rand()%500;
	}
	for(int i=0;i<a;i++)
	{
		cout<<sayilar[i]<<endl;
	}
	for(int i=0;i<a;i++)
	{
		if(sayilar[i]%2==0)
		{
			cift=cift+sayilar[i];
		}
		else
		{
			tek=tek+sayilar[i];
		}
	}
	
	cout<<"dizinin tek sayi elemanlarinin toplami="<<tek<<endl;
	cout<<"dizinin cift sayi elemanlarinin toplami="<<cift<<endl;
	
	
	
	
}
