#include <string>
#include "list.h"

template<typename T>
List<T>::List() {
    length = 0;
    head = NULL;
    tail = NULL;
    curr = NULL;
}

template<typename T>
int List<T>::Length() {
    return this->length;
}

template<typename T>
Node<T>* List<T>::NextNode() {
    return this->curr->next;
}

template<typename T>
Node<T>* List<T>::PrevNode() {
    return this->curr->prev;
}

/*  This method inserts a node after the current position in the list.  */
template<typename T>
void List<T>::InsertAfter(Node<T>* ptr) {
    if (this->length == 0) {
        // Insert first node in the list
        this->head = ptr;
        this->tail = ptr;
        this->curr = ptr;
    }
    else {
        // Insert a new node in an existing list
        // Set the new links moving forward (curr -> ptr -> next)
        ptr->next = this->curr->next;
        this->curr->next = ptr;

        // Set the new links moving backward (curr <- ptr <- next)
        if (ptr->next != NULL) // ptr != tail
            ptr->next->prev = ptr;
        else
            this->tail = ptr;
        ptr->prev = this->curr;
    }
    
    this->length++;
}

/*  This method inserts a node before the current position in the list.  */
template<typename T>
void List<T>::InsertBefore(Node<T>* ptr) {
    if (this->length == 0) {
        // Insert first node in the list
        this->head = ptr;
        this->tail = ptr;
        this->curr = ptr;
    }
    else {
        // Set the new links moving backward (prev <- ptr <- curr)
        ptr->prev = this->curr->prev;
        this->curr->prev = ptr;

        // Set the new links moving forward (prev -> ptr -> curr)
        if (ptr->prev != NULL) // ptr != head
            ptr->prev->next = ptr;
        else
            this->head = ptr;
        ptr->next = this->curr;
    }

    this->length++;
}

/*  This method deletes the next node from the list and returns the deleted node.
    If the next node is NULL (aka: curr = tail) do nothing and return NULL.  */
template<typename T>
Node<T>* List<T>::DeleteAfter() {
    // Get the node we are about to delete.
    Node<T>* tmpNode = this->curr->next;

    if (this->length > 0) // Don't deprecate if in an empty list.
        this->length--;

    // Per our spec, if tmpNode is NULL, we are at the tail and will return NULL.
    if (tmpNode == NULL) return NULL;

    // Remove the link to tmpNode moving forward
    this->curr->next = tmpNode->next;
    // Remove the link to tmpNode moving backward
    if (tmpNode->next != NULL) // tmpNode != tail
        tmpNode->next->prev = this->curr;
    
    return tmpNode;
}

/*  This method deletes the prev node from the list and returns the deleted node.
    If the prev node is NULL (aka: curr = head) do nothing and return NULL.  */
template<typename T>
Node<T>* List<T>::DeleteBefore() {
    // Get the node we are about to delete.
    Node<T>* tmpNode = this->curr->prev;
    
    if (this->length > 0) // Don't deprecate if in an empty list.
        this->length--;

    // Per our spec, if tmpNode is NULL, we are at the head and will return NULL.
    if (tmpNode == NULL) return NULL;

    // Remove the link to tmpNode moving backward
    this->curr->prev = tmpNode->prev;
    // Remove the link to tmpNode moving forward
    if (tmpNode->prev != NULL) // tmpNode != head
        tmpNode->prev->next = this->curr;
    
    return tmpNode;
}

/*  This method moves forward in the list.
    If the next node is NULL, we are at the tail and don't move forward.  */
template<typename T>
void List<T>::StepNext() {
    if (this->curr->next != NULL) this->curr = this->curr->next;
}

/*  This method moves forward in the list.
    If the prev node is NULL, we are at the head and don't move backward.  */
template<typename T>
void List<T>::StepPrev() {
    if (this->curr->prev != NULL) this->curr = this->curr->prev;
}

/*  This method moves to the head of the list.  */
template<typename T>
void List<T>::StepHead() {
    this->curr = this->head;
}

/*  This method moves to the tail of the list.  */
template<typename T>
void List<T>::StepTail() {
    this->curr = this->tail;
}

/*  This method returns true if curr = head and false otherwise.  */
template<typename T>
bool List<T>::IsHead() {
    if (this->curr->prev == NULL)
        return true;
    else
        return false;
}

/*  This method returns true if curr = tail and false otherwise.  */
template<typename T>
bool List<T>::IsTail() {
    if (this->curr->next == NULL)
        return true;
    else
        return false;
}

/*  This method returns curr.data.  */
template<typename T>
T List<T>::Data() {
    return this->curr->data;
}