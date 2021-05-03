#include <stdio.h>
#include <conio.h>


int main(){
    int asciiKodu;
	printf("Bir ASCII kodu giriniz(0-255):");
	scanf("%d",&asciiKodu);
	printf("%c",(char)asciiKodu);
    int i;
    for(i=0;i<=255;i++){
        if(i%15==0){
            printf("\n\n");
        }
        printf("%c ",(char)i);

    }



	getch();
	return 0;
}
