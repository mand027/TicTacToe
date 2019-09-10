//
//  cNode.cpp
//  TicTacToe
//
//  Created by Armando Hernandez on 10/09/19.
//  Copyright © 2019 Armando Hernandez. All rights reserved.
//

#include "cNode.hpp"

Node::Node()
{
    for(int i = 0; i < SIZE; i++)
    {
        payload[i] = ' ';
    }
    next = nullptr;
}

Node::Node(char* pl)
{
    for(int i = 0; i < SIZE; i++)
    {
        payload[i] = pl[i];
    }
    next = nullptr;
}

void Node::print()
{
    printf("%s\n", payload);
}

Node::~Node()
{
}
