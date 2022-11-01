//printing 3d array using 1 forloop

#include<stdio.h>
void main(){
int arr[2][3][3]={{1,2,3,4,5,6,7,8,9},{10,11,12,13,14,15,16,17,18}};
int arrsize=sizeof(arr)/sizeof(int);

for(int i=0;i<arrsize;i++){
    printf("%d\n",*(**arr+i));
    }
}
