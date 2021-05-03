#include <stdio.h>
#include <conio.h>



int main(){
	float sayi1=7.3,sayi2;	
	float *fPtr;
	fPtr=&sayi1;
	printf("fPtr'nin degeri=%.1f\n",*fPtr);
	sayi2=*fPtr;
	printf("sayi2'nin degeri=%.1f\n",sayi2);
	printf("sayi1 degiskeninin adresi=%p\n",&sayi1);
	printf("fPtr degiskeninde saklanan adres=%p\n",fPtr);	
	
	
	
	
	getch();
	return 0;
}
