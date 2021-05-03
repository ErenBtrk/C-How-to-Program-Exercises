#include <stdio.h>
#include <conio.h>
#include <math.h>

float mesafe(float,float,float,float);

int main(){
	float x1,x2,y1,y2;
		printf("1.Noktanin elemanlarini giriniz(x1,y1)=");
		scanf("%f\n%f",&x1,&y1);
		printf("2.Noktanin elemanlarini giriniz(x2,y2)=");
		scanf("%f\n%f",&x2,&y2);
		printf("%f",mesafe(x1,y1,x2,y2));

	
	
	
	getch();
	return 0;
}

float mesafe(float x1,float y1,float x2,float y2){
	return sqrt(pow(x2-x1,2)+pow(y2-y1,2));
}
