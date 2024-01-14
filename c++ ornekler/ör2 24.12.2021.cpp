#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	cout<<"kac tane rastgele sayi istiyorsunuz: ";
	int a,ort,toplam=0;
	cin>>a;
	int dizi[a];
	for(int i=0;i<a;i++)
	{
		dizi[i]=rand()%500;
	}
	for(int i=0;i<a;i++)
	{
		cout<<dizi[i]<<endl;
		toplam = toplam + dizi[i];
		ort=toplam/a;
		cout<<"ortalamanýz: "<<ort;
	
		if(ort>dizi[i])
		{
			cout<<"ortalamadan büyük olan sayilar: "<<dizi[i]<<endl;
		}
		else
		{
			cout<<"ortalamadan küçük olan sayilar: "<<dizi[i];
		}
	}
	
	
}
