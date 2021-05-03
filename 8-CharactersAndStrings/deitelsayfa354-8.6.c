#include <stdio.h>
#include <conio.h>



int main(){
	char s[100];
	gets(s);
    int kacKarakter=strlen(s);
    int i;
        for(i=0;s[i]!='\0';i++){
            s[i]=toupper(s[i]);
        }
        printf("\nBUYUK HARFLE YAZDIRMA:\n\n\n%s\n\n\n",s);
        for(i=0;s[i]!='\0';i++){
            s[i]=tolower(s[i]);
        }
        printf("KUCUK HARFLE YAZDIRMA:\n\n\n%s\n\n\n",s);



	getch();
	return 0;
}
