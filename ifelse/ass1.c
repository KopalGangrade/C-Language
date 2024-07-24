// Flowcharts Assignment 1
#include<stdio.h>
// Note: Construct flowchart for the given questions and do the dry run of the given values
 
// 1) Construct a flowchart to show how the sum of two numbers can be obtained.
// int main(){
//     int a,b;
//     int sum;
//     printf("sum of two numbers");
//     scanf("%d",&a);
//     scanf("%d",&b);
//     int c=a+b;
//     printf("%d\n",c);
//     return 0;
// }

// 2) Construct a flowchart to show the procedure for obtaining the average of two given numbers.

// int main(){
//     int a,b;
//     printf("avg of two number :");
//     scanf("%d",&a);
//     scanf("%d",&b);
//     printf("%d",(a+b)/2);
//     return 0;
// }
// 
//  3) Construct a flowchart to show how to obtain the daily wage of a worker on the basis of the hours worked during the day.
// (Daily wage of a worker is determined by hours worked per day and the hourly wage rate. Input the number of hours worked from the user and the hourly wage rate)

// int main(){
//     int h,wage;
//     printf("daily wage:");
//     scanf("%d",&h);
//     scanf("%d",&wage);
//     printf("%d",h*wage);
//     return 0;
// }



//4) Construct a flowchart to show how to obtain the area of a triangle on the basis of the base and height.
// (Input the base and height of the triangle from the user)

// int main(){
//     int base,height;
//     printf("area of triangle");
//     scanf("%d",&base);
//     scanf("%d",&height);
//     printf("%d",base*height);
//     return 0;
// }

// 5)Construct a flowchart to show the steps in finding the simple interest on a given amount at a given rate of interest.
// (Input amount, rate of interest and time from the user)

// int main(){
//     int p,r,n;
//     printf("area of triangle");
//     scanf("%d",&p);
//     scanf("%d",&r);
//     scanf("%d",&n);
//     printf("%d",(p*r*n)/100);
//     return 0;
// }


//6) If P amount of money is invested for N years at an annual rate of interest I, the money grows to an amount T, where T is given by T = P (1 + I/100)N. Construct a flowchart to show how T is determined.

// #include<math.h>
// int main(){
//     int p,i,n;
//     printf("annual rate :");
//     scanf("%d",&p,&i,&n);
//     t=p(pow((1+i/100),n));
//     printf("%d",);
//     return 0;
// }
// 1000, 2, 2
// 1500, 5, 1
// 100, 10, 3


// 7)Construct a flowchart to show how to interchange the values of two variables.

// int main(){
//     int a,b,temp;
//     printf("interchange value");
//     scanf("%d",&a);
//     scanf("%d",&b);
//     temp=a;
//     a=b;
//     b=temp;
//     printf("%d \n",a);
//     printf("%d\n",b);
//     return 0;
// }


// int main(){
//     int a,b;
//     printf("interchange value");
//     scanf("%d",&a);
//     scanf("%d",&b);
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     printf("%d\n %d\n",a,b);
//     return 0;
// }


// 20,30
// 45,67
// 34,43
//8) Construct a flowchart to show how to interchange the values of two variables without using a third variable.

// int main(){
//     int a,b;
//     printf("interchange value");
//     scanf("%d",&a);
//     scanf("%d",&b);
//     a=a*b;
//     b=a/b;
//     a=a/b;
//     printf("%d\n %d\n",a,b);
//     return 0;
// }



//9) Construct a flowchart to print a Welcome message. Take input from the user and on the output window print ‘Welcome ____’.(Blank to  be filled by the input taken from User ).

// int main(){
//     char a[20];
//     printf("print welcome massage :\n");
//     scanf("%s",&a);
//     printf("welcome %s",a);
//     return 0;
// }


// #include <stdio.h>

// int main() {
//   // Create a string
//   char fullName[20];
//   printf("Type your full name and press enter: \n");
//   fgets(fullName, sizeof(fullName), stdin);
//   printf("Hello %s", fullName);
//   return 0;
// }


// Construct a flowchart to add, subtract, divide and multiply two integers a and b. 

