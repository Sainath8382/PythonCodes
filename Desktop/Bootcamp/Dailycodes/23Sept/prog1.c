#include<stdio.h>
void main(){
int arr1[4]={10,20,30,40};
int arr2[4]={5,6,7,8};
int arr3[4]={9,10,11,12};

//int (*ptr[4])[3] ={&arr1,&arr2,&arr3};
//int (*ptr[3])[4]={&arr1,&arr2,&arr3};
int (*ptr[])[4]={&arr1,&arr2,&arr3};
}
