#include<stdio.h>
int main()
{
    printf("Hello World!");
    return 0;
}

// 1
#include <stdio.h>

int main() {
  printf("Hello World!");
  printf("Have a good day!");
  return 0;
}

 // 2
#include <stdio.h>

int main() {
  printf("Hello World!");
  return 0;
}

// 3
#include <stdio.h>

int main() {
  printf("Hello World!");
  printf("I am learning C.");
  printf("And it is awesome!");
  return 0;
}
 // 4
#include <stdio.h>

int main() {
  printf("Hello World!\n");
  printf("I am learning C.");
  return 0;
}
// 5

#include <stdio.h>

int main() {
  printf("Hello World!\nI am learning C.\nAnd it is awesome!");
  return 0;
}

//6
#include <stdio.h>

int main() {
  printf("Hello World!\n\n");
  printf("I am learning C.");
  return 0;
}
 
//7
#include <stdio.h>

int main() {
  printf("   *\n");
  printf("  ***\n");
  printf(" *****\n");
  printf("*******\n");
  return 0;
}

// 8
#include <stdio.h>

int main() {
  // This is a comment
  printf("Hello World!");
  return 0;
}

// 9
#include <stdio.h>

int main() {
  printf("This will run");
  // printf("This will NOT run");
  return 0;
}

// 10
#include <stdio.h>

int main() {
  // The code below will print the words Hello World!
  //to the screen, and it is amazing 
  printf("Hello World!");
  return 0;
}

// 11
#include <stdio.h>

int main() {
  int myNum = 15;
  printf(myNum); // Nothing happens
  return 0;
}

// Format Specifiers
#include <stdio.h>

int main() {
  int myNum = 15;
  printf("%d", myNum);
  return 0;
}

// 13
#include <stdio.h>

int main() {
  // Create variables
  int myNum = 15;              // Integer (whole number)
  float myFloatNum = 5.99;     // Floating point number
  char myLetter = 'D';         // Character
  
  // Print variables
  printf("%d\n", myNum);
  printf("%f\n", myFloatNum);
  printf("%c\n", myLetter);
  return 0;
}

// 14
#include <stdio.h>

int main() {
  int myNum = 15;
  printf("My favorite number is: %d", myNum);
  return 0;
}

// 15
#include <stdio.h>

int main() {
  int myNum = 15;
  char myLetter = 'D';
  printf("My number is %d and my letter is %c", myNum, myLetter);
  return 0;
}

// 16
#include <stdio.h>

int main() {
  printf("My favorite number is: %d\n", 15);
  printf("My favorite letter is: %c", 'D');
  return 0;
}

// Change Variable Values
#include <stdio.h>

int main() {
  int myNum = 15; // myNum is 15
  myNum = 10; // Now myNum is 10
  
  printf("%d", myNum);
  return 0;
}

// 17
#include <stdio.h>

int main() {
  int myNum = 15;
  
  int myOtherNum = 23;

  // Assign the value of myOtherNum (23) to myNum
  myNum = myOtherNum;

  // myNum is now 23, instead of 15
  printf("%d", myNum);
  
  return 0;
}

// 18
#include <stdio.h>

int main() {
  // Create a myNum variable and assign the value 15 to it
  int myNum = 15;
  
  // Declare a myOtherNum variable without assigning it a value
  int myOtherNum;

  // Assign value of myNum to myOtherNum
  myOtherNum = myNum;

  // myOtherNum now has 15 as a value
  printf("%d", myOtherNum);
  
  return 0;
}

// Add Variables Together

#include <stdio.h>

int main() {
  int x = 5;
  int y = 6;
  int sum = x + y;
  printf("%d", sum);
  return 0;
}

// 19
#include <stdio.h>

int main() {
  int x = 5;
  x = x + 1;
  printf("%d", x);
  return 0;
}

// Swap Two Variables

#include <stdio.h>

int main() {
  int a = 5;
  int b = 10;
  int temp;

  // Swap the values of a and b
  temp = a;
  a = b;
  b = temp;

  printf("a is %d, b is %d", a, b);

  return 0;
}

// Declare Multiple Variables

#include <stdio.h>

