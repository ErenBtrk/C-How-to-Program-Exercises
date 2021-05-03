#include <stdio.h>
#include <conio.h>


int main(){
	int km,toplamKm;
	float galon,toplamGalon,kmBasina;
		while(galon!=-1){
			printf("Kac galon benzin harcandi:");
			scanf("%f",&galon);
			if(galon==-1){
				printf("Toplam Km=%d\nToplam Harcanan Benzin=%f\nToplam ortalama km/galon=%f\n",toplamKm,toplamGalon,(float)toplamKm/toplamGalon);
				printf("cikis yaptiniz.");
				break;
			}
			printf("Kac km yol gidildi:");
			scanf("%d",&km);
			if(galon!=-1){
			kmBasina=(float)km/galon;
			toplamKm=toplamKm+km;
			toplamGalon=toplamGalon+galon;
			printf("Km basina harcanan galon benzin:%f\n",kmBasina);
			}
		
				
		}
	
	
	
	
	
	getch();
	return 0;
}
