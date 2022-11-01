/* Wap to print odd nos as it is and even nos cube in a given range*/

#include<stdio.h>
void main(){
int start,end;
printf("Enter start and end:");
scanf("%d%d",&start,&end);

for(int i=start;i<=end;i++){
    if(i%2==0){
        printf("%d\t",i*i*i);
        }else{
        printf("%d\t",i);
        }
    }
}