// int main(){
//     int a,b;
//     printf("2 integers");
//     scanf("%d",&a);
//     scanf("%d",&b);
//     printf("%d",a+b);
//     printf("%d",a-b);
//     printf("%d",a*b);
//     printf("%d",a/b);
//     return 0;
// }



// Construct a flowchart to calculate the area and perimeter of a rectangle.
// (Input length and breadth of the rectangle from the user)

// int main(){
//     int base,height;
//     printf("area of triangle");
//     scanf("%d",&base);
//     scanf("%d",&height);
//     printf("%d",base*height);
//     return 0;
// }
// 2,5
// 27,12
// 20,32
// Construct a flowchart to calculate the area and perimeter of a square.
// (Input side length of the square from the user)

// int main(){
//     int base,height;
//     printf("area of triangle");
//     scanf("%d",&base);
//     scanf("%d",&height);
//     printf("%d",base*height);
//     return 0;
// }
// 4
// 5
// 11
// Construct a flowchart to calculate the semiperimeter of a triangle.
// (Input the three side of a triangle from the user)

// int main(){
//     int base,height;
//     printf("area of triangle");
//     scanf("%d",&base);
//     scanf("%d",&height);
//     printf("%d",base*height);
//     return 0;
// }
// 3,4,5
// 7,8,9
// 20,25,32
// Construct a flowchart to calculate the area of a circle.
// (Input the radius of the circle from the user) 

// int main(){
//     int base,height;
//     printf("area of triangle");
//     scanf("%d",&base);
//     scanf("%d",&height);
//     printf("%d",base*height);
//     return 0;
// }
// 14
// 17.5
// 77
// Given the circumference of a circle, construct a flowchart to calculate the Diameter. 
// (Input the circumference of the circle from the user) 

// int main(){
//     int base,height;
//     printf("area of triangle");
//     scanf("%d",&base);
//     scanf("%d",&height);
//     printf("%d",base*height);
//     return 0;
// }
// 110
// 66
// 11
// Construct a flowchart to calculate the lateral surface area and Total surface area of a cube.(Input the side length of the cube from the user).

// int main(){
//     int base,height;
//     printf("area of triangle");
//     scanf("%d",&base);
//     scanf("%d",&height);
//     printf("%d",base*height);
//     return 0;
// }
// 6
// 3
// 8
// Construct a flowchart to calculate the volume of a cube.
// (Input the side length of the cube from the user)

// int main(){
//     int base,height;
//     printf("area of triangle");
//     scanf("%d",&base);
//     scanf("%d",&height);
//     printf("%d",base*height);
//     return 0;
// }
// 6
// 3
// 8
// Construct a flowchart to find the lateral surface area and Total surface area of a cuboid.
// (Input the side lengths of the cuboid from the user)

// int main(){
//     int base,height;
//     printf("area of triangle");
//     scanf("%d",&base);
//     scanf("%d",&height);
//     printf("%d",base*height);
//     return 0;
// }
// 2,4,6
// 3,5,7
// 5,7,9
// Construct a flowchart to calculate the volume of a cuboid.
// (Input the side lengths of the cuboid from the user)

// int main(){
//     int base,height;
//     printf("area of triangle");
//     scanf("%d",&base);
//     scanf("%d",&height);
//     printf("%d",base*height);
//     return 0;
// }
// 2,4,6
// 3,5,7
// 5,7,9
//  Construct a flowchart to display the last digit of a number.
// (Input the number from the user)

// int main(){
//     int base,height;
//     printf("area of triangle");
//     scanf("%d",&base);
//     scanf("%d",&height);
//     printf("%d",base*height);
//     return 0;
// }
// 23534
// 7746
// 3257
// Construct a flowchart to calculate remainder when a is divided by b. 

// int main(){
//     int base,height;
//     printf("area of triangle");
//     scanf("%d",&base);
//     scanf("%d",&height);
//     printf("%d",base*height);
//     return 0;
// }
// 234,98
// 8,10
// 2343,100
// Construct a flowchart to calculate the quotient when a is divided by b.

