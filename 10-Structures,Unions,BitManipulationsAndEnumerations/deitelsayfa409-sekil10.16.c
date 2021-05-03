#include <stdio.h>
#include <conio.h>

struct bitKart{
    unsigned taraf : 4;
    unsigned takim : 2;
    unsigned renk : 1;
};

typedef struct bitKart Kart;

void desteDoldur(Kart *const );
void dagit(const Kart* const);

int main(){
	Kart deste[52];

	desteDoldur(deste);
	dagit(deste);





	getch();
	return 0;
}


void desteDoldur(Kart * const deste){
    int i;

    for(i=0;i<52;i++){
        deste[i].taraf=i%13;
        deste[i].takim=i/13;
        deste[i].renk=i/26;
    }

}

/* Dagit fonksiyonu kartlari iki sutun biciminde yazar
    Sutun 1 k1 belirtecli 0-25 kartlarini icerir
    Sutun 2 k2 belirtecli 26-61 kartlarini icerir */

void dagit(const Kart * const deste){
    int k1,k2;
        for(k1=0,k2=k1+26;k1<=25;k1++,k2++){
            printf("Kart:%3d Takim:%2d Renk:%2d   ",
                    deste[k1].taraf,deste[k1].takim,deste[k1].renk);
            printf("Kart:%3d Takim:%2d Renk:%2d\n",
                   deste[k2].taraf,deste[k2].takim,deste[k2].renk);
        }







}
