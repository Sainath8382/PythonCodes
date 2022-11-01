/*take user input array size and elements and check whether the elements are divisible by 4 and 5*/

#include<stdio.h>
void main(){
int size;
printf("Size of array: ");
scanf("%d",&size);
int arr[size];

printf("Enter elements:\n");
for(int i=0;i<size;i++){
scanf("%d",&arr[i]);
    }

int flag=0;
for(int i=0;i<size;i++){
    if(arr[i]%4==0 && arr[i]%5==0){
        flag=1;
        printf("%d\n",arr[i]);
        }
    }

if(flag==1){
    printf("Found\n");
    }else{
    printf("Not found\n");
    }
    }
