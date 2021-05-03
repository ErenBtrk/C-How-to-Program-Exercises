#include <stdio.h>
#include <conio.h>
#include <string.h>


void ilkKarakteriSil(char [],int);
void pigLatin(char []);

int main(){
    printf("Pig latin diline cevirmek istediginiz metni giriniz:\n");
    char metin[200]="";
    gets(metin);
    const char *delp;
    delp=strtok(metin," ");
    int count;
    char gecici[200]="";
    printf("\n\nPig latin diline cevrilmis metin:\n\n");
    while(delp!=NULL){
        strcpy(gecici,delp);
        pigLatin(gecici);
        count++;
        delp=strtok(NULL," ");
    }

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

void pigLatin(char string1[]){
    char string2[3]="ay";
    char geciciString[20]="";
	strcpy(geciciString,string1);
	strncat(string1,geciciString,1);
    strcat(string1,string2);
    int boyut;
    boyut=strlen(string1);
    ilkKarakteriSil(string1,boyut);
    printf("%s ",string1);
}
