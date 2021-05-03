#include <stdio.h>
#include <conio.h>


int main(){
    int hesapNum;
    char isim[20];
    double suankiBakiye;

	FILE *ePtr;
	FILE *kPtr;
	FILE *yPtr;
	ePtr=fopen("eskiAnaKayit.dat","r");
    kPtr=fopen("kayitlar.dat","r");
    yPtr=fopen("yeniAnaKayit.dat","w");






	getch();
	return 0;
}
