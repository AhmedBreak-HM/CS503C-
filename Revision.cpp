#include <iostream>
using namespace std;
int ged(int m, int n)
{
    if (n == 0)
        return m;
    else
        return ged(n, m % n);
}
void tryMe(int &v)
{
    static int num = 2;
    if (v % 2 == 0)
    {
        num++;
        v = v + 3;
    }
    else
    {
        num--;
        v = v + 5;
    }
    cout << v << ", " << num << endl;
}
void myfunction(int x)
{
    if (x > 10)
    {
        myfunction(x / 10);
        cout << x % 10 << endl;
    }
    else
        cout << x << endl;
}
int main()
{
    int row = 5, col = 4,i,j;
    int arr[row][col] = {{1, 1, 1, 1}, {2, 2, 2, 2}, {3, 3, 3, 3}, {4, 4, 4, 4}, {5, 5, 5, 5}};
    for ( i = 0; i <= row; i++)
    {
        for ( j = 0; j <= col; j++)
        {
            cout << arr[i][col];
        }
        cout << endl;
    }

    // double salary[5] = {25000, 36500, 85000, 62500, 97000};
    // double rate = 0.03;
    // for (int i = 0; i < 5; i++)
    //     cout << (i + 1) << " " << salary[i] << " " << salary[i] * rate << endl;
    // myfunction(7);
    // myfunction(36);
    // cout << ged(4, 8);
    // cout << (4 % 8);
    // int i, j;
    // j = 0;
    // for (i = 5; i <= 8; i++)
    //     j = j + i;
    // cout << j;
    // int x = 8;
    // for (int count = 1; count < 5; count++)
    // {
    //     tryMe(x);
    //     cout << count << endl;
    // }
    return 0;
}

// int count = 0, num;
// double sum = 0;
// while (count < 20)
// {
//     cin >> num;
//     sum = sum + num;
//     count++;
//     cout << sum << " ";
// }
// int j = 0;
// while (j <= 10){
//     cout<<j<<" ";
//     j++;
//     }
// int num = 1;
// while (num < 10)
// {
//     cout << num << " ";
//     num = num + 2;
// }
// cout << endl;
// int x, y, z;
// x = 4;
// y = 5;
// z = y + 6;
// while (((z - x) % 4) != 0)
// {
//     cout << z << " ";
//     z = z + 7;
// }
// cout << endl;
// int num;
// cout <<"enter a num";
// cin >> num;
// while (num != -999)
// {
//     cout << num % 25 << " ";
//     cin >> num;
// }
// cout << endl;
// int count = 1;
// int y = 100;
// while (count < 100)
// {
//     y = y - 1;
//     count++;
// }
// cout<<"y ="<<y<<"and count ="<<count<<endl;
// int i,j;
//  for( i = 5;i>=5;i--){
//      for( j=5;j>=i;j--)
//      cout<<"^";
//      cout<<endl;
//  }

// int num,fact;
// while (1)
// {
//     cout << "Enter the positive number\n";
//     cin >> num;
//     if (num < 0)
//     {
//         cout << "This is a negative number! \n";
//         continue;
//     } //exit the current iteration
//     if (num == 0)
//     {
//         cout << "This’s zero!The program’ll terminate now!!\n";
//         break;
//     } //exit while
//     for (int fact = 1; num > 0; num--)
//         fact *= num; //fact=fact* num
//     cout << "The factorial of this number is: " << fact << endl;
//     break;
// } //end while
// cout << "*******************" << endl;

// int i = 0;
// do
// {
//     cout << "from loop";
//     i++;

// } while (i <= 3);
// for (int i = 1;; i++)
//     cout << i << " ";
// cout << endl;

// for (int i = 10; i <= 10; i++)
//     cout << i << " ";
// cout << endl;
// for (;;)
//     cout << "Hello" << endl;
// for (int i = 0; i < 5; i++)
//     ; // semantic error.
// cout << "*" << endl;
// for (int i = 1; i <= 5; i++)
// // {
//     cout << "Hello!" << endl;
//     cout << "*" << endl;
// // }

// for (int i = 0; i < 10; i++)
// {
//     cout << i <<"\t";
// }
// int counter = 0, limit=3, number;
// double sum = 0.0, avg = 0.0;
// cout << "please enter limite\n";
// cin >> limit;
// cout << "limit is == " << limit;

// while (counter < limit)
// {
//     cout << "please enter number\n";
//     cin >> number;
//     sum += number;
//     counter++;
// }
// avg = sum / counter;
// cout << "The sum of the " << limit << " numbers= " << sum << endl; //note printing string vs variable

// cout << "The average = " << avg << endl;

// int i = 20;           //wrong initialization
// while (i < 20)        //initially the loop entry condition evaluates to false
// {                     //the body of the while loop will never execute
//     cout << i << " "; //there won’t be any output
//     i = i + 5;        //the value of i remains 20
// }
// cout << "* *********"<< endl;

// int score;
// char grade;
// cout << "Enter your score \n ";
// cin >> score;

// switch (score / 10)
// {
// case 0:
// case 1:
// case 2:
// case 3:
// case 4:
// case 5:
//     grade = 'F';
//     break; //the first break!
// case 6:
//     grade = 'D';
//     break;
// case 7:
//     grade = 'C';
//     break;
// case 8:
//     grade = 'B';
//     break;
// case 9: //there is no break!
// case 10:
//     grade = 'A';
//     break;
// default:
//     cout << "Invalid test score." << endl;
// }

// int gpa = 0;
// cout << "enter gpa";
// cin >> gpa;
// switch (gpa >= 60)
// {
// case true:
//     cout << "score is 60";
//     break;
// default:
//     cout << "score is == " << gpa;
// }

// int x,y;
// x = 100;
// y = 200;
// if (x > 100 && y <= 200)
//     cout << x << " " << y << " " << x + y << endl;
// else
//     cout << x << "=== " << y << " " << 2 * x - y << endl;
// double balance;
// float interestRate;
// balance = 900;
// if (balance >= 50000)
//     interestRate = 0.07;
// else
//   if (balance >= 25000.00)
//     interestRate = 0.05;
//   else
//      if (balance >= 1000.00)
//     interestRate = 0.03;
//      else
//     interestRate = 0.00;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cout << "please enter your number\n";
//     cin >> num;
//     if (num % 2 == 0)
//         cout << "this even number";
//     else
//         cout << "this is odd number";

//     return 0;
// }

// #include <iostream>
// //we didn’t write using namespace std; so we’ll repeatcout many times
// using namespace std;
// int main()
// {
//     int integer1, integer2, sum;          // declaration
//     cout << "Enter the first integer\n";  // prompt
//     cin >> integer1;                      // read an integer
//     cout << "Enter the second integer\n"; // prompt
//     cin >> integer2;                      // read an integer
//     sum = integer1 + integer2;            // assignment of sum
//     cout << "The sum is : " << sum << endl;
//     return 0;
// }