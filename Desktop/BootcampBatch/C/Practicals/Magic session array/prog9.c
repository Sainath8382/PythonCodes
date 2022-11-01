/*
9. Create a 2D array and take the input of elements from the user & Print using a pointer.
Draw a correct diagram and Write the output
*/

#include<stdio.h>
void main(){

int arr[3][3];
printf("ENter elements for array");

for(int i=0;i<3;i++){
    for(int j=0;j<=3;j++){
        scanf("%d",&arr[i][j]);
        }
    }


for(int p=0;p<3;p++){
    for(int q=0;q<3;q++){
        printf("%d ",*(*(arr+p)+q));
        }
        printf("\n");
    }

}
