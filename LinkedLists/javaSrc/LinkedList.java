class LinkedList<T> {
    private int length;
    private Node<T> head;
    private Node<T> tail;
    private Node<T> curr;

    LinkedList() {
        length = 0;
        head = null;
        tail = null;
        curr = null;
    }

    public int Length() {
        return length;
    }

    public Node<T> NextNode() {
        return curr.next;
    }

    public Node<T> PrevNode() {
        return curr.prev;
    }

    /*  This method inserts a node after the current position in the list.  */
    public void InsertAfter(Node<T> node) {
        if (length == 0) {
            // Insert first node in the list
            head = node;
            tail = node;
            curr = node;
        } else {
            // Insert a new node in an existing list
            // Set the new links moving forward (curr -> node -> next)
            node.next = curr.next;
            curr.next = node;

            // Set the new links moving backward (curr <- node <- next)
            if (node.next != null) // node != tail
                node.next.prev = node;
            else
                tail = node;
            node.prev = curr;
        }

        length++;
    }

    /*  This method inserts a node before the current position in the list.   */
    public void InsertBefore(Node<T> node) {
        if (length == 0) {
            // Insert first node in the list
            head = node;
            tail = node;
            curr = node;
        } else {
            // Insert a new node in an existing list
            // Set the new links moving backward (prev <- node <- curr)
            node.prev = curr.prev;
            curr.prev = node;

            // Set the new links moving forward (prev -> node -> curr)
            if (node.prev != null) // node != head
                node.prev.next = node;
            else
                head = node;
            node.next = curr;
        }

        length++;
    }

    /*  This method deletes the next node from the list and returns the deleted node.
        If the next node is null (aka: curr = tail) do nothing and return null.  */
    public Node<T> DeleteAfter() {
        // Get the node we are about to delete.
        Node<T> tmpNode = curr.next;

        if (length > 0) // Don't deprecate if in an empty list
            length--;

        // Per our spec, if tmpNode is null, we are at the tail and will return null.
        if (tmpNode == null) return null;

        // Remove the link to tmpNode moving forward
        curr.next = tmpNode.next;
        // Remove the link to tmpNode moving backward
        if (tmpNode.next != null) // tmpNode != tail
            tmpNode.next.prev = curr;

        return tmpNode;
    }

    /*  This method deletes the prev node from the list and returns the deleted node.
        If the prev node is null (aka: curr = head) do nothing and return null.  */
    public Node<T> DeleteBefore() {
        // Get the node we are about to delete.
        Node<T> tmpNode = curr.next;

        if (length > 0) // Don't deprecate if in an empty list
            length--;

        // Per our spec, if tmpNode is null, we are at the head and will return null.
        if (tmpNode == null) return null;

        // Remove the link to tmpNode moving backward
        curr.prev = tmpNode.prev;
        // Remove the link to tmpNode moving forward
        if (tmpNode.prev != null) // tmpNode != head
            tmpNode.prev.next = curr;

        return tmpNode;
    }

    /*  This method moves forward in the list.
        If the next node is NULL, we are at the tail and don't move forward.  */
    public void StepNext() {
        if (curr.next != null) curr = curr.next;
    }

    /*  This method moves backward in the list.
        If the prev node is NULL, we are at the head and don't move backward.  */
    public void StepPrev() {
        if (curr.prev != null) curr = curr.prev;
    }

    /*  This method moves to the head of the list.  */
    public void StepHead() {
        curr = head;
    }

    /*  This method moves to the tail of the list.  */
    public void StepTail() {
        curr = tail;
    }

    /*  This method returns true if curr = head and false otherwise.  */
    public Boolean IsHead() {
        if (curr.prev == null)
            return true;
        else
            return false;
    }

    /*  This method returns true if curr = tail and false otherwise.  */
    public Boolean IsTail() {
        if (curr.next == null)
            return true;
        else
            return false;
    }

    /*  This method returns curr.data.  */
    public T Data() {
        return curr.data;
    }
}