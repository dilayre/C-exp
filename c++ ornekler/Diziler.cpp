#include<iostream>
using namespace std;
int main()
{
	int a=5;
	cout<<a<<endl;
	cout<<&a<<endl;
	int b[]={10,20,30};
	cout<<&b[0]<<endl;
	cout<<&b[1]<<endl;
	cout<<&b[2]<<endl;
	int numbers[5];
	/*cin>>numbers[0];
	cin>>numbers[1];
	cin>>numbers[2];
	cin>>numbers[3];
	cin>>numbers[4];*/
	for(int i=0;i<5;i++)
	{
		cin>>numbers[i];
	}
	
	for(int i=0;i<5;i++)
	{
		cout<<numbers[i]*2<<endl;
	}
	
}
