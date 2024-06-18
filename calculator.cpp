//
//  square.cpp
//  magic 8 ball
//
//  Created by Alban Reci on 6/17/24.
//

#include "calculator.h"
#include <iostream>
//full implementation of the getuserinput function
int getuserinput()
{
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;
    
    return input;
}
char getoperation()
{
    std::cout << "which operand would you like to iterate +, -, *, /" << '\n';
    char oper{};
    std::cin >> oper;
    return oper;
}
int getuserinput2()
{
    std::cout << "Enter another integer: " << '\n';
    int input2{};
    std::cin >> input2;
    
    return input2;
}
int getresults(int value, char operation, int value2)
{
    int x{};
    if(operation == '+'){
        x = value + value2;}
    if (operation == '-'){
        x = value - value2;}
    if (operation == '*'){
        x = value * value2;}
    if(operation == '/'){
        x = value / value2;}
    return x;
}

