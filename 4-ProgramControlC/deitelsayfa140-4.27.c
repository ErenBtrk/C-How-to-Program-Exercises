#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){

	int k1,k2,hipotenus;
		printf("Kenar1\tKenar2\tHipotenus\t\n");
		for(hipotenus=1;hipotenus<=500;hipotenus++){
			for(k1=1;k1<hipotenus;k1++){
				for(k2=1;k2<hipotenus;k2++){
					if(k1*k1+k2*k2==hipotenus*hipotenus){
						printf("%d\t%d\t%d\t\n",k1,k2,hipotenus);
					}
				}
			}
			
		}
	
	
	
	
	
	
	
	
	getch();
	return 0;
}
