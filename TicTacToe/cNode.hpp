//
//  cNode.hpp
//  TicTacToe
//
//  Created by Armando Hernandez on 10/09/19.
//  Copyright © 2019 Armando Hernandez. All rights reserved.
//

#pragma once
#include <iostream>
#include <stdio.h>
#define SIZE 10     //  OOOOXXX__\0
#ifndef __NODE
#define __NODE

class Node
{
public:
    Node();
    Node(char* pl);
    ~Node();
    
    void print(void);
    
    Node* next;
    char payload[SIZE];
};
    
#endif
