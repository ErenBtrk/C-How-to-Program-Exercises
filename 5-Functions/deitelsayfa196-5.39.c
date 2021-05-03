#include <stdio.h>
#include <conio.h>

void tasi(int,int,int,int);

int main(){
		int sayi;
	printf("Disklerin baslangic sayisini giriniz:");
	scanf("%d",&sayi);
	tasi(sayi,1,3,2);
	

	
	
	
	getch();
	return 0;
}

void tasi(int diskSayisi,int ilkCubuk,int tasinacakCubuk,int geciciCubuk){
	if(diskSayisi==1){
		printf("%d-->%d\n",ilkCubuk,tasinacakCubuk);
		return;
	}
	tasi(diskSayisi-1,ilkCubuk,geciciCubuk,tasinacakCubuk);
	printf("%d-->%d\n",ilkCubuk,tasinacakCubuk);
	tasi(diskSayisi-1,geciciCubuk,tasinacakCubuk,ilkCubuk);
}
