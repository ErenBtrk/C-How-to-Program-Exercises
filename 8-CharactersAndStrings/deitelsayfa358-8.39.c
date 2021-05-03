#include <stdio.h>
#include <conio.h>
#include <string.h>

void morsAlfabesineCevir(char [],const char *[],const char *[]);


int main(){
	const char *morsAlfabesi[26]={".-" ,"-..." ,"-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.",
                                                        "---",".--","--.-.",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    const char *morsRakamlar[10]={"-----",".----","..---","...--","....-",".....","-....","--...","---..","----."};
    printf("Mors alfabesine cevrilecek bir metin giriniz:\n");
    char metin[200];
    gets(metin);
    printf("\nMors Alfabesine Cevrilmis Hali:\n\n");
    morsAlfabesineCevir(metin,morsAlfabesi,morsRakamlar);








	getch();
	return 0;
}


void morsAlfabesineCevir(char metin[],const char *morsAlfabesi[],const char *morsRakamlar[]){
    int i;
    int cevir;
    for(i=0;i<strlen(metin);i++){
        cevir=(int)metin[i];
        if(cevir==32){
            printf("    ");
        }
        else if(cevir>=65&&cevir<=90){
            printf("%s  ",morsAlfabesi[cevir-65]);
        }
        else if(cevir>=97&&cevir<=122){
            printf("%s  ",morsAlfabesi[cevir-97]);
        }
        else if(cevir>=48&&cevir<=57){
            printf("%s  ",morsRakamlar[cevir-48]);
        }

    }

}
