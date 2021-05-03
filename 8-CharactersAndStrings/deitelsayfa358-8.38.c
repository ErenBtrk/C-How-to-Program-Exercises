#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

void cekKoruma(char [],char []);
void sayisalDegeriYaz(char []);

int main(){
    char cek[16]="";
	char paraMiktari[9]="";

	printf("Ceke yazilacak miktari giriniz:\n");
	gets(paraMiktari);

	if(strlen(paraMiktari)>8){
        printf("Yanlis miktar girdiniz.Lutfen en fazla 8 haneli miktar giriniz:\n");
        gets(paraMiktari);
        cekKoruma(paraMiktari,cek);
        printf("\n\nYaziyla:\n\n");
        sayisalDegeriYaz(paraMiktari);
	}
	else{
        cekKoruma(paraMiktari,cek);
        printf("\n\nYaziyla:\n\n");
        sayisalDegeriYaz(paraMiktari);
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

void sayisalDegeriYaz(char paraMiktari[]){
    char *birler[10]={"","bir","iki","uc","dort","bes","alti","yedi","sekiz","dokuz"};
    char *onlar[10]={"","on","yirmi","otuz","kirk","elli","altmis","yetmis","seksen","doksan"};
    char *yuzler[10]={"","yuz","iki yuz","uc yuz","dort yuz","bes yuz","alti yuz","yedi yuz","sekiz yuz","dokuz yuz"};
    char *binler[10]={"","bin","iki bin","uc bin","dort bin","bes bin","alti bin","yedi bin","sekiz bin","dokuz bin"};
    char yaziKarsiligi[100]="";
    char *ptr;
    char noktadanOnce[10]="";
    char noktadanSonra[10]="";
    int flag=0;
    int i;
    int isaret=0;

    for(i=0;i<strlen(paraMiktari);i++){
        if(paraMiktari[i]==','){
            flag++;
            isaret=1;
        }
        else if(paraMiktari[i]=='.'){
            flag++;
            isaret=2;
        }
    }

    int inteCevir;
    int bas;

    if(flag==0){
        switch(strlen(paraMiktari)){
            case 1:
                inteCevir=atoi(paraMiktari);
                printf("%s",birler[inteCevir]);
                break;
            case 2:
                inteCevir=atoi(paraMiktari);
                printf("%s ",onlar[inteCevir/10]);
                printf("%s ",birler[inteCevir%10]);

                break;
            case 3:
                inteCevir=atoi(paraMiktari);
                printf("%s ",yuzler[inteCevir/100]);
                printf("%s ",onlar[(inteCevir/10)%10]);
                printf("%s ",birler[inteCevir%10]);

                break;
            case 4:
                inteCevir=atoi(paraMiktari);
                printf("%s ",binler[inteCevir/1000]);

                printf("%s ",yuzler[(inteCevir/100)%10]);

                printf("%s ",onlar[(inteCevir/10)%10]);

                printf("%s ",birler[inteCevir%10]);

                break;
            }
    }
    else if(flag==1){
        if(isaret==1){
            ptr=strtok(paraMiktari,",");
            while(ptr!=NULL){
                strcat(noktadanOnce,ptr);
                ptr=strtok(NULL,",");
            }





        }
        else if(isaret==2){
            ptr=strtok(paraMiktari,".");
            strcat(noktadanOnce,ptr);
            ptr=strtok(NULL," ");
            strcat(noktadanSonra,ptr);

        }

    }
    else if(flag==2){
        ptr=strtok(paraMiktari,",");
        strcat(noktadanOnce,ptr);
        ptr=strtok(NULL,".");
        strcat(noktadanOnce,ptr);
        ptr=strtok(NULL,".");
        strcat(noktadanSonra,ptr);
    }


    if(strlen(noktadanOnce)>0){
    switch(strlen(noktadanOnce)){
            case 1:
                inteCevir=atoi(noktadanOnce);
                printf("%s ",birler[inteCevir]);
                break;
            case 2:
                inteCevir=atoi(noktadanOnce);
                printf("%s ",onlar[inteCevir/10]);
                printf("%s ",birler[inteCevir%10]);
                break;
            case 3:
                inteCevir=atoi(noktadanOnce);
                printf("%s ",yuzler[inteCevir/100]);
                printf("%s ",onlar[(inteCevir/10)%10]);
                printf("%s ",birler[inteCevir%10]);

                break;
            case 4:
                inteCevir=atoi(noktadanOnce);
                printf("%s ",binler[inteCevir/1000]);
                printf("%s ",yuzler[(inteCevir/100)%10]);
                printf("%s ",onlar[(inteCevir/10)%10]);
                printf("%s ",birler[inteCevir%10]);

                break;
            }
    }
    if(strlen(noktadanSonra)>0){
            printf("nokta ");
        switch(strlen(noktadanSonra)){
            case 1:
                inteCevir=atoi(noktadanSonra);
                printf("%s",birler[inteCevir]);
                break;
            case 2:
                inteCevir=atoi(noktadanSonra);
                printf("%s ",onlar[inteCevir/10]);
                printf("%s ",birler[inteCevir%10]);
                break;
            case 3:
                inteCevir=atoi(noktadanSonra);
                printf("%s ",yuzler[inteCevir/100]);
                printf("%s ",onlar[(inteCevir/10)%10]);
                printf("%s ",birler[inteCevir%10]);

                break;
            case 4:
                inteCevir=atoi(noktadanSonra);
                printf("%s ",binler[inteCevir/1000]);
                printf("%s ",yuzler[(inteCevir/100)%10]);
                printf("%s ",onlar[(inteCevir/10)%10]);
                printf("%s ",birler[inteCevir%10]);
                break;
            }

    }




}
