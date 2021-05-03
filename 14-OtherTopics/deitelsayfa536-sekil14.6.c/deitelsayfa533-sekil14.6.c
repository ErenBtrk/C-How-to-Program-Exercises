#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int main(){
	FILE *gecici;
	FILE *dosya;
	int karakter;



    if((dosya=fopen("veri.txt","r+")) != NULL){
            gecici=tmpfile();

        if((gecici=fopen("gecici.txt","w")) != NULL){
            printf("Dosya degistirildikten once:\n");
            int c;
           while((c=getc(dosya)) != EOF){
                putchar(c);
                if(c == '\t'){
                    putc(' ',gecici);
                }
                else{
                    putc(c,gecici);
                }
           }
            fclose(gecici);

           rewind(dosya);
           gecici=fopen("gecici.txt","r");
            printf("\nDosya degistirildikten sonra:\n");
           int harf;
           while((harf=getc(gecici))!=EOF){
                putchar(harf);
                putc(harf,dosya);
           }
        }
        else{
            printf("Gecici acilamadi.\n");
        }
        fclose(dosya);
    }
    else{
        printf("veri.txt acilamadi.\n");
    }




	getch();
	return 0;
}
