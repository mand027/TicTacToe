//
//  cLinkedList.hpp
//  TicTacToe
//
//  Created by Armando Hernandez on 10/09/19.
//  Copyright © 2019 Armando Hernandez. All rights reserved.
//
#pragma once
#include "cNode.hpp"

#ifndef __LINKED_LIST
#define __LINKED_LIST

class LinkedList
{
public:
    LinkedList();
    LinkedList(Node* a);
    ~LinkedList();
    
    void append(Node* n);
    void print(void);
    
    Node* anchor;
};

#endif /* cLinkedList_hpp */
