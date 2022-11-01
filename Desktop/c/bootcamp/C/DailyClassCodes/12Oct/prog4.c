#include<stdio.h>
void main(){
 char pname[]={'R','o','h','i','t','S','\0','v','c'};
 char *name="MSDhon";


 for(int i=0;i<7;i++){
    printf("%c",pname[i]);
    }
    printf("\n");

    for(int i=0;i<7;i++){
    printf("%c",name[i]);
    }
}
