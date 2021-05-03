#include <stdio.h>
#include <conio.h>
#include <signal.h>
#include <stdlib.h>

void sinyalIsleyici(int sinyalDegeri){
    int yanit;

    printf("\nSinyal (%d) alindi.\n",sinyalDegeri);
    printf("Devam etmek istiyor musunuz?(evet=1 hayir=2)\n");

    scanf("%d",&yanit);

    while(yanit != 1 && yanit != 2){
        printf("(evet=1 hayir=2)?\n");
        scanf("%d",&yanit);
    }

    if(yanit == 1){
        signal(SIGINT,sinyalIsleyici);
    }
    else{
        exit(EXIT_SUCCESS);
    }

}

int main(){
	int i;

	signal(SIGINT,sinyalIsleyici);

	for(i=33;i<=126;i++){
        printf("%c ",(char)i);

        if(i == 85 || i == 117){
            raise(SIGINT);
        }

        if(i % 10 == 0){
            printf("\n");
        }
	}




	getch();
	return 0;
}
