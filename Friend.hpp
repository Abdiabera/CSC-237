//
//  Friend.hpp
//  NumPal
//
//  Created by William Chan on 12/5/20.
//

#ifndef Friend_hpp
#define Friend_hpp

#include <stdio.h>
#include <string>
using namespace std;

class NumPal;   // forward delcaration of the NumPal class

class Backdoor {
public:
    Backdoor ();
    string getReverseString (NumPal &);
};
#endif /* Friend_hpp */
