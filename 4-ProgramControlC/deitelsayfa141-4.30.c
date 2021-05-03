#include <stdio.h>
#include <conio.h>


int main(){
	int n;
	int aSay=0,bSay=0,cSay=0,dSay=0,fSay=0;
		printf("Harf notlarini giriniz:\n");
		printf("Cikis icin EOF karakterini giriniz:\n");
			while((n=getchar())!=EOF){
				if(n=='A'||n=='a'){
					aSay++;
				}
				else if(n=='B'||n=='b'){
					bSay++;
				}
				else if(n=='C'||n=='c'){
					cSay++;
				}
				else if(n=='D'||n=='d'){
					dSay++;
				}
				else if(n=='F'||n=='f'){
					fSay++;
				}
				
					
				
				
					
				
			}
				printf( "\n Her harf notu icin toplam:\n" );
				printf( "A: %d\n", aSay );
				printf( "B: %d\n", bSay );
 				printf( "C: %d\n", cSay );
 				printf( "D: %d\n", dSay );
 				printf( "F: %d\n", fSay );

	
	
	
	
	
	
	
	
	getch();
	return 0;
}
