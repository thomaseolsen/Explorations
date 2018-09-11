#include <iostream>
#include <fstream>
#include <string>
#include <list>
#include "list.h"

void intList() {
    List<int> *linkedList = new List<int>();
    struct Node<int> *a = (struct Node<int>*)malloc(sizeof(struct Node<int>));
    struct Node<int> *b = (struct Node<int>*)malloc(sizeof(struct Node<int>));
    struct Node<int> *c = (struct Node<int>*)malloc(sizeof(struct Node<int>));
    
    a->data = 2;
    b->data = 1;
    c->data = 3;

    linkedList->InsertAfter(a);
    linkedList->InsertBefore(b);
    linkedList->StepNext(); // curr = a
    linkedList->InsertAfter(c);

    linkedList->StepHead();
    std::cout << "Traversing forward..." << std::endl;
    for (int i = 0; i < linkedList->Length(); i++) {
        std::cout << "Current Node Value: " << linkedList->Data() << std::endl;
        linkedList->StepNext();
    }

    linkedList->StepTail();
    std::cout << "Traversing backward..." << std::endl;
    for (int i = 0; i < linkedList->Length(); i++) {
        std::cout << "Current Node Value: " << linkedList->Data() << std::endl;
        linkedList->StepPrev();
    }

    free(a);
    free(b);
    free(c);
}

void intStdList() {
    std::list<int> linkedList = {1, 2, 3};

    std::cout << "Traversing std::list forward..." << std::endl;
    for (std::list<int>::const_iterator iter = linkedList.begin(); iter != linkedList.end(); ++iter) {
        std::cout << "Current Node Value: " << *iter << std::endl;
    }

    std::cout << "Traversing std::list backward..." << std::endl;
    for (std::list<int>::const_iterator iter = linkedList.end(); iter != linkedList.begin(); --iter) {
        if (iter != linkedList.end()) std::cout << "Current Node Value: " << *iter << std::endl;
    }
    std::cout << "Current Node Value: " << *linkedList.begin() << std::endl;
}

void stringList() {
    List<std::string> *linkedList = new List<std::string>();
    struct Node<std::string> *a = (struct Node<std::string>*)malloc(sizeof(struct Node<std::string>));
    struct Node<std::string> *b = (struct Node<std::string>*)malloc(sizeof(struct Node<std::string>));
    struct Node<std::string> *c = (struct Node<std::string>*)malloc(sizeof(struct Node<std::string>));

    a->data = "Two";
    b->data = "One";
    c->data = "Three";

    linkedList->InsertAfter(a);
    linkedList->InsertBefore(b);
    linkedList->StepNext(); // curr = a
    linkedList->InsertAfter(c);

    linkedList->StepHead();
    std::cout << "Traversing forward..." << std::endl;
    for (int i = 0; i < linkedList->Length(); i++) {
        std::cout << "Current Node Value: " << linkedList->Data() << std::endl;
        linkedList->StepNext();
    }

    linkedList->StepTail();
    std::cout << "Traversing backward..." << std::endl;
    for (int i = 0; i < linkedList->Length(); i++) {
        std::cout << "Current Node Value: " << linkedList->Data() << std::endl;
        linkedList->StepPrev();
    }

    free(a);
    free(b);
    free(c);
}

void stringStdList() {
    std::list<std::string> linkedList = {"One", "Two", "Three"};

    std::cout << "Traversing std::list forward..." << std::endl;
    for (std::list<std::string>::const_iterator iter = linkedList.begin(); iter != linkedList.end(); ++iter) {
        std::cout << "Current Node Value: " << *iter << std::endl;
    }

    std::cout << "Traversing std::list backward..." << std::endl;
    for (std::list<std::string>::const_iterator iter = linkedList.end(); iter != linkedList.begin(); --iter) {
        if (iter != linkedList.end()) std::cout << "Current Node Value: " << *iter << std::endl;
    }
    std::cout << "Current Node Value: " << *linkedList.begin() << std::endl;
}

int main(int argc, char *argv[]) {
    intList();
    stringList();

    intStdList();
    stringStdList();

    return 0;
}