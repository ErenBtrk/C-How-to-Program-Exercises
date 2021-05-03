/* gekil 6.7: fig06_07.c
 Öðrenci Oylama Programý */
 #include <stdio.h>
 #define CEVAP_BOYUTU 40
 #define FREKANS_BOYUTU 11

int main( )
 {
 int ogrenciCevabi, oylama, frekans[ FREKANS_BOYUTU ] = { 0 };
 int cevaplar[ CEVAP_BOYUTU ] =
 { 1, 2, 6, 4, 8, 5, 9, 7, 8, 10,
 1, 6, 3, 8, 6, 10, 3, 8, 2, 7,
 6, 5, 7, 6, 8, 6, 7, 5, 6, 6,
 5, 6, 7, 5, 6, 4, 8, 6, 8, 10 };

 for(ogrenciCevabi= 0;ogrenciCevabi<=CEVAP_BOYUTU - 1;ogrenciCevabi ++ )
 ++frekans[ cevaplar [ogrenciCevabi ] ];

 printf( "%s%17s\n", "Oylama", "Frekans" );

 for ( oylama = 1; oylama<= FREKANS_BOYUTU - 1; oylama++ )
 printf( "%6d%17d\n", oylama, frekans[ oylama] );

 return 0;
 }
