//
//  ComplexNumber.hpp
//  ComplexNumberClass
//
//  Created by Nazar Rogozhuk on 08.04.2020.
//  Copyright © 2020 Nazar Rogozhuk. All rights reserved.
//

#ifndef ComplexNumber_hpp
#define ComplexNumber_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include <sstream>
#include <cmath>

using namespace std;

class ComplexNumber {
private:
    double real, imagination;
public:
    explicit ComplexNumber(double realValue = 0, double imaginationValue = 0);
    
    double getReal();
    
    void setReal(double realValue);
    
    double getImagination();
    
    void setImagination(double imaginationValue);
    
    string toString();
    
    friend istream &operator>>(istream &input, ComplexNumber &b);
    
    friend ostream &operator<<(ostream &output, ComplexNumber &b);
    
    friend ComplexNumber operator+(ComplexNumber a, ComplexNumber b);
    
    friend ComplexNumber operator+(ComplexNumber a, double b);
    
    friend ComplexNumber operator+(double a, ComplexNumber b);
    
    friend ComplexNumber operator-(ComplexNumber a, ComplexNumber b);
    
    friend ComplexNumber operator-(ComplexNumber a, double b);
    
    friend ComplexNumber operator-(double a, ComplexNumber b);
    
    friend ComplexNumber operator*(ComplexNumber a, ComplexNumber b);
    
    friend ComplexNumber operator*(ComplexNumber a, double b);
    
    friend ComplexNumber operator*(double a, ComplexNumber b);
};

#endif /* ComplexNumber_hpp */
