class Node:
    def __init__(self, dVal, nVal = None, pVal = None):
        data = dVal
        next = nVal
        prev = pVal

class LList:
    def __init__(self):
        self.length = 0
        self.head = None
        self.tail = None
        self.curr = None
    
    # Node Access
    def NextNode(self):
        return self.curr.next
    
    def PrevNode(self):
        return self.curr.prev

    # Node Actions
    # This method inserts a node after the current position in the list.
    def InsertAfter(self, node):
        if self.length == 0:
            # Insert first node in the list
            self.head = node
            self.tail = node
            self.curr = node
        else:
            # Insert a new node in an existing list
            # Set the new links moving forward (curr -> node -> next)
            node.next = self.curr.next
            self.curr.next = node

            # Set the new links moving backward (curr <- node <- next)
            if node.next is not None: # node is not self.tail
                node.next.prev = node
            else:
                self.tail = node
            node.prev = self.curr

        self.length += 1

    # This method inserts a node before the current position in the list.
    def InsertBefore(self, node):
        if self.length == 0:
            # Insert first node in the list
            self.head = node
            self.tail = node
            self.curr = node
        
        else:
            # Insert a new node in an existing list
            # Set the new links moving backward (prev <- node <- curr)
            node.prev = self.curr.prev
            self.curr.prev = node

            # Set the new links moving forward (prev -> node -> curr)
            if node.prev is not None: # node is not self.head
                node.prev.next = node
            else:
                self.head = node
            node.next = self.curr

            self.length += 1

    # This method deletes the next node from the list and returns the deleted node.
    # If the next node is None (aka: self.curr = self.tail) do nothing and return None.
    def DeleteAfter(self):
        # Get the node we are about to delete
        tmpNode = self.curr.next

        if self.length > 0: # Don't deprecate if in an empty list
            self.length -= 1
        
        # Per our spec, if tmpNode is None, we are at the tail and will return None.
        if tmpNode is None:
            return None
        
        # Remove the link to tmpNode moving forward
        self.curr.next = tmpNode.next
        # Remove the link to tmpNode moving backward
        if tmpNode.next is not None: # tmpNode is not self.tail
            tmpNode.next.prev = self.curr
        
        return tmpNode

    # This method deletes the prev node from the list and returns the deleted node.
    # If the prev node is None (aka: self.curr = self.head) do nothing and return None.
    def DeleteBefore(self):
        # Get the node we are about to delete
        tmpNode = self.curr.prev

        if self.length > 0: # Don't deprecate if in an empty list
            self.length -= 1
        
        # Per our spec, if tmpNode is None, we are at the head and will return None.
        if tmpNode is None:
            return None
        
        # Remove the link to tmpNode moving backward
        self.curr.prev = tmpNode.prev
        # Remove the link to tmpNode moving forward
        if tmpNode.prev is not None: # tmpNode is not self.head
            tmpNode.prev.next = self.curr
        
        return tmpNode

    # This method moves forward in the list.
    # If the next node is None, we are at the tail and don't move forward.
    def StepNext(self):
        if self.curr.next is not None:
            self.curr = self.curr.next
    
    # This method moves backward in the list.
    # If the prev node is None, we are at the head and don't move backward.
    def StepPrev(self):
        if self.curr.prev is not None:
            self.curr = self.curr.prev
    
    # This method moves to the head of the list.
    def StepHead(self):
        self.curr = self.head

    # This method moves to the tail of the list.
    def StepTail(self):
        self.curr = self.tail

    # Expose List Data
    # This method returns true if self.curr = self.head and false otherwise.
    def IsHead(self):
        return False if self.curr.prev is not None else True

    # This method returns true if self.curr = self.tail and false otherwise.
    def IsTail(self):
        return False if self.curr.next is not None else True

    def test(self, value = False):
        if value == False:
            print(0)
        else:
            print(value)