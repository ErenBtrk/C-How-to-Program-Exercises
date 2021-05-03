#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int kacKelime(char []);
void harf(char[]);
void kelimeSayisiVeBoyutu(char []);
void kelimeBul(char []);

int main(){
	char metin[200]="";
	printf("Bir metin giriniz:\n");
	gets(metin);
	harf(metin);
	printf("\n\n");
    kelimeSayisiVeBoyutu(metin);
    printf("\n\n");
    printf("Yeni bir metin giriniz:\n");
    char metin2[200]="";
    gets(metin2);
    kelimeBul(metin2);



	getch();
	return 0;
}

int kacKelime(char metin[]){
    int count=0;
    char *ptr;
    ptr=strtok(metin," ");
    while(ptr!=NULL){
        count++;
        ptr=strtok(NULL," ");
    }
    return count;


}

void harf(char metin[]){
    int harfFrekans[27]={0};
    int stringBoyut;
    stringBoyut=strlen(metin);
    int i;

        for(i=0;i<stringBoyut;i++){
                if(isalpha(metin[i])){
                    if(islower(metin[i])){
                        harfFrekans[metin[i]-97]++;
                    }
                    else{
                        harfFrekans[metin[i]-65]++;
                    }
                }
        }
        for(i=0;i<27;i++){
                if(harfFrekans[i]>0){
                    printf("Metinde %c harfinden %d kere bulunmustur.\n",i+97,harfFrekans[i]);
                }
        }
}

void kelimeSayisiVeBoyutu(char metin[]){
    int kelimeBoyutuFrekans[20]={0};
    int count=0;
    char *ptr;
    ptr=strtok(metin," ");
        while(ptr!=NULL){
            count++;
            kelimeBoyutuFrekans[strlen(ptr)]++;
            ptr=strtok(NULL," ");
        }
        int i;
    for(i=0;i<20;i++){
            if(kelimeBoyutuFrekans[i]>0){
                printf("Metinde %d harfli %d kelime bulunmustur.\n",i,kelimeBoyutuFrekans[i]);
            }
    }

}

void kelimeBul(char metin[]){
    int i;
    int kelimeFrekans[50]={0};
    char *kelimeler[50];
    char *kelimelerPtr;
    char *ptr;
    int j=0;
    int say=0;
        ptr=strtok(metin," ");

        while(ptr!=NULL){
            say++;
            kelimelerPtr=&kelimeler[j];
            j++;
            strcpy(kelimelerPtr,ptr);
            ptr=strtok(NULL," ");
        }
        for(i=0;i<say;i++){
            kelimeFrekans[i]=1;
        }
        for(i=0;i<say;i++){
            for(j=i+1;j<say;j++){
                if(strcmp(&kelimeler[i],&kelimeler[j])==0){
                    kelimeFrekans[i]++;
                    kelimeFrekans[j]--;
                }
            }
        }

        for(i=0;i<say;i++){
            if(kelimeFrekans[i]>0){
                printf("Metinde [%s] kelimesinden %d kere bulundu.\n",&kelimeler[i],kelimeFrekans[i]);
            }
        }





}
