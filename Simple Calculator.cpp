#include <iostream>

int main(){
  double num1;
  double num2;
  char var;
  double sum;
  
  std::cout << "********** SIMPLE CALCULATOR ***********\n";
  std::cout << "select 1 sign (+, -, *, /): ";
  std::cin >> var;
  std::cout << "enter first number: ";
  std::cin >> num1;
  std::cout << "enter second number: ";
  std::cin >> num2;
  
  switch(var){
    case '+':
      sum = num1 + num2;
      std::cout << "The result is: " << sum ;
      break;
    case '-':
      sum = num1 - num2;
      std::cout << "The result is: " << sum;
      break;
    case '*':
      sum = num1 * num2;
      std::cout << "The result is: " << sum;
      break;
    case '/':
      sum = num1 / num2;
      std::cout << "The result is: " << sum;
      break;
    default:
      std::cout << "you didn't put right sign!";
  };
  
  return 0;
}
