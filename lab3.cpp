#include<iostream>
using namespace std;

int main(){
//	-------------------------------------------------------------------------------
	/*
	1- Write a program that determines if the integer value stored in
       x even or odd.
	*/
//	--------------------------------------------------------------------------------
	/* this even and odd
	int num ;
	cout<< "please entre number";
	cin >> num;
	if(num%2==0)
		cout<<"this is even";
	 else 
		cout<<"this is odd";
//		=============================================================================
	*/
	
	
	/*
	2. Write a program that inputs three integers from the keyboard and prints the sum, average, product, smallest and largest
	   of these numbers.
	*/
	
//	int num1,num2,num3;
//	double sum, average, product;
//	int smallest,largest; 
//	cout<< "please enter three number\n";
//	cin>>num1>>num2>>num3;
//	sum= num1+num2+num3;
//	average = sum/3;
//	product = num1*num2*num3;
//	
////	the largest number algorthem
//	if(num1 > num2&& num1 > num3){
//		largest= num1;
//	}
//
//	else if (num2 > num1 && num2> num3 ){
//		largest= num2;
//	}
//    else{
//    	largest= num3;
//	}
////	the smullest number 
//	if(num1 < num2&& num1 < num3){
//		smallest = num1;	
//	}
//
//	else if ( num2 < num1&& num2 < num3){
//	    smallest = num2;
//
//	}
//    else{
//    	smallest = num3;
//	}
////	print variable
//    cout<< "\n sum = "<< sum;
//	cout<< "\n average = "<< average;
//	cout<< "\n product = "<< product;
//	cout<< "\n the largest number = "<<largest;
//	cout<< "\n the smallest number = "<< smallest;
// ====================================================================================
/*
    3. Write a C++ program that prompts the user to input a number.
    The program should then output this number and a message saying whether it is positive, negative, or zero. using if else
*/
//    int x =0;
//    cout<<"please enter a number"<< endl;
//    cin>>x;
//    if(x>0)
//    cout<<"this number is positive number = "<< x;
//    else if (x<0)
//    cout<<"this number is negative number = "<<x;
//    else
//    cout<<"this number = zero";
//    ========================================================================================
/*
     4. Write a C++ program that ask the user to enter an alphabet then it checks whether this alphabet is vowel or not
*/
//     char alphabet;
//     cout<<"please enter alphabet"<<endl;
//     cin>>alphabet;
//     if(alphabet == 'A'||alphabet =='a'||alphabet =='o'||alphabet =='O'||alphabet =='E'||alphabet =='e'||alphabet =='I'||alphabet =='i')
//     cout<<"this alphabet is vowel";
//     else 
//     cout<<"this alphabet is not vowel";
//     ==========================================
/*
     5.Write a c++ program that ask the user to enter his score then it prints his grade respecting the following table.
     grade           Score
     Excellent      >= 85
     very good      <85 and >=75
     good           <75 and >=65
     pass           <65 and >=50
     fail           <50 and >=0
    invalid score   Otherwise
*/
//    int Score;
//    cout<<"please enter you scire"<<endl;
//    cin>>Score;
//    if(Score>= 85)
//    cout<<"your grade is Excellent your Score = "<<Score<<endl;
//    else if (Score<85 && Score >=75)
//	cout<<"your grade is very good your Score = "<<Score<<endl;
//    else if (Score<75 && Score >=65)
//	cout<<"your grade is good your Score = "<<Score<<endl;
//	else if (Score<65 && Score >=50)
//	cout<<"your grade is pass your Score = "<<Score<<endl;
//	else if (Score<50 && Score >=0)
//	cout<<"your grade is fail your Score = "<<Score<<endl;
//	else
//	cout<<"invalid score = "<<Score<<endl;
//  =============================================================
/*
    6- Write a C++ program that ask the user to enter an alphabet then it checks whether this alphabet is vowel or not. using switch.
*/
//char alphabet;
//cout<<"enter your latter"<<endl;
//cin>>alphabet;
//switch(alphabet){
//	case 'A':
//	cout<<"this alphabet is vowel";
//	break;	
//	case 'a':
//	cout<<"this alphabet is vowel";
//	break;
//	case 'E':
//	cout<<"this alphabet is vowel";
//	break;
//		case 'e':
//	cout<<"this alphabet is vowel";
//	break;
//		case 'O':
//	cout<<"this alphabet is vowel";
//	break;
//		case 'o':
//	cout<<"this alphabet is vowel";
//	break;
//		case 'I':
//	cout<<"this alphabet is vowel";
//	break;
//		case 'i':
//	cout<<"this alphabet is vowel";
//	break;
//	default:
//    cout<<"this alphabet is not vowel";
//    break;
//
//	
//}
//switch(alphabet){
//	case 'A':
//	case 'a':
//	case 'E':
//	case 'e':
//    case 'O':
//	case 'o':
//	case 'I':
//	case 'i':
//	cout<<"this alphabet is vowel";
//	break;
//	default:
//    cout<<"this alphabet is not vowel";
//    break;
//}
//   =========================================================
//   ex calculte
//int num1,num2,result;
//char op;
//cout<< "please enter two number "<<endl;
//cin >>num1;
//cin>>num2;
//cout<<"please enter oprations"<<endl;
//cin>>op;
//switch(op){
//	case '+':
//		result = num1 + num2;
//		cout<<"the result is = "<<result;
//		break;
//	case '-':
//		result = num1 - num2;
//		cout<<"the result is = "<<result;
//		break;
//	case '*':
//		result = num1 * num2;
//		cout<<"the result is = "<<result;
//		break;
//	case '/':
//		if(num2 == 0)
//	    cout<<"cannot divide by zero";
//	    break;
//		result = num1 / num2;
//		cout<<"the result is = "<<result;
//		break;
//}
//     =====================================================================
/*
      	Write a C++ program that prompts the user to input a number.
	   The program should then output this number and a message saying whether it is even or odd. 
*/
int x,y;
cout<<"please enter your number" <<endl;
cin>>x;
y = x%2;
switch(y){
	case 0:
		cout<<"this number is even number = "<<x;
		break;
	default:
		cout<<"this number is odd number = "<<x;
		break;

}
	return 0;
}
