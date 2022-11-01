/*
123
234
345
*/

void main(){
int rows;
printf("Enter rows: ");
scanf("%d",&rows);

int num=1;
for(int i=1;i<=rows;i++){
   for(int j=1;j<=rows;j++){
        printf("%d ",num);
        num++;
        }
        printf("\n");
        num-=2;
    }
}
