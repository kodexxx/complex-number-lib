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
    string sign = this->getReal() < 0 ? "-" : "+";
    stringStream << this->getReal() << " " << sign << " " << this->getImagination() << "i";
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
    ComplexNumber result(a.getReal() + b.getReal(), a.getImagination() + b.getImagination());
    return result;
}

ComplexNumber operator+(ComplexNumber a, double b) {
    ComplexNumber result(a.getReal() + b, a.getImagination());
    return result;
}

ComplexNumber operator+(double a, ComplexNumber b) {
    ComplexNumber result(a + b.getReal(), b.getImagination());
    return result;
}

ComplexNumber operator-(ComplexNumber a, ComplexNumber b) {
    ComplexNumber result(a.getReal() - b.getReal(), a.getImagination() - b.getImagination());
    return result;
}

ComplexNumber operator-(ComplexNumber a, double b) {
    ComplexNumber result(a.getReal() - b, a.getImagination());
    return result;
}

ComplexNumber operator-(double a, ComplexNumber b) {
    ComplexNumber result(a - b.getReal(), b.getImagination());
    return result;
}

ComplexNumber operator*(ComplexNumber a, ComplexNumber b) {
    return ComplexNumber();
}

ComplexNumber operator*(ComplexNumber a, double b) {
    return ComplexNumber();
}

ComplexNumber operator*(double a, ComplexNumber b) {
    return ComplexNumber();
}
