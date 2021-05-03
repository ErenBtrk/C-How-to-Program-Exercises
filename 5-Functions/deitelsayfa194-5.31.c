#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int yaziTuraAt(void);

int main(){
	int i,yazi=0,tura=0;
	   srand( time( NULL ) );
		for(i=1;i<=10;i++){
			if(yaziTuraAt()==1){
				yazi++;
				
			}
			else{	
				tura++;
				
			}		
		}
			printf("\n\nYazi sayisi=%d\nTura sayisi=%d\n",yazi,tura);
	
	
	
	getch();
	return 0;
}

int yaziTuraAt(void){
	int yaziTura;
		yaziTura=1+rand()%2;
			printf("%d ",yaziTura);
		if(yaziTura==1){
			printf("Yazi\n");
		}
		else if(yaziTura==2){
			printf("Tura\n");	
		}
		return yaziTura;
}
