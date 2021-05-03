#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

void ilkKarakteriSil(char [],int);

int main(){
    char metin[200];
	printf("Telefon numarasini (xxx) xxx-xxxx seklinde giriniz:");
	gets(metin);
    ilkKarakteriSil(metin,strlen(metin));
    const char *delp;
    int alanKodu;
    long int telefonNo;
    char gecici[10]="";
    delp=strtok(metin,")");
    alanKodu=atoi(delp);
    delp=strtok(NULL,"-");
    strcpy(gecici,delp);
    delp=strtok(NULL,"\0");
    strcat(gecici,delp);
    printf("%s\n",gecici);
    telefonNo=strtol(gecici,&delp,10);
    printf("TELEFON NUMARANIZ=%d-%ld",alanKodu,telefonNo);




	getch();
	return 0;
}

void ilkKarakteriSil(char dizi[],int boyut){
    int i,j;
    char temp;
    dizi[0]='\0';
    for(i=0;i<boyut-1;i++){
        j=i+1;
        temp=dizi[i];
        dizi[i]=dizi[j];
        dizi[j]=temp;
    }
}
