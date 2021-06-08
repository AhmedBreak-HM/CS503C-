#include<iostream>
using namespace std;

int main(){
	
//	Write a program in C++ to find the first 10 numbers.
//  ---------------------------------------------------- 
//	for(int i=1;i<=10;i++){
//		cout<<i<<endl;
//	}
//======================================================
//  Write a program in C++ to find the sum of first 10 numbers. 
//  -------------------------------------------------------------
//    int sum = 0;
//    for(int i=1;i<=10;i++){
//		sum += i;
//	}
//	cout<<sum<<endl;
//   using while
//   ------------------
//    int i = 1;
//    int sum =0;
//    while(i<=10){
//    	sum +=i;
//    	cout<<i++<<endl;
//    }
//    cout<<sum;
//    using do while
//   ------------------
//      do{
//      	sum +=i;
//    	cout<<i++<<endl;
//	  }while(i<=10);
//	  cout<<sum;

//  ===========================================================
//  Write a program in C++ to find the product of first 10 numbers. 
//  --------------------------------------------------------------
//    int prod=1;
//    for(int i = 1;i<=10;i++){
//    	prod *=i; 
//	}
//	cout<<prod;
//  ==============================================================
//  Write a program in C++ to display n terms of natural number and their sum.
//  --------------------------------------------------------------------------
//    int sum = 0;
//    for(int i = 1;i<=7;i++){
//    	sum +=i;
//    	cout<<i<<endl;
//	}
//	cout<<sum;
//  ===========================================
//  Write a C++ Program to find factorial of a number. 
//    Note: Factorial on n = 1*2*3*...*n
//    Sample output
//    Enter a positive integer: 5
//    Factorial of 5= 120
//    -----------------------------------------------------
//    int i,n,factorial =1;
//    cout<<"please enter your number"<<endl;
//    cin>>n;
//    for(i=1;i<=n;i++){
//    	factorial *=i;
//	}
//	cout<< "Factorial of "<<n<<" = "<<factorial;
//  ==============================================================
//  Write a program in C++ to calculate the power of a number. 
//	Sample Output:
//	Input a number: 5
//	Input a power: 3
//	5 to the power 3= 125
//  -------------------------------------------
//    int num,power,result=1;
//    cout<<"please enter intger"<<endl;
//    cin>>num;
//    cout<<"please enter power"<<endl;
//    cin>>power;
//    for(int i =1;i<=power;i++){
//    	result *=num;
//	}
//	cout <<"number : " << num<< " to the power: " << power << " = "<< result<< endl;
//  -----------------------------------------------------------------------------------
//	Write a program in C++ to find the Greatest Common Divisor (GCD) of a number.
//	Sample Output:
//	Input a number: 15
//	The Greatest Common Divisor is: 5
//  ----------------------------------
//   int num,gcd;
//   cout<<"please enter your number"<<endl;
//   cin>>num;
//   for(int i =1;i<num;i++){
//   	if(num%i==0){
//   		gcd=i;
//	   }
//   }
//   cout<<"the Greatest Common Divisor (GCD) of a number = "<<gcd;
//   =============================================================================

//	Write a c++ program that takes a number from a user and check whether it is a perfect number or not.
//	Sample Output:
//	please enter a number: 6                           
//	6 is a perfect number
//	
//	Do you want to check another number (y/n)? y
//	please enter a number: 8                           
//	8 is a not perfect number
//	
//	Do you want to check another number (y/n)  n
//  ------------------------------------------------
//    int i,num,sum;
//    char ch;
//    do{
//    	cout<<"please enter your number"<<endl;
//    	cin>>num;
//    	while(i<num){
//    		if(num%i==0){
//    			sum +=i;
//			}
//		}
//		if (sum == num) 
//		cout <<"\n" << num << "  is a prefect number" << "\n";
//		else
//		cout <<"\n" << num << "  is a not prefect number" << "\n";
//		cout<<  "Do you want to check another number (y/n)?\n";
//        cin>> ch;
//	}while(ch=='Y'||ch=='y');
//  ====================================================================
//	Write a program to print all the even numbers from 1 to 20 using for loop.
//	Sample Output:                          
//	the even numbers from 1 to 10 is:                              
//	 2 4 6 8 10
//   ---------------------------------------------------------------
//     int num;
//     cout<<"please enter your number \n";
//     cout<<"---------------------------"<<endl;
//	 cin>>num; 
//	 cout<<"---------------------------"<<endl;
//     for(int i=1;i<=num;i++){
//     	if(i%2==0)
//     	cout<<i<<endl;
//	 }
//   =======================================
//		Write a program to print all the odd numbers from 1 to 100 using for loop.
//		Sample Output:                          
//		 the odd numbers from 1 to 10 is:                              
//		1 3 5 7 9 
//   ------------------------------------
//     int num;
//     cout<<"please enter your number \n";
//     cout<<"---------------------------"<<endl;
//	 cin>>num; 
//	 cout<<"---------------------------"<<endl;
//     for(int i=1;i<=num;i++){
//     	if(i%2!=0)
//     	cout<<i<<endl;
//	 }
//   ==================================================
//	Write a program in C++ to find the first and last digit of a number.
//	Sample Output:
//	 Find the first and last digit of a number:                            
//	-----------------------------------------------                        
//	 Input any number: 5679                                              
//	 The first digit of 5679 is: 5                                         
//	 The last digit of 5679 is: 9 

//   int n,first,last;
//    cout << "\n\n Find the first and last digit of a number:\n";
//    cout << "-----------------------------------------------\n";
//    cout << " Input any number: ";
//    cin >> n;
//    first = n;
//    last=n % 10;
//    for(first=n;first>=10;first=first/10);
//    cout<<" The first digit of "<<n<<" is: "<<first<<endl;
//    cout<<" The last digit of "<<n<<" is: "<<last<<endl;
//    ==================================================
//		                      Nested Loops
//	                         *************	                      
//		Write a program in C++ to display the pattern like right angle triangle with number.
//		Sample Output:
//		Input number of rows: 5 
//		1
//		12 
//		123 
//		1234 
//		12345
//      -----------------------------------------------
//   int i,j,rows;
//   cout << " Input number of rows: ";
//   cin >> rows;
//   for(i=1;i<=rows;i++)
//   {
//        for(j=1;j<=i;j++)
//           cout<<j;
//        cout<<endl;
//   } 
//   =============================================   

//	Write a program in C++ to make such a pattern like right angle triangle using number which will repeat the number for that row.
//	Sample Output:
//	  Input number of rows: 5                                                                                      
//	1                                                                                                             
//	22                                                                                                      
//	333                                                                                                         
//	4444                                                                                                         
//	55555
//  ---------------------------------------------
//   int i,j,rows;
//   cout << " Input number of rows: ";
//   cin >> rows;
//   for(i=1;i<=rows;i++)
//   {
//        for(j=1;j<=i;j++)
//           cout<<i;
//        cout<<endl;
//   } 
//   ==============================================
//	Write a program in C++ to find the sum and average of the even numbers between two numbers  
//	Sample Output:                              
//	Enter two numbers 5 10
//	Sum of even numbers 24	the average 8
int num1,num2;
int sum=0,count =0,avg;
cout<<"please enter frist number \n";
cin >>num1;
cout<<"please enter sconde number \n";
cin >>num2;
cout<<"--------------------\n";
for(int i =num1;i<=num2;i++){
	if(i%2==0){
		sum +=i;
		cout<<i<<"\n";
		count ++;
	}
}
	avg= sum/count;
	cout<<"==========================\n";
	cout<<"Sum of even numbers "<<sum<<" the average "<< avg<<" Count of even numbers "<<count;



   
//  +++++++++++++++++++++++++++++
 return 0;
}
