//
//  main.cpp
//  assign3.1
//
//  Created by Le Vinh Phuc on 09/11/2019.
//  Copyright © 2019 Le Vinh Phuc. All rights reserved.
//

#include <iostream>
using namespace std;

int main(void) {
    // insert code here...
    double x=10;
    
    //here we define y to be an reference for x
    double* y = &x;
    
    //here we define a pointer point to y
    double*& p=y;
    cout << "x = " << x << "; y = " << y << " *p = " << *p << endl;
    
    *p -= 5;
    
    //here we check how the value of x has changed after changing the value of y
    cout << endl;
     cout << "x = " << x << "; y = " << y << ";; *p = " << *p << endl;
    return 0;
}
