#include <stdio.h>
#include <conio.h>


int main(){
	FILE *yazPtr;

	if((yazPtr=fopen("veriboyutu.dat","w"))==NULL){
        printf("Dosya acilamadi.\n");
	}
	else{
        fprintf(yazPtr,"%-20s   %-20s\n","Veri Tipi","Boyut");
        fprintf(yazPtr,"%-20s   %-20d\n","char",sizeof(char));
        fprintf(yazPtr,"%-20s   %-20d\n","unsigned char",sizeof(unsigned char));
        fprintf(yazPtr,"%-20s   %-20d\n","short int",sizeof(short int));
        fprintf(yazPtr,"%-20s   %-20d\n","unsigned short int",sizeof(unsigned short int));
        fprintf(yazPtr,"%-20s   %-20d\n","int",sizeof(int));
        fprintf(yazPtr,"%-20s   %-20d\n","unsigned int",sizeof(unsigned int));
        fprintf(yazPtr,"%-20s   %-20d\n","long int",sizeof(long int));
        fprintf(yazPtr,"%-20s   %-20d\n","unsigned long int",sizeof(unsigned long int));
        fprintf(yazPtr,"%-20s   %-20d\n","float",sizeof(float));
        fprintf(yazPtr,"%-20s   %-20d\n","double",sizeof(double));
        fprintf(yazPtr,"%-20s   %-20d\n","long double",sizeof(long double));
	}
	printf("veriboyutu.dat dosyasi olusturuldu.\n");
	fclose(yazPtr);




	getch();
	return 0;
}
