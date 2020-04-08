//
//  ComplexNumber.cpp
//  ComplexNumberClass
//
//  Created by Nazar Rogozhuk on 08.04.2020.
//  Copyright © 2020 Nazar Rogozhuk. All rights reserved.
//

#include "ComplexNumber.hpp"

ComplexNumber::ComplexNumber(double realValue, double imaginationValue) {
    this->real = realValue;
    this->imagination = imaginationValue;
}

double ComplexNumber::getReal() {
    return this->real;
}

void ComplexNumber::setReal(double realValue) {
    this->real = realValue;
}

double ComplexNumber::getImagination() {
    return this->imagination;
}

void ComplexNumber::setImagination(double imaginationValue) {
    this->imagination = imaginationValue;
}

string ComplexNumber::toString() {
    ostringstream stringStream;
    
    stringStream << this->getReal();
    
    if (this->getImagination() != 0) {
        string sign = this->getImagination() < 0 ? "-" : "+";
        stringStream << " " << sign << " " << abs(this->getImagination()) << "i";
    }
    
    return stringStream.str();
}

istream &operator>>(istream &input, ComplexNumber &b) {
    double realValue, imaginationValue;
    input >> realValue >> imaginationValue;
    b.setReal(realValue);
    b.setImagination(imaginationValue);
    return input;
}

ostream &operator<<(ostream &output, ComplexNumber &b) {
    output << b.toString();
    return output;
}

ComplexNumber operator+(ComplexNumber a, ComplexNumber b) {
    return ComplexNumber(a.getReal() + b.getReal(), a.getImagination() + b.getImagination());
}

ComplexNumber operator+(ComplexNumber a, double b) {
    return ComplexNumber(a.getReal() + b, a.getImagination());
}

ComplexNumber operator+(double a, ComplexNumber b) {
    return ComplexNumber(a + b.getReal(), b.getImagination());
}

ComplexNumber operator-(ComplexNumber a, ComplexNumber b) {
    return ComplexNumber(a.getReal() - b.getReal(), a.getImagination() - b.getImagination());
}

ComplexNumber operator-(ComplexNumber a, double b) {
    return ComplexNumber(a.getReal() - b, a.getImagination());
}

ComplexNumber operator-(double a, ComplexNumber b) {
    return ComplexNumber(a - b.getReal(), b.getImagination());;
}

ComplexNumber operator*(ComplexNumber a, ComplexNumber b) {
    double realValue = a.getReal() * b.getReal() - a.getImagination() * b.getImagination();
    double imaginationValue = a.getReal() * b.getImagination() - a.getImagination() * b.getReal();
    return ComplexNumber(realValue, imaginationValue);
}

ComplexNumber operator*(ComplexNumber a, double b) {
    double realValue = a.getReal() * b;
    double imaginationValue = a.getImagination() * b;
    return ComplexNumber(realValue, imaginationValue);
}

ComplexNumber operator*(double a, ComplexNumber b) {
    double realValue = a * b.getReal();
    double imaginationValue = a * b.getImagination();
    return ComplexNumber(realValue, imaginationValue);
}
