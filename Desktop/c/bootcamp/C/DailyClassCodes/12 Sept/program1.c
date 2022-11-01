/*take array size & elements in array and check whether the element is presen in array or not*/

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
printf("ENter no for search:");
scanf("%d",&num);

for(int i=0;i<size;i++){
    if(num==arr[i]){
        printf("No found\n");
        }else if(num!=arr[i]){
        printf("No not found\n");
        }
    }
}
