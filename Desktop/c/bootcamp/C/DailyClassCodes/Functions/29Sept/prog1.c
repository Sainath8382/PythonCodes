//passing array elements one by one

#include<stdio.h>

void arrele(int e){
printf("%d\n",e);
}

void main(){
int arr[]={10,20,30,40,50};
int arrsize=sizeof(arr)/sizeof(int);

for(int i=0;i<arrsize;i++){
arrele(arr[i]);
    }
}
