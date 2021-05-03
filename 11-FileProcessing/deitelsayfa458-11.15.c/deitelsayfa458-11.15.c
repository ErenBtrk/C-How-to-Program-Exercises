#include <stdio.h>
#include <conio.h>

int secimFonksiyonu(void);
void fonk1(void);
void fonk2(void);

int main(){



	int secim;

    while((secim=secimFonksiyonu())!=3){
        switch(secim){
        case 1:
            fonk1();
            break;
        case 2:
            fonk2();
            break;
        default:
            printf("Hatali giris.\n");
            break;
        }
    }
    printf("Cikis yaptiniz...");





	getch();
	return 0;
}

int secimFonksiyonu(void){
    int secim;

    printf("\n\n[1]-Dosyaya yazma\n"
           "[2]-Dosyadan okuma\n"
           "[3]-Cikis\n");
    printf("Seciminizi giriniz:");
    scanf("%d",&secim);

    return secim;
}

void fonk1(void){
    FILE *yazPtr;
    char c;
	char sentence[80];
	int i=0;

    if((yazPtr=fopen("text.txt","w"))==NULL){
        printf("Dosya acilamadi.\n");
   }
   else{
        printf("Enter a line of text:");
        fgetc(stdin);
        while((c=fgetc(stdin))!='\n'){
            sentence[i++]=c;
        }
        sentence[i]='\0';
        fputs("The line entered was:",yazPtr);
        fputs(sentence,yazPtr);
        fclose(yazPtr);
   }

}

void fonk2(void){
    FILE *okuPtr;

    char c;
    char cumle[80];
    int i=0;

    if((okuPtr=fopen("text.txt","r"))==NULL){
        printf("Dosya acilamadi.\n");
    }
    else{
        while(!feof(okuPtr)){
            c=getc(okuPtr);
            printf("%c",c);
        }



    }
    fclose(okuPtr);


}

