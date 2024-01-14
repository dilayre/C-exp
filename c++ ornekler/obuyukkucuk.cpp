#include<iostream>
#include<stdlib.h>
//#include<conio.h>

using namespace std;
int main()
{
	int a,top=0;
	float ort=0.0;
	cout<<"Dizi eleman sayisini giriniz";
	cin>>a;
	int sayilar[a];
	for(int i=0;i<a;i++)
	{
		sayilar[i]=rand()%500;
	}
	for(int i=0;i<a;i++)
	{
		cout<<sayilar[i]<<endl;
	}
	for(int i=0;i<a;i++)
	{
		top=top+sayilar[i];
	}
	ort=(float)top/a;
	
	int kucuk=0,buyuk=0;
	
	for(int i=0;i<a;i++)
	{
		if(sayilar[i]>ort)
		{
			buyuk++;
		}
		else{
			kucuk++;
		}
	}
	cout<<ort<<endl;
	cout<<"Ortalamadan buyuk eleman sayisi="<<buyuk<<endl;
	cout<<"Ortalamadan kucuk eleman sayisi="<<kucuk;
	
	
	
	
}
