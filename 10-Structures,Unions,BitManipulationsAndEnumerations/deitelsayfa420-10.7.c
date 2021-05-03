#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

struct kart{
    unsigned taraf:4  ;
    unsigned takim:2  ;
    unsigned renk:1  ;

};

typedef struct kart Kart;

void desteDoldur(Kart *const );
void desteyiKar(Kart *const );
void besKartDagit(Kart *const ,const char *[],const char *[],const char *[]);

int main(){
    Kart deste[52]={0};
    const char *takim[4]={"Kupa","Karo","Maca","Sinek"};
	const char *taraf[13]={"Iki","Uc","Dort","Besssssssssssssssssssssssss","Alti","Yedi",
                                          "Sekiz","Dokuz","On","Vale","Kiz","Papaz","As"};
    const char *renk[2]={"Kirmizi","Siyah"};
    srand(time(NULL));

    desteDoldur(deste);
    desteyiKar(deste);
    besKartDagit(deste,taraf,takim,renk);

	getch();
	return 0;
}

void desteDoldur(Kart* const deste){
    int i;
        for(i=0;i<52;i++){
            deste[i].taraf=i%13;
            deste[i].takim=i/13;
            deste[i].renk=i/26;
        }

}

void desteyiKar(Kart* const deste){
    int i,j;
    Kart temp;
        for(i=0;i<52;i++){
            j=rand()%52;
            temp=deste[i];
            deste[i]=deste[j];
            deste[j]=temp;
        }


}

void besKartDagit(Kart* const deste,const char *taraf[],const char *takim[],const char*renk[]){
    int i;
        for(i=0;i<5;i++){
            printf("%s %s %s\n",renk[deste[i].renk],takim[deste[i].takim],taraf[deste[i].taraf]);
        }


}
