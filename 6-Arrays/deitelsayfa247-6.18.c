#include <stdio.h>
#define BOYUT 11
void birFonksiyon(int [], int);
main()
{
int a[BOYUT] = {32, 27, 64, 18, 95, 14, 90, 70, 60, 37,11};
printf("Dizideki degerler: \n");
birFonksiyon(a, BOYUT);
printf("\n");
return 0;
}
void birFonksiyon(int b[], int boyut)
{
if(boyut>0){
	
birFonksiyon(&b[1],boyut-1);
printf("%d \n", b[0]);
	
}

}
