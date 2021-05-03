#include <stdio.h>
#include <conio.h>

struct islemler{
    int hesapNo;
    double borc;
};

typedef struct islemler Islem;

int main(){
	Islem kayit={0,0.0};
	FILE *kPtr;
	int i;

	if((kPtr=fopen("kayitlar.dat","w"))==NULL){
        printf("kayitlar.dat dosyasi olusturulamadi.\n");
	}
	else{
        for(i=1;i<=1000;i++){
            fwrite(&kayit,sizeof(struct islemler),1,kPtr);
        }
	}
	printf("kayitlar.dat dosyasi olusturuldu.\n");
	fclose(kPtr);





	getch();
	return 0;
}
