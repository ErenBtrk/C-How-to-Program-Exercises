#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

struct kart{
    const char * takim;
    const char *taraf;
};

typedef struct kart Kart;

void desteDoldur(Kart *const,const char *[],const char *[]);
void desteyiKar(Kart * const);
void dagit(const Kart* const);

int main(){
	Kart deste[52];
	const char *taraf[ ]={"Iki","Uc","Dort","Bes","Alti","Yedi",
                                          "Sekiz","Dokuz","On","Vale","Kiz","Papaz","As"};
	const char *takim[ ]={"Sinek","Karo","Kupa","Maca"};
	srand(time(NULL));
    desteDoldur(deste,taraf,takim);
    printf("\n");
    desteyiKar(deste);
    printf("\n");
    dagit(deste);

	getch();
	return 0;
}

void desteDoldur(Kart* const deste,const char *taraf[],const char *takim[]){
    int i;
        for(i=0;i<52;i++){
            deste[i].taraf=taraf[i%13];
            deste[i].takim=takim[i/13];
        }
        for(i=0;i<52;i++){
            printf("%s %s\n",deste[i].takim,deste[i].taraf);
        }
}
void desteyiKar(Kart *const deste){
    int i,j;
    Kart gecici;
        for(i=0;i<52;i++){
            j=rand()%52;
            gecici=deste[i];
            deste[i]=deste[j];
            deste[j]=gecici;
        }
        for(i=0;i<52;i++){
            printf("%s %s\n",deste[i].takim,deste[i].taraf);
        }
}

void dagit(const Kart* const deste){
    int i;
        for(i=0;i<5;i++){
            printf("%5s %-8s%c",deste[i].takim,deste[i].taraf,(i+1)%2 ? '\t' : '\n');
        }
        printf("\n\n");
         for(i=5;i<10;i++){
            printf("%5s %-8s%c",deste[i].takim,deste[i].taraf,(i+1)%2 ? '\t' : '\n');
        }

}







