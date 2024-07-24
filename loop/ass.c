// Flowcharts Assignment 4

#include<stdio.h>
// Loops



//1) Draw a flowchart to find the sum of the first n natural numbers, where n is any given integer.
// int main(){
//     int i,n;
//     i=1;
//     printf("n natural number :");
//     scanf("%d",&n);
//     while (i<=n){
//         printf("%d\n",i);
//         i++;
//     }
//     return 0;
// }


// int main(){
//     int i=1,n,sum=0;
//     printf("enter number :");
//     scanf("%d",&n);
//     while (i<=n){
//         sum=sum+i;
//         i++;
//     }
//     printf("%d\n",sum);
//     return 0;
// }


//2) Draw a flowchart to find the sum of the first 15 even natural numbers.

// int main(){
//     int i=1,n;
//     printf("frist 15 even natural number:");
//     printf("enter number");
//     scanf("%d",&n);
//     while (i<=n){
//         if (i%2==0){
//             printf("%d\n",i);
//         }
//         i++;
//     }
//     return 0;
// }


//3) Construct a flowchart to show how consecutive even numbers starting from 2 are summed up until the sum just exceeds 1000 and then show the sum and the number of even numbers added.

// int main(){
//     int a=2,sum=0;
//     while (a<=1000){
//         if a%2==0{
//             printf("%d\n",a);
//         }
//         a=a+1;
//     }
//     return 0;
// }

//4) Construct a flowchart to print the numbers below 100 that are divisible by 7.


//5) Construct a flowchart to show how to find the product of n natural numbers.
//6) Draw a flowchart to show how to find all even natural numbers that are divisible by 7 in a given range. (Input lower and upper limit of the range from the user)
//7) Construct a flowchart to find the sum of the squares of the first 9 natural numbers that are divisible by 3.
//8) Construct a flowchart to calculate the sum of the following series where n is input. 1 + 1/2 + 1/3 + 1/4 + 1/5 +…………1/n
//9) Construct a flowchart to show how to find the sum of all the numbers that are divisible by P but not divisible by Q within a given range. (Input lower limit, upper limit, P, and Q from the user)
//10) Draw a flowchart to show how to obtain the HCF and LCM of two numbers. (input two numbers from the user)
//11) Draw a flowchart to show how the sum of the digits of a given number can be obtained. (Input the number from the user)
//12) Draw a flowchart to show the logic of obtaining the reversed form of a given whole number. (Input the number from the user)
//13) Construct a flowchart to show how the factors of a given number can be obtained. (Input the number from the user)
//14) Construct a flowchart to show how to determine whether a given number is a perfect number.  (Input the number from the user)
// Note: A number is said to be a perfect number if the sum of its factors (except itself) equals the number.
//15) Construct a flowchart to show how you can decide if a given number is prime or not.  (Input the number from  the user)
//16) Construct a flowchart for obtaining the sum of a given number of terms (n) for a given value of X in the following mathematical series: (Input X and n from the user)
// X+X2/2+X3/3+X4/4  ....upto n terms
// X-X33+X55-X77+X99 ....upto n terms
// X-12X3+12.34X5-12.34.56X7+ .... upto n terms
// X-X33!+X55!-X77!+ .... upto n terms
//17) Construct a flowchart to find out the sum of first N terms of the following series. 5 + 55 + 555 + 5555 + .......... up to N terms.
//18) Construct a flowchart to print multiplication tables from 1 to 5.
//19) Develop a flowchart to show how to find all the perfect numbers under 10,000.
//20) Develop a flowchart to show how to determine all the 3-digit Armstrong numbers. A number is called an Armstrong number if the sum of the values of the digits each raised to the power equal to the number of digits in the number equals the number. For example, 153 is an Armstrong number, because 153 = 13 + 53 + 33.
//21) Some three-digit numbers show the property that the sum of the factorials of the digits equals the numbers, for example, 145 = 1! + 4! + 5!. Develop a flowchart to show how to determine all such numbers.
//22) Create a pyramid of numbers consisting of a given number of lines. For example, if the given number is 5, then we should see the following:
// 1
// 1 2 1
// 1 2 3 2 1
// 1 2 3 4 3 2 1
// 1 2 3 4 5 4 3 2 1
//23) Construct a flowchart to print the following patterns with flexible dimensions as supplied by the user:
// Note: Use nested loops and not string multiplication to print these patterns.
// N = 5   
// N = 4  


// N = 5    

// N = 4     
//24) Construct a flowchart to input a positive integer. If the number is even, add up its digits. Otherwise, multiply the individual digits and print the result.
//25) Construct a flowchart to determine the HCF of n given numbers. Input a value n from the user then input n numbers from the user.
//26) Construct a flowchart to determine the maximum and the minimum out of n given numbers.
//27) Construct a flowchart to find the second max of given N numbers.
//28) Construct a flowchart to find the third max of given N numbers.
//29) Construct a flowchart to input a number, N, and print first N prime numbers.
//30) Write a program to find the sum of all prime numbers between 1 to n. (n input from the user)
//31) Construct a flowchart to print only the prime factors of a given number N.
//32) Construct a flowchart to show the logic of printing the first N Fibonacci numbers. Fibonacci numbers are obtained from the relationship ti = ti–1 + ti–2, i = 2 to n where t0 = 0, t1 = 1.
//33) Construct a flowchart to find a series of five consecutive numbers, the sum of the squares of the first three of which is equal to the sum of the squares of the last two. For example,
// (– 2)2 + (– 1)2 + 02 = 12 + 22
//34) Some two-digit numbers have the property that the sum of the squares of the numbers equals the sum of the squares of the numbers with reversed digits (for example, 482 + 522 + 632= 842 + 252 + 362). Construct a flowchart to show how to determine all such two-digit numbers.
//35) Construct a flowchart to determine all the permutations of some given number n. (n input from the user)
// For example, if n = 123, then the permutations are:
// 123
// 321
// 231
// 132
// 213
// 312



// #include<stdio.h>
// int main(){
//     printf("%d","hello world");
//     return 0;
// }

// Create a function
// void myFunction(int a, int b) {
//     int sum=a+b;
//     printf("%d\n",sum);
//     printf("I just got executed!\n");
// }

// int main() {
//   myFunction(3,5);
//   myFunction(5,6); // call the function
//   return 0;
// }

void sum(int a, int b) {
 
    int sum=a+b;
    printf("%d\n",sum);
    printf("I just got executed!\n");

}

int main(){
  myFunction(3,5);
  myFunction(5,6); // call the function
  return 0;
}
// Outputs "I

void sum(int a, int b){
    int sum(){
    return 10;
    }
}


