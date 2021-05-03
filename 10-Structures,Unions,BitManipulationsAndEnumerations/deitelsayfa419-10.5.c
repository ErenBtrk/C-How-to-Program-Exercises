#include <stdio.h>
#include <conio.h>

struct envanter{
    char parcaAdi[30];
    int parcaNumarasi;
    double ucret;
    int stok;
    int sirala;

};

union data{
    char c;
    short s;
    long l;
    float f;
    double d;

};

struct adres{
    char sokakAdresi[25];
    char sehir[20];
    char ulke[3];
    char postaKodu[6];

};

struct ogrenci{
    char ad[15];
    char soyad[15];
    Adres evAdresi;

};

struct test{
      unsigned a : 1;
    unsigned b : 1;
    unsigned c : 1;
    unsigned d : 1;
    unsigned e : 1;
    unsigned f : 1;
    unsigned g : 1;
    unsigned h : 1;
    unsigned i : 1;
    unsigned j : 1;
    unsigned k : 1;
    unsigned l : 1;
    unsigned m : 1;
    unsigned n : 1;
    unsigned o : 1;
    unsigned p : 1;


};

typedef struct adres Adres;
int main(){






	getch();
	return 0;
}
