/*WAP to print square of odd nos in given range
*/

#include<stdio.h>
void main(){
int start,end;
printf("ENter start and end\n");
scanf("%d%d",&start,&end);

for(int i=start;i<=end;i++){
    if(i%2!=0){
    printf("%d\t",i*i);
        }
    }
}
