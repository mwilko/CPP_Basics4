//
//  main.cpp
//  workshop11
//
//  Created by Max Wilkinson on 05/12/2023.
//

#include <iostream>
#include "pointerWrapper.h"
using namespace std;

int main(void)
{
 {
 pointerWrapper p(1);//pointer made with value of 1
 p.print();//displays cout with value of pointer
 }
 cout << endl << "Doing other stuff in the program..." << endl << endl;
 pointerWrapper pW(64);//new pointer with value of 64
 pW.print();//displays cout with value of pointer
 return 0;
}
