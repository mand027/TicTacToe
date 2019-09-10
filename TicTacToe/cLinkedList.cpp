//
//  cLinkedList.cpp
//  TicTacToe
//
//  Created by Armando Hernandez on 10/09/19.
//  Copyright © 2019 Armando Hernandez. All rights reserved.
//

#include "cLinkedList.hpp"

LinkedList::LinkedList()
{
    anchor = nullptr;
}

LinkedList::LinkedList(Node* a)
{
    anchor = a;
    anchor->next = nullptr;
}

void LinkedList::append(Node* n)
{
    if(anchor != nullptr)
    {
        Node* current = anchor;
        while(current->next != nullptr)
        {
            current = current->next;
        }
        current->next = n;
        n->next = nullptr;
    }
    else
    {
        anchor = n;
        anchor->next = nullptr;
    }
}

void LinkedList::print()
{
    printf("LIST::BEGIN\n");
    Node* current = anchor;
    while (current != nullptr) {
        current->print();
        current = current->next;
    }
    printf("LIST::END\n");
}

LinkedList::~LinkedList()
{
}
