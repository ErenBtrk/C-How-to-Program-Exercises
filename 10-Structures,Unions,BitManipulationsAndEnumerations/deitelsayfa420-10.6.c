#include <stdio.h>
#include <conio.h>


struct musteri {
    char soyad[15];
    char ad[15];
    int musteriNumarasi;
struct {
    char telNumarasi[11];
    char adres[50];
    char sehir[15];
    char bolge[3];
    char postaKodu[6];
} kisisel;
} musteriKaydi, *musteriPtr;






int main(){
    musteriPtr = &musteriKaydi;

    printf("Soyad=");
    scanf("%s",&musteriKaydi.soyad);
    printf("Ad=");
    scanf("%s",&musteriKaydi.ad);
    printf("Musteri no=");
    scanf("%d",&musteriKaydi.musteriNumarasi);
    printf("Tel no=");
    scanf("%s",&musteriKaydi.kisisel.telNumarasi);
    printf("adres=");
    scanf("%s",&musteriKaydi.kisisel.adres);
    printf("sehir=");
    scanf("%s",&musteriKaydi.kisisel.sehir);
    printf("bolge=");
    scanf("%s",&musteriKaydi.kisisel.bolge);
    printf("posta kodu=");
    scanf("%s",&musteriKaydi.kisisel.postaKodu);
    //a
    printf("%s\n",musteriKaydi.soyad);
    //b
    printf("%s\n",musteriPtr->soyad);
    //c
    printf("%s\n",musteriKaydi.ad);
    //d
    printf("%s\n",musteriPtr->ad);
    //e
    printf("%d\n",musteriKaydi.musteriNumarasi);
    //f
    printf("%d\n",musteriPtr->musteriNumarasi);
    //g
    printf("%s\n",musteriKaydi.kisisel.telNumarasi);
    //h
    printf("%s\n",musteriPtr->kisisel.telNumarasi);
    //i
    printf("%s\n",musteriKaydi.kisisel.adres);
    //j
    printf("%s\n",musteriPtr->kisisel.adres);
    //k
    printf("%s\n",musteriKaydi.kisisel.sehir);
    //l
    printf("%s\n",musteriPtr->kisisel.sehir);
    //m
    printf("%s\n",musteriKaydi.kisisel.bolge);
    //n
    printf("%s\n",musteriPtr->kisisel.bolge);
    //o
    printf("%s\n",musteriKaydi.kisisel.postaKodu);
    //p
    printf("%s\n",musteriPtr->kisisel.postaKodu);




	getch();
	return 0;
}
