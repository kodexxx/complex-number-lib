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
    ComplexNumber a(2, 3);
    ComplexNumber b(2, 3);
    
    cin >> a;
    cout << a;
    
    cout << endl;
    return 0;
}
