//
//  main.cpp
//  ComplexNumberClass
//
//  Created by Nazar Rogozhuk on 08.04.2020.
//  Copyright © 2020 Nazar Rogozhuk. All rights reserved.
//

#include <iostream>
#include "ComplexNumber.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    ComplexNumber firstNumber = ComplexNumber(2.0, 3.0);
    ComplexNumber secondNumber;

    cout << "Enter complex number (real, imagination):" << endl;
    cin >> secondNumber;
    cout << "firstNumber is: " << firstNumber.toString() << endl << "secondNumber is: " << secondNumber.toString() << endl << endl;

    ComplexNumber addition = (firstNumber + secondNumber);
    ComplexNumber difference = (firstNumber - secondNumber);
    ComplexNumber multiplication = (firstNumber * secondNumber);

    cout << "Addition: " << addition << endl;
    cout << "Difference: " << difference << endl;
    cout << "Multiplication: " << multiplication << endl;
    
    cout << endl;
    return 0;
}
