/*
9   64  7
36  5   16
3   4   1
*/

void main(){

int rows;
printf("Rows: ");
scanf("%d",&rows);

int num=rows*rows;
for(int i=1;i<=rows;i++){
    for(int j=1;j<=rows;j++){
        if((i+j)%2!=0){
            printf("%d\t",num*num);
            }else{
            printf("%d\t",num);
            }
            num--;
        }
        printf("\n");
    }
}
