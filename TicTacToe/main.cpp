//
//  main.cpp
//  TicTacToe
//
//  Created by Armando Hernandez on 10/09/19.
//  Copyright © 2019 Armando Hernandez. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include "cLinkedList.hpp"

int main(int argc, const char * argv[]) {
    Node* n0 = new Node("_________\0");

    LinkedList* LL = new LinkedList(n0);
    LL->print();
    system("pause");
    return 0;
}

