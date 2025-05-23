//
//  NumPal.hpp
//  NumPal
//
//  Created by William Chan on 12/5/20.
//

#ifndef NumPal_hpp
#define NumPal_hpp

#include <stdio.h>
#include "Friend.hpp"
using namespace std;

class NumPal {
//what instance variables do we need: current value, reverse value and each respective String values
private:
    string curString;
    unsigned long current_value;
    
    string revString;
    unsigned long reverse_value;
    

public:
    // default constructor
    NumPal ();
    
    // user defined constructor for NumPal that takes a string and NOT a numerial value.
    // save the startValue to the current String variable
    NumPal (string startValue);

    // copy constructor
    NumPal (const NumPal &np);
    
    ~NumPal ();
    
    // this method will determine whether a string is a palindrome.
    bool IsNumPal ();
        
    // method for reverse the current string
    string reverseString (string currentString);
    
    // method trying to make the currents string to become a palindome
    void next ();

    string getCurrentString ();
    string getReverseString ();
    friend string Backdoor::getReverseString (NumPal &np);
};

#endif /* NumPal_hpp */
