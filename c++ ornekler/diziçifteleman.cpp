#include<iostream>
using namespace std;
int main()
{
	int numbers[5],cadet=0,tadet=0;
	for(int i=0;i<5;i++)
	cin>>numbers[i];
	
	for(int i=0;i<5;i++)
	{
		if(numbers[i]%2==0)
		{
			cadet++;
		}
		else
		{
			tadet++;
		}
	}
	cout<<"dizinin icerisindeki cift sayi="<<cadet<<"kadardir"<<endl;
	cout<<"dizinin icerisindeki tek sayi="<<tadet<<"kadardir"<<endl;
}
