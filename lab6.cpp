#include <iostream>
#include <math.h>

using namespace std;

void printHelloWorld()
{
    cout << "hello world";
}

void printString(string msg)
{
    cout << msg << endl;
}

int sum();
void sum(int a, int b);
int sumWithReturn(int a, int b);
int power(int base);
int power(int base, int power);
int factorial(int number);
int foo(int a, int b);
int MaxValue(int num1, int num2, int num3);
int MinValue(int num1, int num2, int num3);
int main()
{
    // printHelloWorld();
    // string message;
    // cout<<"please enter your msg";
    // cin>>message;
    // printString(message);
    // cout << "the summation of the numbers = " << sum();
    // int a,b;
    // cout<<"please enter number a \n";
    // cin>>a;
    // cout<<"please enter number b \n";
    // cin>>b;
    // // sum(a,b);
    // cout << "the summation of numbers from " << a << " to " << b << " = " << sumWithReturn(a,b);
    // int number, result, powr;
    // cout << "please enter a number" << endl;
    // cin >> number;
    // cout << "please enter a power" << endl;
    // cin >> powr;
    // result = power(number, powr);
    // cout << '\n'
    //      << number << "^2=" << result;
    // int x, y;
    // cout << "enter two integer numbers: ";
    // cin >> x >> y;
    // cout << foo(x, y);

    int a, b, c;
    cout << "Enter three integer numbers:";
    cin >> a >> b >> c;
    cout << "Max=" << MaxValue(a, b, c);
    cout << "\n";
    cout << "Min=" << MinValue(a, b, c);
    cout << "\n";

    return 0;
}

// 3: No arguments passed but a return value

// Write a C++ function called “sum” that print the summation of the numbers from 1 to 10.
int sum()
{
    int sum = 0;
    for (int i = 0; i <= 10; i++)
    {
        sum += i;
    }
    return sum;
}

// 4: Arguments passed and a return value

// Write a C++ function called “sum” that takes two
// integer numbers (a, b) and print the summation of numbers from a to b.

void sum(int a, int b)
{
    int sum = 0;
    for (int i = a; i <= b; i++)
    {
        sum += i;
    }
    cout << "the summation of numbers from " << a << " to " << b << " = " << sum;
}

// Write a C++ function called “sum” that takes two integer
//  numbers (a, b) and return their summation as an integer number.
int sumWithReturn(int a, int b)
{
    int sum = 0;
    for (int i = a; i <= b; i++)
    {
        sum += i;
    }
    return sum;
}

// Write a C++ function that takes a number
//  and returns its square using the predefined function pow.
int power(int base)
{
    return pow(base, 2);
}
// Write a C++ function called power that takes a base and a power as its input.
//  The function calculates the power of the base and returns it.
int power(int base, int power)
{
    int result = 1;
    for (int i = 1; i <= power; i++)
    {
        result *= base;
    }

    return result;
}

// Write a C++ function to find the sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5.
int factorial(int number)
{
    int fact = 1;
    for (int i = 1; i <= number; i++)
        fact *= i;
    return fact;
}
int foo(int a, int b)
{
    int sum = 0;
    for (int i = a; i <= b; i++)
        sum += factorial(i) / i;
    return sum;
}
// Write a program that will ask the user to input three integer values from the keyboard.
// Then it will print the smallest and largest of those numbers.
int MaxValue(int num1, int num2, int num3)
{
    int max;
    if (num1 > num2 && num1 > num3)
        max = num1;
    else if (num2 > num1 && num2 > num3)
        max = num2;
    else
        max = num3;
    return max;
}
int MinValue(int num1, int num2, int num3)
{
    int min;
    if (num1 < num2 && num1 < num3)
        min = num1;
    else if (num2 < num1 && num2 < num3)
        min = num2;
    else
        min = num3;
    return min;
}
