#include <iostream>
#include "../include/list.h"

int main(int argc, char *argv[]) {
    List<int> *linkedList = new List<int>();
    Node<int> *a, *b, *c;
    
    a->data = 1013;
    b->data = 711;
    c->data = 1202;

    linkedList->InsertAfter(a);
    linkedList->InsertBefore(b);
    linkedList->StepNext(); // curr = a
    linkedList->InsertAfter(c);

    linkedList->StepHead();
    std::cout << "Traversing forward..." << std::endl;
    while (!linkedList->IsTail()) {
        std::cout << "Current Node Value: " << linkedList->Data() << std::endl;
        linkedList->StepNext();
    }

    linkedList->StepTail();
    std::cout << "Traversing backward..." << std::endl;
    while (!linkedList->IsHead()) {
        std::cout << "Current Node Value: " << linkedList->Data() << std::endl;
        linkedList->StepPrev();
    }

    return 0;
}