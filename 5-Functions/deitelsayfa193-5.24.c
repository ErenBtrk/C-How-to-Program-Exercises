#include <stdio.h>
#include <conio.h>

double derece(int);
double fahrenheit(int);

int main(){
	int i;
		printf("Derece\t\tFahrenheit\n");
		for(i=0;i<=100;i++){
			printf("%d\t\t%.2f\n",i,fahrenheit(i));
		}
		printf("\nFahrenheit\tDerece\n");
		for(i=32;i<=212;i++){
			printf("%d\t\t%.2f\n",i,derece(i));
		}

	
	
	
	getch();
	return 0;
}

double derece(int a){
	return (a-32)/1.8;
}
double fahrenheit(int a){
	return a*1.8+32;
}
