#include <stdio.h>
#include <conio.h>
#include <string.h>

void kucuktenBuyuge(int dizi[],int boyut){
    int i,j;
    int temp;
    int enk;
        for(i=0;i<boyut;i++){
            enk=i;
            for(j=i+1;j<boyut;j++){
                if(dizi[j]<dizi[enk]){
                    enk=j;
                }
            }
            temp=dizi[i];
            dizi[i]=dizi[enk];
            dizi[enk]=temp;
        }
}

void buyuktenKucuge(int dizi[],int boyut){
    int i,j;
    int temp;
    int enb;
        for(i=0;i<boyut;i++){
            enb=i;
            for(j=i+1;j<boyut;j++){
                if(dizi[j]>dizi[enb]){
                    enb=j;
                }
            }
            temp=dizi[i];
            dizi[i]=dizi[enb];
            dizi[enb]=temp;
        }
}

void printArray(int dizi[],int boyut){
    int i;
    for(i=0;i<boyut;i++){
        printf("%d ",dizi[i]);
    }

}

int main(int argc,char *argv[]){
	int dizi[10]={5,2,10,6,8,3,9,7,4,1};

	if(argc>2){
        printf("Parametre sayisi fazla.\n");
	}
	else{
        if(strcmp(argv[1],"-a")==0){
            kucuktenBuyuge(dizi,10);
        }
        else if(strcmp(argv[1],"-b")==0){
            buyuktenKucuge(dizi,10);
        }
        else{
            printf("Yanlis komut.\n");
        }
	}
	int i;
    for(i=0;i<10;i++){
        printf("%d ",dizi[i]);
    }



	getch();
	return 0;
}