int main() {
  int x = 5, y = 6, z = 50;
  printf("%d", x + y + z);
  return 0;
}

// 20
#include <stdio.h>

int main() {
  int x, y, z;
  x = y = z = 50;
  printf("%d", x + y + z);
  return 0;
}

// C Variable Names (Identifiers)
// C Variable Names

#include <stdio.h>

int main() {
  // Good variable name
  int minutesPerHour = 60;

  // OK, but not so easy to understand what m actually is
  int m = 60;
  
  printf("%d\n", minutesPerHour);
  printf("%d", m);
  return 0;
}

// 21
#include <stdio.h>

int main() {
  // Student data
  int studentID = 15;
  int studentAge = 23;
  float studentFee = 75.25;
  char studentGrade = 'B';

  // Print variables
  printf("Student id: %d\n", studentID);
  printf("Student age: %d\n", studentAge);
  printf("Student fee: %f\n", studentFee);
  printf("Student grade: %c", studentGrade);

  return 0;
}

// Calculate the Area of a Rectangle
#include <stdio.h>

int main() {
  // Create integer variables
  int length = 4;
  int width = 6;
  int area;

  // Calculate the area of a rectangle
  area = length * width;

  // Print the variables
  printf("Length is: %d\n", length);
  printf("Width is: %d\n", width);
  printf("Area of the rectangle is: %d", area);

  return 0;
}

// Data Types
#include <stdio.h>

int main() {
  // Create variables
  int myNum = 5;               // Integer (whole number)
  float myFloatNum = 5.99;     // Floating point number
  char myLetter = 'D';         // Character
  
  // Print variables
  printf("%d\n", myNum);
  printf("%f\n", myFloatNum);
  printf("%c\n", myLetter);
  return 0;
}

// The char Type
#include <stdio.h>

int main() {
  char myGrade = 'A';
  printf("%c", myGrade);
  return 0;
}

// 22
#include <stdio.h>

int main() {
  char a = 65, b = 66, c = 67;
  printf("%c\n", a);
  printf("%c\n", b);
  printf("%c", c);
  return 0;
}

// Characters Are Stored as Numbers
#include <stdio.h>

int main() {
  char myLetter = 'A';

  printf("%c\n", myLetter);  // A
  printf("%d", myLetter);    // 65
  return 0;
}

// 22
#include <stdio.h>

int main() {
  char myText[] = "Hello";
  printf("%s", myText);
  return 0;
}

// Numeric Types
#include <stdio.h>

int main() {
  int myNum = 1000;
  printf("%d", myNum);
  return 0;
}

//float
#include <stdio.h>

int main() {
  float myNum = 5.75;
  printf("%f", myNum);
  return 0;
}

// double
#include <stdio.h>

int main() {
  double myNum = 19.99;
  printf("%lf", myNum);
  return 0;
}


// Scientific Numbers
//c Data Type - Number
#include <stdio.h>

int main() {
  float f1 = 35e3;     // 35 * 10^3 = 35000
  double d1 = 12E4;    // 10 * 10^4 = 120000 
  
  printf("%f\n", f1);
  printf("%lf", d1);
  return 0;
}

// C Decimal Precision
#include <stdio.h>

int main() {
  float myFloatNum = 3.5;
  double myDoubleNum = 19.99;
  
  printf("%f\n", myFloatNum);  // output 3.500000
  printf("%lf", myDoubleNum);  // output 19.990000
  return 0;
}

// 26
#include <stdio.h>

int main() {
  float myFloatNum = 3.5;

  printf("%f\n", myFloatNum); // Default will show 6 digits after the decimal point
  printf("%.1f\n", myFloatNum); // Only show 1 digit
  printf("%.2f\n", myFloatNum); // Only show 2 digits
  printf("%.4f", myFloatNum);   // Only show 4 digits
  return 0;
}

// Visualize Decimal Precision
float myNum = 3.14159;

printf("%.2f", myNum);     // output = 3.14

// C The sizeof Operator
#include <stdio.h>

int main() {
  int myInt;
  float myFloat;
  double myDouble;
  char myChar;
 
  printf("%zu\n", sizeof(myInt));      // output = 4
  printf("%zu\n", sizeof(myFloat));    // output = 4
  printf("%zu\n", sizeof(myDouble));   // output = 8
  printf("%zu\n", sizeof(myChar));     // output = 1
  
  return 0;
}

