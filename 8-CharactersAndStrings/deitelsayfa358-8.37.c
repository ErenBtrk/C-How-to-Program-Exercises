#include <stdio.h>
#include <conio.h>
#include <string.h>


void cekKoruma(char [],char []);

int main(){
    char cek[16]="";
	char paraMiktari[9]="";

	printf("Ceke yazilacak miktari giriniz:\n");
	gets(paraMiktari);
	if(strlen(paraMiktari)>8){
        printf("Yanlis miktar girdiniz.Lutfen en fazla 8 haneli miktar giriniz:\n");
        gets(paraMiktari);
        cekKoruma(paraMiktari,cek);
	}
	else{
        cekKoruma(paraMiktari,cek);
	}



	getch();
	return 0;
}

void cekKoruma(char paraMiktari[],char cek[]){

    int boslukSayisi=8-strlen(paraMiktari);
    char *ptr;
    int i,j;
    for(i=0;i<boslukSayisi;i++){
        strcat(cek,"*");
    }
    strcat(cek,paraMiktari);
    char temp;
    j=7;
    for(i=14;i>7;i--){

            if(i%2!=0){
                cek[i]=' ';
            }
            else{
                cek[i]=cek[j];
                cek[j]=' ';
                j--;
            }
    }
    j=3;
    for(i=7;i>0;i--){

            if(i%2!=0){
                cek[i]=' ';
            }
            else{
                cek[i]=cek[j];
                cek[j]=' ';
                j--;
            }

    }
    printf("%s\n",cek);
    for(i=0;i<8;i++){
        printf("- ");
    }
    printf("\n");
     for(i=0;i<8;i++){
        printf("%d ",i+1);
    }



}

