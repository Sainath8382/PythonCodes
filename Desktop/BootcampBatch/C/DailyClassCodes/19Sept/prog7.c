#include<stdio.h>
void main(){
int arr[2][3];
printf("ENter elements:\n");
for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
        scanf("%d",&arr[i][j]);
        }
    }

for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
        printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}
