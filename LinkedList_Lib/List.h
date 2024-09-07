#pragma once
#include "./Node.h"

class List {
public:
    List();
    Node* GetHead();
    void Insert(int newValue);
    int GetSize();
private:
    Node* head;
    int size = 0;
};
