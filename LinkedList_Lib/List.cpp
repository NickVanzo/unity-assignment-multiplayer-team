#include "./List.h"

List::List(): head(nullptr), size(0) {};

/**
 * This is the function I was asked to implement for this assignment.
 * The runtime of this insertion is O(N) where N is the length of the list.
 * The function has the following structure:
 *  - create a new node with the passed value
 *  - if the list is empty the head of the list becomes the new node
 *  - if the list is not empty then we move along the list with two pointers until we find a value
 *    that's less than the new value or we have visited all the nodes of the list
 */
void List::Insert(int newValue) {
    Node* newNode = new Node(nullptr, newValue);

    if (head == nullptr) {
        head = newNode;
    } else if (newValue < head->GetValue()) {
        newNode->SetNext(head);
        head = newNode;
    } else {
        Node* p = head;
        Node* prev = nullptr;

        while (p != nullptr && p->GetValue() < newValue) {
            prev = p;
            p = p->GetNext();
        }

        if(prev != nullptr)
            prev->SetNext(newNode);
        newNode->SetNext(p);
    }

    ++size;
}


Node* List::GetHead() {
    return this->head;
}

int List::GetSize() {
    return this->size;
}

