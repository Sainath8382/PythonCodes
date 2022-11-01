/*
DDDD
CCCC
BBBB
AAAA
*/

void main(){
int rows;
printf("Rows: ");
scanf("%d",&rows);

char ch='D';
for(int i=1;i<=rows;i++){
    for(int j=1;j<=rows;j++){
            printf("%c ",ch);
        }
        printf("\n");
        ch--;
    }
}
