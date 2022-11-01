#include<stdio.h>
void main(){
int s=0,e=0;
printf("Enter start: ");
scanf("%d",&s);
printf("ENd: ");
scanf("%d",&e);

for(;s<=e;s++){
    for(int i=1;i<=e/2;i++){
        if(s%i==0 && s!=i){
            printf("%d",s);
            break;
            }
        }
    }
}
