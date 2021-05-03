#include <stdio.h>
#include <conio.h>
#include <string.h>

void cevapla(char [],char *[],char *[]);


int main(){
    char *metrik1[]={"kilometre","kilogram","metre","santimetre","litre"};
    char *metrik2[]={"mil","pound","fit","inc","kuart"};
	printf("Lutfen metrik cevirme yapilacak sorunuzu giriniz(Ornek:2 metre kac fit yapar?):\n");
	char metin[100];
	gets(metin);
	cevapla(metin,metrik1,metrik2);




	getch();
	return 0;
}

void cevapla(char metin[],char *metrik1[],char *metrik2[]){
    char metrikOlcu[10]="";
    char geciciString1[20]="";
    char geciciString2[20]="";
    char *ptr;
    ptr=strtok(metin," ");
    strcat(metrikOlcu,ptr);

    ptr=strtok(NULL," ");
    strcat(geciciString1,ptr);

    ptr=strtok(NULL," ");
    ptr=strtok(NULL," ");
    strcat(geciciString2,ptr);

    int i;
    int flag=-1;
    int birim;
    double cevrilen;

    for(i=0;i<5;i++){
        if((strcmp(geciciString1,metrik1[i])==0&&strcmp(geciciString2,metrik2[i])==0)||
           (strcmp(geciciString1,metrik2[i])==0&&strcmp(geciciString2,metrik1[i])==0)){
            flag=i;
            break;

        }
    }
    if(flag==-1){
        printf("Cevirmeye calistiginiz metrik sistemler birbirinden farklidir.\n");
    }
    else{
            birim=atoi(metrikOlcu);

        switch(flag){
        case 0:
            if(strcmp(geciciString1,metrik1[0])==0){
                cevrilen=(double)birim/1.609344;
               printf("\n%.2f %s'a esittir.\n",cevrilen,metrik2[0]);
            }
            else{
                    cevrilen=(double)birim*1.609344;
                printf("\n%.2f %s'a esittir.\n",cevrilen,metrik1[0]);
            }
            break;
        case 1:
            if(strcmp(geciciString1,metrik1[1])==0){
                cevrilen=(double)birim*2.2046;
               printf("\n%.2f %s'a esittir.\n",cevrilen,metrik2[1]);
            }
            else{
                    cevrilen=(double)birim/2.2046;
                printf("\n%.2f %s'a esittir.\n",cevrilen,metrik1[1]);
            }
            break;
        case 2:
              if(strcmp(geciciString1,metrik1[2])==0){
                cevrilen=(double)birim*3.2808;
               printf("\n%.2f %s'a esittir.\n",cevrilen,metrik2[2]);
            }
            else{
                    cevrilen=(double)birim/3.2808;
                printf("\n%.2f %s'a esittir.\n",cevrilen,metrik1[2]);
            }
            break;
        case 3:
             if(strcmp(geciciString1,metrik1[3])==0){
                cevrilen=(double)birim*0.39370;
               printf("\n%.2f %s'a esittir.\n",cevrilen,metrik2[3]);
            }
            else{
                    cevrilen=(double)birim/0.39370;
                printf("\n%.2f %s'a esittir.\n",cevrilen,metrik1[3]);
            }
            break;
        case 4:
              if(strcmp(geciciString1,metrik1[4])==0){
                cevrilen=(double)birim*1.0567;
               printf("\n%.2f %s'a esittir.\n",cevrilen,metrik2[4]);
            }
            else{
                    cevrilen=(double)birim/1.0567;
                printf("\n%.2f %s'a esittir.\n",cevrilen,metrik1[4]);
            }
            break;
        }
    }





}
