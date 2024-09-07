#include "./Node.h"

Node::Node(Node* next, int value): next(next), value(value) {};

Node* Node::GetNext() {
    return this->next;
}

void Node::SetNext(Node *next) {
    this->next = next;
}

int Node::GetValue() {
    return this->value;
}



