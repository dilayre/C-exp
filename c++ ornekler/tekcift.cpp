#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int sayi,tektoplam=0,cifttoplam=0;
	cout<<"bir sayi giriniz";
	cin>>sayi;
	for(int i=0;i<=sayi;i++)
	{
		if(i%2==0)
		{
			cifttoplam+=i;
		}
		if(i%2==1)
		{
			tektoplam=tektoplam+i;
		}
	}
	
	cout<<"0 ile girilen sayi arasindaki tek sayilarin toplami="<<tektoplam<<endl;
	cout<<"0 ile girilen sayi arasindaki cift sayilarin toplami="<<cifttoplam<<endl;
	
	
}