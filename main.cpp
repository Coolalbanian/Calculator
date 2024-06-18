//
//  main.cpp
//  magic 8 ball
//
//  Created by Alban Reci on 6/17/24.
//

#include <iostream>
#include "calculator.h"

int main()
{
    
    //get first number from user
    int value{ getuserinput()};
    // get mathematical operation from user
    int operation{getoperation()};
    // get second number from user
    int value2{ getuserinput2()};
    // calculate result
    int results{ getresults(value, operation, value2)};
    //print result
    std::cout << "Your number is: " << results << '\n';
    
    return 0;

}
