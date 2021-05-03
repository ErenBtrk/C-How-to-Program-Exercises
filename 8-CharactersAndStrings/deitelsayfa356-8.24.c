#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
	char *stringListesi[15]={"indeED","why","harD","tirED","easy",
                                           "fluiD","tried","hell","quAD","nomad",
                                           "hope","fullfill","hatE","cried","feED"};
	sonIkiHarfiAl(stringListesi,15);



	getch();
	return 0;
}
int kacKarakter(char dizi[]){
    int i,say=0;
        for(i=0;dizi[i]!='\0';i++){
            say++;
        }
    return say;
}

void sonIkiHarfiAl(char *stringListesi[],int boyut){
    int i;
        for(i=0;i<boyut;i++){

            if(stringListesi[i][kacKarakter(stringListesi[i])-2]=='E' ){
                if( stringListesi[i][kacKarakter(stringListesi[i])-1]=='D'){
                     printf("%s\n",stringListesi[i]);
                }
            }

        }

}
