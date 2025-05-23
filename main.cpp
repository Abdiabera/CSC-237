//
//  main.cpp
//  NumPal
//
//  Created by William Chan on 12/5/20.
//
#include <iostream>
#include "NumPal.hpp"
#include "Friend.hpp"

int main(int argc, const char * argv[]) {
    std::cout << "Numeric Palindome Class\n";
    // insert code here...

    const int MAX_NUM_PASS = 10;
    int iNumPass = 0;
    string start_value;
    
    cout << "Please enter a string (max 5 characters):  \n";
    cin >> start_value;
    cout << "\n";
    cout << "start value is " << start_value << "\n";
    
    if ( start_value.length() > 5) {
        cout << "\n";
        cout << "The string you enter exceed the max number of 5 characters.\n";
        cout << "Program Terminated\n";
        return (-1);
    }
    
    NumPal p(start_value);
    NumPal p2 = p;
    Backdoor bd;
    
    while (!p.IsNumPal() && (iNumPass < MAX_NUM_PASS)) {
        p.next();
        iNumPass++;
    }
    
    cout << "\n";
    cout << "  Using the copy constructor - p2.currentString: " << p2.getCurrentString() << " \n";
    if (p.getReverseString() == "") {
        cout << "  Implement the friend function: ReverseString = NULL.\n";
        cout << "  NumPal reverse string: NULL\n";
    }
    else {
        cout << "  Implement the friend function: ReverseString = " << bd.getReverseString(p) << " \n";
        cout << "  NumPal reverse string: " << p.getReverseString() << " \n";
    }
    
    if (iNumPass < MAX_NUM_PASS) {
        cout << "\n";
        cout << "final value: " << p.getCurrentString() << "\n\n";
        cout << p.getCurrentString() << " is a palindome. \n";
        cout << "Number of pass is " << iNumPass << ".\n";
        return 0;
    }
    else {
         cout << "Exceed the maximum number of trys.\n";
         cout << "final value: " << p.getCurrentString() << "\n\n";
         cout << "Cannot find a palindome using this process.\n";
        return (-2);
    }
}
