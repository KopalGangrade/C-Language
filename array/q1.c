// #include<stdio.h>
// int main(){
//     float price[3];
//     printf("enter 3 price:");
//     scanf("%f",&price[0]);
//     scanf("%f",&price[1]);
//     scanf("%f",&price[2]);

//     printf("%f\n",price[0]+(18*price[0]));
//     printf("%f\n",price[0]+(18*price[1]));
//     printf("%f\n",price[0]+(18*price[2]));
//     return 0;

// }

// pointer arithmetics

// int main(){
//    int age =22;
//    int *ptr=&age;
//    printf("ptr = %u",ptr);
//    ptr++;
//    printf("ptr = %u",ptr);
//    ptr--;
//    printf("ptr = %u",ptr);
//    return 0;
// }

// we can subtract one pointer from another

// int main(){
//     int age=22;
//     int age1=22;
//     int *ptr=&age;
//     int *ptr1=&age1;
//     printf("%u\n %u\n",ptr1,ptr);
//     printf("diffrence = %u \n",ptr-ptr1);
//     printf("%u\n %u\n",ptr,ptr1);
//     printf("compare= %u\n",ptr==ptr1);
//     return 0;
// }

// output it will show the differance 1 not byte
//  can't find diffrence between 2 diffrenet data type.

// we can alse compare 2 pointers

// Array is a pointer

/*
int *ptr=&arr[0];

int *ptr = arr;  */

// Traverse an Array

// int main(){
//     int aadhar[5];
//     int *ptr=&aadhar[0];
//     for(int i=0; i<5; i++){
//         printf("%d index",i);
//         scanf("%d",(ptr+i));
//         // scanf("%d",aadhar[i]);
//     }
//     for (int i=0;i<5;i++){
//         printf("%d index =%d\n",i, *(ptr+i));
//         //printf("%d index =%d\n",i, aadhar[i]);
//     }
//     return 0;
// }

// int aadhar[10];
// int *ptr =&aadhar[0];

// topic Array  as function argument

// function declearation

// void printNumbers(int arr[],int n)
// or
// void printNumbers(int *arr,int n)

// function call

// printNumbers(arr,n);

// example

// #include<stdio.h>
// int main(){
//     int a,b;
//     scanf("%d",&a);
//     scanf("%d",&b);
//     printf("%d\n",a+b);
//     return 0;
// }

#include <stdio.h>


