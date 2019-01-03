#include <iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

int main()
{
    printf("PROOGRAM MENGECEK SEGITIGA SAMA SISI ATAU TIDAK\n");
    printf("BY M Achmad Sahroni NIM 311620782\n");
    printf("KAMPUS PELITA BANGSA. TEKNIK INFORMATIKA\n\n");
	cout <<"-------------------------\n";

	    float sudut,jawab;
	    menu :
	cout<<"masukan besarnya sudut segitiga :";
	cin>>sudut;
	if(sudut==60)

	cout<<"\njenis segitiga adalah sama sisi\n\n"<<"----------------------\n\n";
	else
	cout<<"\njenis segitiga bukan sama sisi\n\n"<<"------------------\n\n";
	cout<<"ingin coba lagi?\n";
	cout<<"1.ya\n";
	if (jawab==1)
	goto menu;
}