int main(){
    int a,b;
    printf("Find quotient :");
    scanf("%d",&base);
    scanf("%d",&height);
    printf("%d",base*height);
    return 0;
}
// 234,98
// 8,10
// 2343,100
// Construct a flowchart to Calculate the selling price of a product if MRP  and discount are given(Input MRP and discount from user).

// int main(){
//     int base,height;
//     printf("area of triangle");
//     scanf("%d",&base);
//     scanf("%d",&height);
//     printf("%d",base*height);
//     return 0;
// }
// 3445,20
// 2890,98
// 3454,12
// Construct a flowchart to calculate the square of a number.

// #include<math.h>
// int main(){
//     int sq;
//     printf("Square of Number :");
//     scanf("%d",);
//     scanf("%d",&height);
//     printf("%d",base*height);
//     return 0;
// }
// 23
// 12
// 11


// Construct a flowchart to calculate the cube of a number. 

// int main(){
//     int base,height;
//     printf("area of triangle");
//     scanf("%d",&base);
//     scanf("%d",&height);
//     printf("%d",base*height);
//     return 0;
// }

// int main(){
//     int cube;
//     printf("Enter a number:");
//     scanf("%d",&cube);
//     printf("%d\n",cube*cube*cube);
//     return 0;
// }

// Construct a flowchart to calculate how many books we can buy if we have x Rs .   (Cost of a book = Rs. y)(input x,y from user)

// int main(){
//     int base,height;
//     printf("area of triangle");
//     scanf("%d",&base);
//     scanf("%d",&height);
//     printf("%d",base*height);
//     return 0;
// }
// 1000,145
// 1200,310
// 1500,400
// From the remaining amount in the above question , How many Pens can be bought if one pen costs Rs. 5. Construct a flowchart.  
// Test cases same as above
// Construct a flowchart to calculate the total marks obtained by a student in examination. (Subjects : - Hindi, Maths, English, Science, Computer) 
// (Input marks of all 5 subjects from the user)
// 56,78,67,87,65
// 13,56,34,65,43


// int main(){
//     int base,height;
//     printf("area of triangle");
//     scanf("%d",&base);
//     scanf("%d",&height);
//     printf("%d",base*height);
//     return 0;
// }
// Construct a flowchart to calculate the percentage obtained in the above question.
// 30)Construct a flowchart to determine the acceleration due to gravity (g), where g can be obtained from the following formula:
// T = 2l/g
// where 	T = Time period of a simple pendulum
// And	 l = Effective length of the simple pendulum
// (Input T and l from user)
// 1.41,5
// 2,10
// 4,40

#include<math.h>
int main(){
    int t,l,g;
    printf("find gravity:");
    scanf("%d%d",&l,&t);
    g=2*3.14*2*l/pow(t,2);
    printf("%d",g);
}


//31) A store sells Vadapavs & Samosas. They want a system where they enter the number of Vadapavs (V) and Samosas (S) a customer buys and a bill with the final price is automatically calculated and displayed. A Vadapav costs 12₹, while a Samosas costs 15₹. Write a program to create such a system.
// S = 10, V = 4

// int main(){
//     int vada,samosa;
//     printf("Number of vada & samosa:");
//     scanf("%d %d",&vada,&samosa);
//     int total=vada*12+samosa*15;
//     printf("%d\n",total);
//     return 0;
// }


// 32)Write a program to take two numbers A and B as input from the user and print the number closest to (but less than) A which is completely divisible by B.
// For example: 
// A = 23, B = 7    

// int main(){
//     int a,b;
//     printf("enter a & b :");
//     scanf("%d %d",&a,&b);
//     a=a/7;
//     b=a*7;
//     printf("%d",b);
//     return 0;
// }


//33) Construct a flowchart to obtain the Fahrenheit equivalent of a temperature given in Celsius where the relationship between the two scales of temperature is
// C/5 = (F-32)/9
// where 	C = Temperature in Celsius
// F = Temperature in Fahrenheit
// -40
// 35
// -18

// int main(){
//     float c,f;
//     printf("Temperature in Fehrenheit:");
//     scanf("%f",&c);
//     f=c/5*9+32;
//     printf("%f\n",f);
//     return 0;
// }
