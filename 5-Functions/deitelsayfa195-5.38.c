#include <stdio.h>
#include <conio.h>

void fibonacci(int);

int main(){
	unsigned long long int sayi;
	printf("Kac fibonacci sayisi yazdirmak istiyorsunuz:");
	scanf("%llu",&sayi);
	fibonacci(sayi);
	

	
	
	
	getch();
	return 0;
}

void fibonacci(int sayi){
	int i;
	unsigned long long int a=0,b=1,c;
		printf("%d\n%d\n",a,b);
		for(i=1;i<=sayi-2;i++){
			c=a+b;
			a=b;
			b=c;
		
		}
			printf("%llu\n",c);
}
