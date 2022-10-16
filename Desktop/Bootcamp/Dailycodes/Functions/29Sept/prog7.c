#include<stdio.h>
void arrele(int *(*ptr)[],int arrsize){
for(int i=0;i<arrsize;i++){
     printf("%d\n",(*(**ptr+i)));
    }
}

void main(){
int arr[2][3][3]={{1,2,3,4,5,6,7,8,9},{10,11,12,13,14,15,16,17,18,19}};
int arrsize=sizeof(arr)/sizeof(int);

arrele(arr,arrsize);
}
