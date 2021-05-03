#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


#define TEL_BOYUT 9

int telNoyuInteCevir(char []);
void dosyayaYaz(char *[]);
void stringleriSirala(char *[]);

int main(){
	char harfler[25] = {' ','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','R','S','T','U','V','W','X','Y'};

	char telNo[TEL_BOYUT]="";
	printf("Telefon numarasi giriniz:");
    scanf("%s",telNo);
    srand(time(NULL));
    int telefonNo;
	telefonNo=telNoyuInteCevir(telNo);
    int rakamlar[7];
    int bas;
    int i=6,j;
    int a;


    int flag=0;

    char kelime[9]="\0";
    char *stringDizisi[2187]={""};
    char bosString[9]="";



    while(telefonNo>0){
        bas=telefonNo%10;
        telefonNo/=10;
        rakamlar[i]=bas;
        if(rakamlar[i]==1||rakamlar[i]==0){
            flag=1;
            break;
        }
        i--;
    }
    if(flag==1){
        printf("0 veya 1 rakamlari bulunan telefon numaralari gecersizdir.\n");
    }
    else if(flag==0){
        int flag2=0;
    for(j=0;j<2187;j++){
            flag2=0;
       for(i=0;i<7;i++){
            switch(rakamlar[i]){
            case 2:
                kelime[i]=harfler[1+rand()%3];
                break;
            case 3:
                kelime[i]=harfler[4+rand()%3];
                break;
            case 4:
                kelime[i]=harfler[7+rand()%3];
                break;
            case 5:
                kelime[i]=harfler[10+rand()%3];
                break;
            case 6:
                kelime[i]=harfler[13+rand()%3];
                break;
            case 7:
                kelime[i]=harfler[16+rand()%3];
                break;
            case 8:
                kelime[i]=harfler[19+rand()%3];
                break;
            case 9:
                kelime[i]=harfler[22+rand()%3];
                break;
            }

       }
            strcpy(&stringDizisi[j],kelime);
            for(a=0;a<j;a++){
                if(strcmp(&stringDizisi[j],&stringDizisi[a])==0){
                   flag2=1;
                   break;
                }
            }
            if(flag2==1){
                strcpy(&stringDizisi[j],bosString);
                j--;
            }




        }
    }

    stringleriSirala(stringDizisi);

    dosyayaYaz(stringDizisi);



	getch();
	return 0;
}

int telNoyuInteCevir(char telNo[TEL_BOYUT]){
    char *ptr;
    char gecici[9];
    ptr=strtok(telNo,"-");
    strcpy(gecici,ptr);

    ptr=strtok(NULL,"-");
    strcat(gecici,ptr);

    int telefon;
    telefon=atoi(gecici);

    return telefon;

}

void dosyayaYaz(char *stringDizisi[2187]){
    FILE *yazPtr;
    int i;

    if((yazPtr=fopen("text.txt","w"))==NULL){
        printf("Dosya acilamadi.\n");
    }
    else{

        for(i=0;i<2187;i++){
            if((i+1)%10==0){
                fprintf(yazPtr,"\n");
            }
            fprintf(yazPtr,"%s  ",&stringDizisi[i]);

        }
        fclose(yazPtr);
    }
}
void stringleriSirala(char *stringDizisi[]){
    char geciciString[9]="";
    char *ptr1;
    ptr1=&geciciString;
    int i,j;
    char *ptr2;
    char *ptr3;

	for(i=0;i<2187;i++){
            ptr2=&stringDizisi[i];
        for(j=i+1;j<2187;j++){
                ptr3=&stringDizisi[j];
            if(strcmp(&stringDizisi[i],&stringDizisi[j])>0){
                strcpy(ptr1,ptr2);
                strcpy(ptr2,ptr3);
                strcpy(ptr3,ptr1);

            }
        }
	}
    for(i=0;i<2187;i++){
            printf("%s  ",&stringDizisi[i]);
            if(i%10==0){
                printf("\n");
            }
    }

}
