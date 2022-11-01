//printing diagonal elements of 2d array
#include<stdio.h>

void diagonal1(int arr[3][3],int row,int col){
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        if(i==j){
            printf("%d\n",arr[i][j]);
            }
        }
    }
}

void diagonal2(int (*ptr)[],int arrsize){
    for(int i=0;i<arrsize;i++){
        if(i%4==0){
            printf("%d\n",*(*ptr+i));
            }
        }
    }

void main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int row=3,col=3;
    int arrsize=sizeof(arr)/sizeof(int);
    diagonal1(arr,row,col);

    diagonal2(arr,arrsize);
}
