#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int deger,toplam=0;
	for(int i=0;i<5;i+=2)
	{
		cout<<i+1<<". degeri giriniz";
		cin>>deger;
		toplam=toplam+deger;
	}
	
	cout<<"girilen sayilarin toplami="<<toplam;
	
	
	
}