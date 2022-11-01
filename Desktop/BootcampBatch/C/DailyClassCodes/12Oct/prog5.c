#include<stdio.h>
void main(){
char pname[]={'R','o','h','i','t','S','\0','V','a','d','a'};
char *str="ViratK";

printf("%ld\n",sizeof(pname));
puts(pname);

for(int i=0;i<11;i++){
    printf("%c",pname[i]);
    }

printf("\n");
for(int i=0;i<7;i++){
    printf("%c",str[i]);
    }
}