// C Data Types Examples
#include <stdio.h>

int main() {
  // Create variables of different data types
  int items = 50;
  float cost_per_item = 9.99;
  float total_cost = items * cost_per_item;
  char currency = '$';

  // Print variables
  printf("Number of items: %d\n", items);
  printf("Cost per item: %.2f %c\n", cost_per_item, currency);
  printf("Total cost = %.2f %c\n", total_cost, currency);

  return 0;
}

// C Extended Types
#include <stdio.h>

int main() {
  int normalInt = 1000;     // standard int 
  double normalDouble = 3.14;    // standard double

  short int small = -100;   // smaller int
  unsigned int count = 25;    // only positive int
  long int big = 1234567890;  // larger int
  long long int veryBig = 9223372036854775807;    // very large int
  unsigned long long int huge = 18446744073709551615U;  // very large, only positive
  long double precise = 3.141592653589793238L;    // extended precision

  printf("Normal int: %d\n", normalInt);
  printf("Normal double: %lf\n", normalDouble);
  printf("Small: %hd\n", small);
  printf("Count: %u\n", count);
  printf("Big: %ld\n", big);
  printf("Very Big: %lld\n", veryBig);
  printf("Huge: %llu\n", huge);
  printf("Precise: %.18Lf\n", precise);

  return 0;
}

// C Type Conversion
#include <stdio.h>

int main() {
  int x = 5;
  int y = 2;
  int result = x / y;

  printf("%d", result);   // Outputs 2
  return 0;
}

// Implicit Conversion
#include <stdio.h>

int main() {
  // Automatic conversion: int to float
  float myFloat = 9;

  printf("%f", myFloat);   // 9.000000
  return 0;
}

// 28
#include <stdio.h>

int main() {
  // Automatic conversion: float to int
  int myInt = 9.99;

  printf("%d", myInt);  // 9
  return 0;
}

// 29
#include <stdio.h>

int main() {
  float result = 5 / 2;

  printf("%f", result);  // 2.000000
  return 0;
}

// Explicit Conversion
#include <stdio.h>

int main() {
  // Manual conversion: int to float
  float result = (float) 5 / 2;

  printf("%f", result);   // 2.500000
  return 0;
}

//30
#include <stdio.h>

int main() {
  int num1 = 5;
  int num2 = 2;
  float result = (float) num1 / num2;

  printf("%f", result);  // 2.50000
  return 0;
}

// 31
#include <stdio.h>

int main() {
  int num1 = 5;
  int num2 = 2;
  float result = (float) num1 / num2;

  printf("%.1f", result);    // 2.5
  return 0;
}

// C Constants
#include <stdio.h>

int main() {
  const int minutesPerHour = 60;
  const int monthsInYear = 12;

  printf("%d\n", minutesPerHour);
  printf("%d\n", monthsInYear);
  return 0;
}

// C Operators
#include <stdio.h>

int main() {
  int myNum = 100 + 50;
  printf("%d", myNum);  //150
  return 0;
}

// 32
#include <stdio.h>

int main() {
  int sum1 = 100 + 50;        // 150 (100 + 50)
  int sum2 = sum1 + 250;      // 400 (150 + 250)
  int sum3 = sum2 + sum2;     // 800 (400 + 400)
  printf("%d\n", sum1);
  printf("%d\n", sum2);
  printf("%d\n", sum3);
  return 0;
}

// C Arithmetic Operators
#include <stdio.h>

int main() {
  int x = 10;
  int y = 3;

  printf("%d\n", x + y); // 13
  printf("%d\n", x - y); // 7
  printf("%d\n", x * y); // 30
  printf("%d\n", x / y); // 3
  printf("%d\n", x % y); // 1

  int z = 5;
  ++z;
  printf("%d\n", z); // 6
  --z;
  printf("%d\n", z); // 5

  return 0;
}

// 33
#include <stdio.h>

int main() {
  int a = 10;
  int b = 3;
  printf("%d\n", a / b);   // Integer division, result is 3

  double c = 10.0;
  double d = 3.0;
  printf("%f\n", c / d);   // Decimal division, result is 3.333...

  return 0;
}

