#include <stdio.h>
#include <conio.h>

int kacKarakter(char []);
double doubleCevir(char []);
int intCevir(char[]);


int main(){
    char sayi[20];

	printf("Double'a cevirmek icin [1]\nInt'e cevirmek icin [2]\n");
	int secim;
	scanf("%d",&secim);

	switch(secim){
    case 1:
        printf("Double'a cevirmek icin ondalikli bir sayiyi string olarak giriniz:");
        scanf("%s",sayi);
        printf("%f\n",doubleCevir(sayi));
        break;
    case 2:
        printf("Int'a cevirmek icin  bir sayiyi string olarak giriniz:");
        scanf("%s",sayi);
        printf("%d\n",intCevir(sayi));
        break;

	}


	getch();
	return 0;
}

 int kacKarakter(char sayi[]){
     int i,say=0;
     for(i=0;sayi[i]!='\0';i++){
        say++;
     }
     return say;
 }

double doubleCevir(char sayi[]){

    int i,j;
    double cevrilenSayi=0.0;
    double gecici=0.0;
    const char *delp;

    delp=strtok(sayi,".");
        j=kacKarakter(delp)-1;

        for(i=0;i<kacKarakter(delp);i++){
            gecici=(int)delp[i]-48;
            cevrilenSayi+=gecici*pow(10,j);
            j--;
        }
        delp=strtok(NULL,".");
        j=kacKarakter(delp)-kacKarakter(delp)-1;

        for(i=0;i<kacKarakter(delp);i++){

            gecici=(int)delp[i]-48;
            cevrilenSayi+=gecici*pow(10,j);
            j--;
        }
    return cevrilenSayi;

}

int intCevir(char sayi[]){

    int i;
    int gecici=0;
    int cevrilenSayi=0;
    int j=kacKarakter(sayi)-1;
    for(i=0;i<kacKarakter(sayi);i++){
        gecici=(int)sayi[i]-48;
        cevrilenSayi+=gecici*pow(10,j);
        j--;
    }
    return cevrilenSayi;


}
