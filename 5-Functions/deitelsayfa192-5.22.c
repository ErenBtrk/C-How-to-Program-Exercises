#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int bolum(int,int);
int kalan(int,int);
void rastgele(void);

int main(){
	int a,b,c,d;
		printf("a,b,c ve d sayilarini giriniz:");
		scanf("%d\n%d\n%d\n%d",&a,&b,&c,&d);
		printf("a sayisinin b sayisina bolumu=%d\n",bolum(a,b));
		printf("c sayisinin d sayisina bolumunden kalan=%d\n",kalan(c,d));
		rastgele();
	
	
	
	getch();
	return 0;
}

int bolum(int a,int b){
	return a/b;
}
int kalan(int a,int b){
	return a%b;
}
void rastgele(void){
	srand(time(NULL));
	int i,n,kalan,bas=0,dizi[100],temp;
	n=rand();
	printf("%d\n",n);
	while(n!=0){
		kalan=n%10;
		n=n/10;
		bas++;
		dizi[bas-1]=kalan;
	}
	printf("Basamak sayisi=%d\n",bas);
	for(i=0;i<bas/2;i++){
		temp=dizi[i];
		dizi[i]=dizi[(bas-1)-i];
		dizi[(bas-1)-i]=temp;
	}
	for(i=0;i<bas;i++){
		printf("%3d",dizi[i]);
	}
	
}
