#include <stdio.h>
#include <conio.h>


int main(){
	FILE *dosya;
	FILE *gecici;
	char c;

	if((dosya=fopen("dosya.txt","r+"))==NULL){
        printf("dosya.txt acilamadi.\n");
	}
	else{
            gecici=tmpfile();
        if((gecici=fopen("gecici.txt","w+"))==NULL){
            printf("gecici.txt acilamadi.\n");
        }
        else{
            printf("Degistirilmeden once:\n");
            while((c=getc(dosya))!=EOF){
                putchar(c);
                putc(c,gecici);
                putc(' ',gecici);
            }

        }
        rewind(gecici);
        rewind(dosya);

            printf("\nDegistirildikten sonra:\n");
            while((c=getc(gecici)) != EOF){
                putchar(c);
                putc(c,dosya);
            }
            fclose(gecici);
            fclose(dosya);


	}




	getch();
	return 0;
}
