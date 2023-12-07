//
//  pointerWrapper.cpp
//  workshop11
//
//  Created by Max Wilkinson on 05/12/2023.
//

#include "pointerWrapper.h"
//  _p(new int(value)) is dynamically allocating memory to _p on the stack with the data of 'value'. If wanted to use automatic memory allocation by heap, new would be removed from the constructor and the destructor isnt neccesarily needed.

pointerWrapper::pointerWrapper(int value) : _p(new int(value))//constructor, passed parameter, dynamically set to _p pointer
{
    cout << "Allocating memory for int pointer..." << endl;
}

void pointerWrapper::print()//displays simple cout with value of the pointer
{
    cout << "Hi, I am a wrapped pointer with value: " << *_p << endl;
}

pointerWrapper::~pointerWrapper()//destructor
{
    cout << "Releasing memory from int pointer..." << endl;
    delete _p;//releases memory from the pointer
}
