#include <stdio.h>
#include <conio.h>

int rakamMi(int);
int harfMi(int);
int harfYadaRakamMi(int);
int hexDecimalDegerMi(int);
int kucukHarfMi(int);
int buyukHarfMi(int);
int kucukHarfeCevir(int);
int buyukHarfeCevir(int);
int boslukKarakteriMi(int);
int kontrolKarakteriMi(int);
int baskaYazdirmaKarakteriMi(int);
int boslukDahilYazdirmaKarakteriMi(int);
int boslukDisindaYazdirmaKarakteriMi(int);

int main(){
    char karakter;
    printf("Test icin bir karakter giriniz:");
    karakter=getchar();
    printf(rakamMi(karakter) ? "Rakamdir.\n" : "Rakam degildir.\n");
    printf(harfMi(karakter) ? "Harftir.\n" : "Harf degildir.\n");
    printf(harfYadaRakamMi(karakter) ? "Harf yada rakamdir.\n" : "Harf yada rakam degildir.\n");
    printf(hexDecimalDegerMi(karakter) ? "Hexadecimal deger karakteridir.\n" : "Hexadecimal deger karakteri degildir.\n");
    printf(kucukHarfMi(karakter) ? "Kucuk harftir.\n" : "Kucuk harf degildir.\n");
    printf(buyukHarfMi(karakter) ? "Buyuk harftir.\n" : "Buyuk harf degildir.\n");
    printf("Kucuk harfe cevrildi %c\n",kucukHarfeCevir(karakter));
    printf("Buyuk harfe cevrildi %c\n",buyukHarfeCevir(karakter));
    printf(boslukKarakteriMi(karakter) ?  "Bosluk karakteridir.\n" : "Bosluk karakteri degildir.\n");
    printf(kontrolKarakteriMi(karakter) ? "Kontrol karakteridir.\n" : "Kontrol karakteri degildir.\n");
    printf(baskaYazdirmaKarakteriMi(karakter) ? "Bosluk,rakam ve harften baska bir yazdirma karakteridir.\n" :
                                                                         "Bosluk,rakam ve harften baska bir yazdirma karakteri degildir.\n");
    printf(boslukDahilYazdirmaKarakteriMi(karakter) ? "Bosluk dahil yazdirma karakteridir.\n" : "Bosluk dahil yazdirma karakteri degildir.\n");
    printf(boslukDisindaYazdirmaKarakteriMi(karakter) ? "Bosluk disinda yazdirma karakteridir.\n" :"Bosluk disinda yazdirma karakteri degildir.\n") ;

	getch();
	return 0;
}

int rakamMi(int c){
    if(c>=48&&c<=57){
        return 1;
    }
    else{
        return 0;
    }
}
int harfMi(int c){
    if((c>=65&&c<=90)||(c>=97&&c<=122)){
        return 1;
    }
    else{
        return 0;
    }
}

int harfYadaRakamMi(int c){
    if((c>=65&&c<=90)||(c>=97&&c<=122)||(c>=48&&c<=57)){
        return 1;
    }
    else{
        return 0;
    }
}

int hexDecimalDegerMi(int c){
    if((c>=48&&c<=57)||(c>=65&&c<=70)||(c>=97&&c<=102)){
        return 1;
    }
    else{
        return 0;
    }

}
int kucukHarfMi(int c){
    if(c>=97&&c<=122){
        return 1;
    }
    else{
        return 0;
    }
}
int buyukHarfMi(int c){
    if(c>=65&&c<=90){
        return 1;
    }
    else{
        return 0;
    }
}

int kucukHarfeCevir(int c){
    if(c>=65&&c<=90){
        return c+32;
    }


}

int buyukHarfeCevir(int c){
     if(c>=97&&c<=122){
        return c-32;
     }

}

int boslukKarakteriMi(int c){
    if( (c>=9 && c<=13) || c==32 ){
        return 1;
    }
    else{
        return 0;
    }
}

int kontrolKarakteriMi(int c){
    if( c>=0 && c<=31 ){
        return 1;
    }
    else{
        return 0;
    }
}

int baskaYazdirmaKarakteriMi(int c){
    if( iscntrl( c )==1 ){
        return 1;
    }
    else if( isalnum( c )==1 ){
        return 1;
    }
    else if( isspace( c )==1 ){
        return 1;
    }
    else{
        return 0;
    }

}

int boslukDahilYazdirmaKarakteriMi(int c){
     if( c>=32 && c<=126 ){
        return 1;
     }
    else{
        return 0;
    }
}

int boslukDisindaYazdirmaKarakteriMi(int c){
    if( c>=33 && c<=126 ){
        return 1;
    }
    else{
        return 0;
    }


}
