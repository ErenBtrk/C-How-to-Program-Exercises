#include <stdio.h>
#include <conio.h>


int main(){
	int koltuk[11]={0},count=0,firstClass=5,economy=0,secim,koltukSec;
	char cevap[2];
		printf("------WELCOME TO YARASA REYIS AIRLINES RESERVATION SYSTEM------\n");
	while(count<10){
		printf("Please type 1 for Economy Class\nPlease type 2 for First Class:");
		scanf("%d",&secim);
		
		if(secim==1){
			printf("Please select your seat assignment(1-5):");
			scanf("%d",&koltukSec);
		if(koltukSec<1||koltukSec>5){
			printf("\nWrong selection.\n\n");
		}
		else{
			if(!koltuk[koltukSec]&&economy<=5){
				printf("\nYour assignment is %d.section %d.seat\n\n",secim,koltukSec);
				koltuk[koltukSec]=1;
				count++;
				economy++;
			}
			else if(economy>=5&&firstClass<=10){
				printf("\nThe economy class section is full.\n\n");
				printf("Would you like to sit in the first class ");
				printf("Section (Y or N)?");
				scanf("%s",cevap);
				if(toupper(cevap[0])=='Y'){
					printf("Please select your seat assignment(6-10):");
					scanf("%d",&koltukSec);
						if(!koltuk[koltukSec]&&firstClass<=10){
							printf("\nYour assignment is 2.section %d.seat\n\n",koltukSec);
							koltuk[koltukSec]=1;
							count++;
							firstClass++;
						}
						else if(koltuk[koltukSec]==1){
							printf("\nThe seat you have selected is already reserved.\n\n");
						}
				}
				else{
					printf("\nNext flight leaves in 3 hours.\n\n");
				}
			}
			else if(koltuk[koltukSec]==1){
				printf("\nThe seat you have selected is already reserved.\n\n");
			}
			else{
				printf("\nNext flight leaves in 3 hours.\n\n");
			}
		}
		}
		else if(secim==2){
			printf("Please select your seat assignment(6-10):");
			scanf("%d",&koltukSec);
		if(koltukSec<6||koltukSec>10){
			printf("\nWrong selection.\n\n");
		}
		else{
			if(!koltuk[koltukSec]&&firstClass<=10){
				printf("\nYour assignment is %d.section %d.seat\n\n",secim,koltukSec);
				koltuk[koltukSec]=1;
				count++;
				firstClass++;
			}
			else if(firstClass>=10&&economy<=5){
				printf("\nThe First class section is full.\n\n");
				printf("Would you like to sit in the economy class ");
				printf("Section (Y or N)?");
				scanf("%s",cevap);
				if(toupper(cevap[0])=='Y'){
					printf("Please select your seat assignment(1-5):");
					scanf("%d",&koltukSec);
						if(!koltuk[koltukSec]&&economy<=5){
							printf("\nYour assignment is 1.section %d.seat\n\n",koltukSec);
							koltuk[koltukSec]=1;
							count++;
							economy++;	
						}
						else if(koltuk[koltukSec]==1){
							printf("\nThe seat you have selected is already reserved.\n\n");
						}
				}
				else{
					printf("\nNext flight leaves in 3 hours.\n\n");
				}
			}
			else if(koltuk[koltukSec]==1){
				printf("\nThe seat you have selected is already reserved.\n\n");
			}
			else{
				printf("\nNext flight leaves in 3 hours.\n\n");
			}
		}
		
		}
		else{
			printf("\nPlease select 1(Economy Class) or 2(First class).\n\n");
		}
	}
	if(count==10){
		printf("\nAll seats are full for this flight...\n\n");
	}
	
	
	
	
	getch();
	return 0;
}
