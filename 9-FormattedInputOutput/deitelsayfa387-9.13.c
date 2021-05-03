#include <stdio.h>
#include <conio.h>


int main(){
	int fahrenheit;
	float celcius;
        printf("Fahrenheit\tCelcius\n");
	for(fahrenheit=0;fahrenheit<=212;fahrenheit++){
        printf("%10d\t%+10.3f\n",fahrenheit,5.0/9.0*(float)(fahrenheit-32));
	}





	getch();
	return 0;
}
