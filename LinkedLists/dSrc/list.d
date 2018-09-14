import std.stdio;

class Node(T) {
    public:
        T data;
        Node!(T) next;
        Node!(T) prev;
}

class List(T) {
    private:
        int length = 0;
        Node!(T) head = null;
        Node!(T) tail = null;
        Node!(T) curr = null;

    public:
        int Length() {
            return length;
        }

        // Node Access
        Node!(T) NextNode() {
            return curr.next;
        }

        Node!(T) PrevNode() {
            return curr.prev;
        }

        // Node Actions
        /*  This method inserts a node after the current position in the list.  */
        void InsertAfter(Node!(T) node) {
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
                if (node.next !is null) // node !is tail
                    node.next.prev = node;
                else
                    tail = node;
                node.prev = curr;
            }

            length++;
        }

        /*  This method inserts a node before the current position in the list.  */
        void InsertBefore(Node!(T) node) {
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
                if (node.prev !is null) // node !is head
                    node.prev.next = node;
                else
                    head = node;
                node.next = curr;
            }

            length++;
        }

        /*  This method deletes the next node from the list and returns the deleted node.
            If the next node is null (aka: curr = tail) do nothing and return null.  */
        Node!(T) DeleteAfter() {
            // Get the node we are about to delete.
            auto tmpNode = curr.next;

            if (length > 0) // Don't deprecate if in an empty list
                length--;

            // Per our spec, if tmpNode is null, we are at the tail and will return null.
            if (tmpNode is null) return null;

            // Remove the link to tmpNode moving forward
            curr.next = tmpNode.next;
            // Remove the link to tmpNode moving backward
            if (tmpNode.next !is null) // tmpNode !is tail
                tmpNode.next.prev = curr;

            return tmpNode;
        }

        /*  This method deletes the prev node from the list and returns the deleted node.
            If the prev node is null (aka: curr = head) do nothing and return null.  */
        Node!(T) DeleteBefore() {
            // Get the node we are about to delete.
            auto tmpNode = curr.next;

            if (length > 0) // Don't deprecate if in an empty list
                length--;

            // Per our spec, if tmpNode is null, we are at the head and will return null.
            if (tmpNode is null) return null;

            // Remove the link to tmpNode moving backward
            curr.prev = tmpNode.prev;
            // Remove the link to tmpNode moving forward
            if (tmpNode.prev !is null) // tmpNode !is head
                tmpNode.prev.next = curr;

            return tmpNode;
        }

        /*  This method moves forward in the list.
            If the next node is NULL, we are at the tail and don't move forward.  */
        void StepNext() {
            if (curr.next !is null) curr = curr.next;
        }

        /*  This method moves backward in the list.
            If the prev node is NULL, we are at the head and don't move backward.  */
        void StepPrev() {
            if (curr.prev !is null) curr = curr.prev;
        }

        /*  This method moves to the head of the list.  */
        void StepHead() {
            curr = head;
        }

        /*  This method moves to the tail of the list.  */
        void StepTail() {
            curr = tail;
        }

        // Expose List Data
        /*  This method returns true if curr = head and false otherwise.  */
        bool IsHead() {
            if (curr.prev is null)
                return true;
            else
                return false;
        }

        /*  This method returns true if curr = tail and false otherwise.  */
        bool IsTail() {
            if (curr.next is null)
                return true;
            else
                return false;
        }

        /*  This method returns curr.data.  */
        T Data() {
            return curr.data;
        }
}