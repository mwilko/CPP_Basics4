//
//  pointerWrapper.h
//  workshop11
//
//  Created by Max Wilkinson on 05/12/2023.
//

#ifndef pointerWrapper_h
#define pointerWrapper_h

#include <stdio.h>
#include "iostream"
using namespace std;

class pointerWrapper
{
//Resource Allocation Is Initialisation (RAII)
public:
    //acquire the resource in the constructor
    pointerWrapper(int value);
    
    void print(void);//displays cout with value of pointer
    
    //release the resource in the destructor
    ~pointerWrapper();
private:
 int* _p;//int pointer variable
};

#endif /* pointerWrapper_h */
