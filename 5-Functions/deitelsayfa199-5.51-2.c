#include <stdio.h>
#include <conio.h>

int zarAtma(void);
int barbut(void);
void chatter(void);

int main(){
	int bakiye=1000,bahis,sonuc;
	srand(time(NULL));
	printf("Bankada %d TL bakiyeniz bulunmaktadir.",bakiye);
	printf("Lutfen bahis giriniz.");
	scanf("%d",&bahis);
		while(bahis<=0||bahis>bakiye){
			printf("Lutfen gecerli bir bahis giriniz:");
			scanf("%d",&bahis);
		}
	sonuc=barbut();
		if(sonuc==2){
			bakiye=bakiye-bahis;
			printf("Yeni bakiye=%d TL\n",bakiye);	
			if(bakiye==0){
				printf("Uzgunum.Battiniz!Oynadiginiz icin tesekkurler...\n");
			}	
		}
		else{
			bakiye=bakiye+bahis;
			printf("Yeni bakiyeniz=%d",bakiye);
		}
		
	
	getch();
	return 0;
}

int zarAtma(void){
	int zar1,zar2,toplam;
		zar1=1+rand()%6;
		zar2=1+rand()%6;
		toplam=zar1+zar2;
		printf("Ilk zar=%d\nIkinci zar=%d\nToplam=%d\n",zar1,zar2,toplam);
		return toplam;
}

int barbut(void){
	int zarla,toplam,oyunDurumu,oyuncuPuani;
	printf("Lutfen zar atmak icin '1' rakamini giriniz:");
	scanf("%d",&zarla);
	srand( time( NULL ) );
	switch(zarla){
		case 1:
		toplam = zarAtma( );
		switch(toplam){
			case 7: case 11: /* ilk atýGta kazanma */
 			oyunDurumu = 1;
 			chatter();
 			break;
 			case 2: case 3: case 12: /* ilk atýGta kaybetme */
 			oyunDurumu = 2;
 			break;
 			chatter();
 			default: /* hatýrlatma noktasý */
 			oyunDurumu = 0;
 			oyuncuPuani= toplam;
 			printf( "Oyuncunun kazanacagi zar: %d\n", oyuncuPuani );
 			chatter();
 			break;
 		}
 		
 		
	}	
	while (oyunDurumu == 0 ) { /* zar atmaya devam et */
 		printf("Tekrar zar atmak icin '1' rakamini giriniz:");
 		scanf("%d",&zarla);
 		switch(zarla){
 			case 1:
 			toplam= zarAtma( );

 			if ( toplam == oyuncuPuani) /* kazanýlacak zarý atma */
 				oyunDurumu = 1;
 			else if ( toplam == 7 ) /* 7 atma ile kaybetme */
 				oyunDurumu = 2;
 		
 		
 		}
 	}
 			if (oyunDurumu == 1 ){
 				printf( "KAZANDINIZ.TEBRIKLER. \n" );
 				return 1;
			 }
 				
 			else{
 				printf( "KAYBETTINIZ.BELKI BIR DAHAKI SEFERE...\n" );
 				return 2;
			 }
 			
}
void chatter( void )
{ 
   int select;

   select = 1 + rand() % 6;

   switch ( select )
   { 
      case 1:
         printf( "Batmana cok az kaldi!\n" );
         break;
      case 2:
         printf( "Hadi ama bi daha dene!\n" );
         break;
      case 3:
         printf( "Aman Tanrim!!Bankayi soyacak!!\n" );
         break;
      case 4:
         printf( "Buyuksun!!Simdi ciplerini paraya cevirme zamani!!\n" );
         break;
      case 5:
         printf( "Cok sanslisin!\n" );
         break;
      case 6:
         printf( "Hepsini harcayacak kadar cesur musun?\n" );
         break;
      default:
         break;
   }
}



