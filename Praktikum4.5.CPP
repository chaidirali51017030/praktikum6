#include <iostream.h>
#include <conio.h>
main (){
 int a;

 cout<<"Masukkan Bilangan : "; cin >>a;

 switch (a){
   case 1 : cout<<"hari ke "<<a<<" : minggu";
    			break;
   case 2 : cout<<"hari ke "<<a<<" : senin";
    			break;
   case 3 : cout<<"hari ke "<<a<<" : selasa";
   			break;
   case 4 : cout<<"hari ke "<<a<<" : rabu";
   			break;
   case 5 : cout<<"hari ke "<<a<<" : kamis";
   			break;
   case 6 : cout<<"hari ke "<<a<<" : jum'at";
   			break;
   case 7 : cout<<"hari ke "<<a<<" : sabtu";
   			break;
   default :cout<<"Tidak terdapat hari ke "<<a;}
 getch();}