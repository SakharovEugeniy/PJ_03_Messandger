#pragma once

#include "Node.h"

class List
{
public:
    List() : m_head(nullptr) {}
    void push_back(int data);
    void show();
    void deleteNode(int position);
private:
    Node* m_head;
};
