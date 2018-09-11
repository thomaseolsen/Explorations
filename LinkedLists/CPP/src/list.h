#ifndef TEO_LIST_H
#define TEO_LIST_H
#include <iostream>
#include <string>

template<typename T>
struct Node {
    public:
        T data;
        Node<T>* next;
        Node<T>* prev;
};

template<typename T>
class List {
    private:
        int length;
        Node<T>* head;
        Node<T>* tail;
        Node<T>* curr;
    
    public:
        // Constructors
        List();

        int Length();

        // Node Access
        Node<T>* NextNode();
        Node<T>* PrevNode();

        // Node Actions
        void InsertAfter(Node<T>* ptr);
        void InsertBefore(Node<T>* ptr);
        Node<T>* DeleteAfter();
        Node<T>* DeleteBefore();
        void StepNext();
        void StepPrev();
        void StepHead();
        void StepTail();

        // Expose List Data
        bool IsHead();
        bool IsTail();
        T Data();
};

#endif