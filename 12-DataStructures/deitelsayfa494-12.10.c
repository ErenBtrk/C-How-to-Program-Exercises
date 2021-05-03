#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

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
    s->tepe=0;
    s->boyut=2;
    return s;
}


void push(N*s,char h){
    if(s->dizi==NULL){
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
    s->dizi[s->tepe++]=h;
}

char pop(N*s){
    if(s->tepe <= 0 && s->dizi == NULL){
        printf("Dizi bostur.\n");
        return -1;
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

void yazdir(N*s){
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

int main(){
    N *string;
    string=tanim();
    string->dizi=(char*)malloc(sizeof(char)*20);
    gets(string->dizi);
    string->tepe=strlen(string->dizi);
    string->boyut=string->tepe*2;
    N *ters;
    ters=tanim();
    int i;
    for(i=0;i<strlen(string->dizi);i++){
        push(ters,pop2(string));
    }
    pop2(string);
    yazdir(ters);
    yazdir(string);





	getch();
	return 0;
}
