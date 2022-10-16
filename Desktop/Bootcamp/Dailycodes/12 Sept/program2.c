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
int num;
printf("ENter num for searching\n");
scanf("%d",&num);

int flag=0;
for(int i=0;i<size;i++){
    if(num==arr[i]){
        flag=1;
        }
    }

if(flag==1){
    printf("Found");
    }else{
    printf("Not found");
    }
}
