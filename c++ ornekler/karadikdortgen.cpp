#include<iostream>
#include<locale.h>
using namespace std;

int main()
{
	int sekilsec,karesecim,karekenar,diksecim,dikkisa,dikuzun;
	setlocale(LC_ALL,"Turkish");
bas:	cout<<"----Hesaplama Aracı----"<<endl;
	cout<<"1-Kare"<<endl;
	cout<<"2-Dikdortgen"<<endl;
geri:cout<<"Lutfen seciminizi yapiniz"<<endl;
	cin>>sekilsec;
	 if(sekilsec==1)
	 {
	 	cout<<"1-Alan"<<endl;
	 	cout<<"2-Cevre"<<endl;
	kare:cout<<"Lutfen alan icin 1'e cevre icin 2'ye basiniz "<<endl;
	 	cin>>karesecim;
	 	if(karesecim==1)
	 	{
	 		cout<<"kenar uzunlugunu giriniz";
	 		cin>>karekenar;
	 		cout<<"Karenin alani="<<karekenar*karekenar;
		}
		 else if(karesecim==2)
		 {
		 	cout<<"kenar uzunlugunu giriniz";
	 		cin>>karekenar;
	 		cout<<"Karenin cevresi="<<karekenar*4;
		 }
		 else 
		 {
		 	cout<<"Yanlis secim yaptiniz"<<endl;
		 	goto kare;
		 }
	 }
	 else if(sekilsec==2)
	 {
	 	cout<<"1-Alan"<<endl;
	 	cout<<"2-Cevre"<<endl;
	 dik:	cout<<"Lutfen alan icin 1'e cevre icin 2'ye basiniz "<<endl;
	 	cin>>diksecim;
	 	if(diksecim==1)
	 	{
	 		cout<<"Dikdortgenin kisakenarini giriniz"<<endl;
	 		cin>>dikkisa;
	 		cout<<"Dikdortgenin uzunkenarini giriniz"<<endl;
	 		cin>>dikuzun;
	 		cout<<"Dikdortgenin alani="<<dikkisa*dikuzun<<endl;
		}
		 else if(diksecim==2)
		 {
		 	cout<<"Dikdortgenin kisakenarini giriniz"<<endl;
	 		cin>>dikkisa;
	 		cout<<"Dikdortgenin uzunkenarini giriniz"<<endl;
	 		cin>>dikuzun;
	 		cout<<"Dikdortgenin cevresi="<<(dikkisa+dikuzun)*2<<endl;
		 }
		 else
		 {
		 	cout<<"Yanlis secim yaptiniz"<<endl;
		 	goto dik;
		 }
	 }
	 else
	 {
	 	cout<<"yanlis secim yaptiniz"<<endl;
	 	goto geri;
	 }
	goto bas;
	
	
}