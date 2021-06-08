#include<iostream>
using namespace std;

int main(){
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