// Incrementing and Decrementing
#include <stdio.h>

int main() {
  int x = 5;

  ++x; // Increment x by 1
  printf("%d\n", x); // 6

  return 0;
}

// 34
#include <stdio.h>

int main() {
  int x = 5;

  --x; // Decrement x by 1
  printf("%d\n", x); // 4

  return 0;
}

// 35
#include <stdio.h>

int main() {
  int x = 5;

  ++x; // Increment x by 1 (x becomes 6)
  --x; // Decrement x by 1 (x becomes 5 again)

  printf("%d\n", x); // 5

  return 0;
}

//Prefix and Postfix
#include <stdio.h>

int main() {
  int x = 5;
  int y = ++x;  // x is increased first, then y gets 6
  printf("x = %d, y = %d\n", x, y);  // x = 6, y = 6

  int a = 5;
  int b = a++;  // b gets 5 first, then a is increased
  printf("a = %d, b = %d\n", a, b);  // a = 6, b = 5
  return 0;
}

//C Assignment Operators
#include <stdio.h>

int main() {
  int x = 10;
  x += 5;
  printf("%d", x);
  return 0;
}

// 36
#include <stdio.h>

int main() {
  int savings = 100; 
  savings += 50; // add 50 to savings

  printf("Total savings: %d\n", savings);

  return 0;
}

// C Comparison Operators
#include <stdio.h>

int main() {
  int x = 5;
  int y = 3;
  printf("%d", x > y); // returns 1 (true) because 5 is greater than 3
  return 0;
}

// 37
#include <stdio.h>

int main() {
  int age = 18;

  printf("%d\n", age >= 18); // 1 (true), old enough to vote
  printf("%d\n", age < 18);  // 0 (false)

  return 0;
}

// 38
#include <stdio.h>

int main() {
  int passwordLength = 5;

  printf("%d\n", passwordLength >= 8); // 0 (false), too short
  printf("%d\n", passwordLength < 8);  // 1 (true), needs more characters

  return 0;
}

// 39
#include <stdio.h>

int main() {
  int isLoggedIn = 1;
  int isAdmin = 0;

  printf("Regular user: %d\n", isLoggedIn && !isAdmin);  // Regular user: 1
  printf("Has access: %d\n", isLoggedIn || isAdmin);  // Has access: 1
  printf("Not logged in: %d\n", !isLoggedIn);  // Not logged in: 0

  return 0;
}

// C Operator Precedence
#include <stdio.h>

int main() {
  int result1 = 2 + 3 * 4;     // 2 + 12 = 14
  int result2 = (2 + 3) * 4;   // 5 * 4 = 20

  printf("%d\n", result1);
  printf("%d\n", result2);

  return 0;
}

// C Booleans
#include <stdio.h>
#include <stdbool.h>  // Import the boolean header file 

int main() {
  bool isProgrammingFun = true;
  bool isFishTasty = false;
  printf("%d\n", isProgrammingFun);  // Returns 1 (true)
  printf("%d", isFishTasty);         // Returns 0 (false)
  
  return 0;
}

// 40
#include <stdio.h>

int main() {
  printf("%d\n", 10 == 10); // Returns 1 (true), because 10 is equal to 10
  printf("%d\n", 10 == 15); // Returns 0 (false), because 10 is not equal to 15
  printf("%d", 5 == 55); // Returns 0 (false) because 5 is not equal to 55
  
  return 0;
}

// C If ... Else
#include <stdio.h>

int main() {
  if (20 > 18) {
    printf("20 is greater than 18");  // 20 is greater than 18
  }
  
  return 0;
}

// 41
#include <stdio.h>

int main() {
  int time = 20;
  
  if (time < 18) {
    printf("Good day.");
  } else {
    printf("Good evening.");    // output = Good evening.
  }
  
  return 0;
}

// 43
#include <stdio.h>
#include <stdbool.h>

int main() {
  int time = 20;

  bool isDay = time < 18;

  if (isDay) {
    printf("Good day.");
  } else {
    printf("Good evening.");  // Good evening
  }
  
  return 0;
}

