# this is a ©️ codes and projects repo
***
![alt text](https://techworm.net/programming/wp-content/uploads/2018/09/c-programming-1.png)
***
## This is my roadmap for learning C.
***
1. **Syntax and source file parsing**
###### This is what a C source file looks like.
```C
#include <stdio.h> 

int main()
{
  // comment
  return 0;
}
```
***
2. **Variables and data types**
###### Variable types and properties in ```byte```.
```C
// Integer
short int Var = NULL;           // bytes(2)
unsigned short int = NULL;      // bytes(2)
unsigned int = NULL;            // bytes(4)
int = NULL;                     // bytes(4)
long int = NULL;                // bytes(4)
unsigned long int = NULL;       // bytes(4)
long long int = NULL;           // bytes(8)
unsigned long long int = NULL;  // bytes(8)
```
```C
// character
signed char = NULL;             // byte(1)
unsigned char = NULL;           // byte(1)
```
```C
// Float                        
float = NULL;                   // bytes(4)
double = NULL;                  // bytes(8)
long double = NULL;             // bytes(16)
```
***
3. **Arithmetic operators**
###### Extensive arithmetic operators
```C
int x = 2;
int y = 10;

float Result;

Result = y + x;
Result = y - x;
Result = y / x;
Result = y * x;
Result = y % x;
```
***
4. **Short form of arithmetic operators**
###### Abbreviated forms of arithmetic operators.
```C
int Result = 10;

Result += 2; // Result = Result + 2;
Result -= 2; // Result = Result - 2;
Result /= 2; // Result = Result / 2;
Result *= 2; // Result = Result * 2;
```
* The value of ```Result``` is used first, and then ```Result``` is incremented.
* The increment happens after the expression has been evaluated.
```C
// post-increment
Result++ // Result = Result + 1;
Result-- // Result = Result - 1;
```
* The value of ```Result``` is incremented first, and then the new value is used.
* The increment happens before the expression is evaluated.
```C
// pre-increment
++Result // Result = Result + 1;
--Result // Result = Result - 1;
```

