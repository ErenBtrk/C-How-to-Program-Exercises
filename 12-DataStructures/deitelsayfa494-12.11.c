#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct n{
    char *dizi;
    int tepe;
    int boyut;
};

typedef struct n N;

N* tanim(void){
    N *s;
    s=(N*)malloc(sizeof(N));
    s->dizi=NULL;
    s->boyut=2;
    s->tepe=0;
    return s;
}

void printArray(N *s){
    int i;
    for(i=0;i<s->tepe;i++){
        printf("%c",s->dizi[i]);
    }
    printf("\n");
}

char pop2(N*s){
    if(s->tepe <= 0 ){
        printf("Dizi bostur.\n");
        return -1;
    }
    return s->dizi[--s->tepe];
}

void push(N* s,char harf){
    if(s->dizi==NULL || s->tepe <= 0){
        s->dizi=(char*)malloc(sizeof(char)*2);
    }
    if(s->tepe >= s->boyut){
        char *dizi2;
        dizi2=(char*)malloc(sizeof(char)*s->boyut*2);
        int i;
        for(i=0;i<s->boyut;i++){
            dizi2[i]=s->dizi[i];
        }
        free(s->dizi);
        s->dizi=dizi2;
        s->boyut*=2;
    }
        s->dizi[s->tepe++]=harf;
}

char pop(N *s){
    if(s->dizi == NULL || s->tepe <= 0){

    }
    if(s->tepe <= s->boyut/2){
        char *dizi2;
        dizi2=(char*)malloc(sizeof(char)*s->boyut/2);
        int i;
        for(i=0;i<s->tepe;i++){
            dizi2[i]=s->dizi[i];
        }
        free(s->dizi);
        s->dizi=dizi2;
        s->boyut/=2;

    }
     return s->dizi[--s->tepe];


}

void stringKopyala(N*s1,N*s2){
    int boyut=strlen(s1->dizi);
    int i;
    int j=0;
    for(i=0;i<boyut;i++){
        if(isalpha(s1->dizi[i])){
            s2->dizi[j]=s1->dizi[i];
             j++;
        }

    }
    s2->dizi[j]='\0';
    s1->dizi[boyut-1]='\0';

}

int kacKarakter(char dizi[]){
    int i;
    int count=0;
    for(i=0;dizi[i] != '\0' ;i++){
        count++;
    }
    return count;
}

int main(){
    N *string;
    string=tanim();
    string->dizi=(char*)malloc(sizeof(char)*35);
    string->tepe=strlen(string->dizi);
    string->boyut=strlen(string->dizi)*2;
    gets(string->dizi);
    N *kopya;
    kopya=tanim();
    kopya->dizi=(char*)malloc(sizeof(char)*35);
    kopya->tepe=strlen(string->dizi);
    kopya->boyut=strlen(string->dizi)*2;
    stringKopyala(string,kopya);
    N *kopya2;
    kopya2=tanim();
    kopya2->dizi=(char*)malloc(sizeof(char)*35);
    kopya2->tepe=strlen(kopya->dizi);
    kopya2->boyut=strlen(kopya->dizi)*2;
    strcpy(kopya2->dizi,kopya->dizi);
    N *ters;
    ters=tanim();
    int boyut=kacKarakter(kopya2->dizi);
    int i;
    for(i=0;i<boyut;i++){
        push(ters,pop(kopya2));
    }
    printf("KOPYA=%s\n",kopya->dizi);
    printf("TERS=%s\n",ters->dizi);
    if(strcmp(ters->dizi,kopya->dizi)==0){
        printf("Palindromedur.\n");
    }
    else{
        printf("Palindrome degildir.\n");
    }


	getch();
	return 0;
}
