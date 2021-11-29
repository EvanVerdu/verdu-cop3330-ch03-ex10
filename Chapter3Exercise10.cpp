#include "iostream"

/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Evan Verdu
 */


/*
Write a program that takes an operation followed by two operands and
outputs the result. For example:
+ 100 3.14
• 4 5
Read the operation into a string called operation and use an if-statement
to figure out which operation the user wants, for example, if (opera·
tion=="+"). Read the operands into variables of type double. Implement
this for operations called +, -, *, /, plus, minus, mul, and div with their
obvious meanings. 
*/

int main() {
    
  std::string operation;
  double operand1, operand2;
  double solution;

  std::cout << "Enter an operation (Operator Operand1 Operand2, format): ";
  std::cin >> operation;
  std::cin >> operand1;
  std::cin >> operand2;   

  if (operation == "+"){
    solution = operand1+operand2;
    std::cout << operand1 << " + " << operand2 << " = " << solution;
    return 0;
  }
  else if(operation == "-") {
      solution = operand1-operand2;
      std::cout << operand1 << " - " << operand2 << " = " << solution;
      return 0;
  }
  else if(operation == "*") {
      solution = operand1*operand2;
      std::cout << operand1 << " * " << operand2 << " = " << solution;
      return 0;
  }
  else if(operation == "/") {
      solution = operand1/operand2;
      std::cout << operand1 << " / " << operand2 << " = " << solution;
      return 0;
  }
  else {
      std::cout << "Not a valid operation";
      return 0;
  }



}