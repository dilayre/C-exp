#include<iostream>
using namespace std;
int main()
{
	int sayi,toplam=0;
	cout<<"Dizi eleman Sayisini Giriniz";
	cin>>sayi;
	int numbers[sayi];
	for(int i=0;i<sayi;i++)
	{
		cin>>numbers[i];
	}
	for(int i=0;i<sayi;i++)
	{
		toplam=toplam+numbers[i];
	}
	
	cout<<"Dizi elemanlarinin ortalamasi="<<toplam/sayi<<endl;
		
}
