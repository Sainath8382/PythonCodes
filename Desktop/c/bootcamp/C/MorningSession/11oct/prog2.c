/*Wap to take range from user and print nos divisible by 3 and 7 in reverse*/

void main(){
int start,end;
printf("ENter start\n");
scanf("%d",&start);
printf("Enter end\n");
scanf("%d",&end);

for(int i=end;i>=start;i--){
    if(i%3==0 && i%7==0){
        printf("%d\t",i);
        }
    }
}
