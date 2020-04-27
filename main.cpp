#include <iostream>
#include <conio.h>
#include <math.h>
#include "function.h"
using namespace std;

  void header(){
    cout<<"===================================================="<<endl;
    cout<<"menghitung panjang sisi menggunakan konsep pytagoras"<<endl;
    cout<<"===================================================="<<endl;
  }

int main()
{
  system("cls");
  segitiga tiga;

  bangun *list[1];
  list[0]=&tiga;

	int pilih;
	char ulang;
	do{
	  system("cls");
	  header();
	  cout<<"1) segitiga siku-siku\n";
	  cout<<"2) segitiga lancip\n";
	  cout<<"3) segitiga tumpul\n";
	  cout<<"masukkan sudut:";
	  cin>>pilih;	  
	    if(pilih==90){
		  cout<<"Segitiga Siku-siku."<<endl;
	          list[0]->get_data();
	          list[0]->display_area();
	          getch();
	          }
  	    else if ((pilih>=0)&&(pilih<=89)){
	 	  cout<<"Segitiga Lancip."<<endl;
	          list[0]->get_data();
	          list[0]->display_area();
	          getch();
	          }
	    else if ((pilih>=91)&&(pilih<=179)){
  		  cout<<"Segitiga Tumpul."<<endl;
	          list[0]->get_data();
	          list[0]->display_area();
	          getch();
	          }
  	   else{
		  cout <<"maaf sudut yang anda masukkan salah"<<endl;
		  getch();
		  }
	  cout << "apakaah ingin menghitung lagi ? "<<endl ;
	  cout << "Y/T"<<endl;
	  cout << " pilih : ";
	  cin >> ulang;	
	  system("cls");
	}while(ulang=='Y'||ulang=='y');
	cout << "Terima kasih telah menggunakan program saya untuk menghitung"<<endl<<endl;
	getch ();
	cout << "=============================="<<endl;	
	cout << "Tatag Indah Larasati"<<endl;
	cout << " D04217025"<<endl;
    	cout << "=============================="<<endl;	
     return 0;
 }
