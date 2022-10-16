/*composite no*/

#include<stdio.h>
void main(){
int num,count=0;
printf("enter no: ");
scanf("%d",&num);

for(int i=1;i<=num;i++){
    if(num%i==0){
        count++;
        }
    }
    if(count>2){
        printf("%d is composite",num);
        }else{
        printf("%d is not a composite",num);
        }
}
