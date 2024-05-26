#include <iostream>
using namespace std;
int main() 
{
  int num1, num2;
  char ope;

  cout << "Enter two numbers and an operator:- ";
  cin >> num1 >> num2 >> ope;

  switch (ope) 
  {
    case '+':
      cout << "Addition = " <<num1+num2<<endl;
      break;
    case '-':
      cout << "Subtraction = " <<num1-num2<<endl;
      break;
    case '*':
      cout << "Multiplication = " <<num1*num2<<endl;
      break;
    case '/':
      if (num2 == 0) 
	  {
        cout <<"Error: Division by zero"<<endl;
      } else 
	  {
        cout << "Division = " <<num1/num2<<endl;
      }
      break;
    case '%':
      cout << "Remainder = " <<num1%num2<<endl;
      break;
    default:
      cout <<"Invalid operator"<<endl;
  }
  return 0;
}

