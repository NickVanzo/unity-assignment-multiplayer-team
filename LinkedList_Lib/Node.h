#pragma once

class Node {
public:
    Node(Node* next, int value);
    Node* GetNext();
    int GetValue();
    void SetNext(Node* next);
private:
    Node* next;
    int value;
};
