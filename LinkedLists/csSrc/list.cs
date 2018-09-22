namespace LList {
    class Node<T> {
        T data;
        Node<T> next;
        Node<T> prev;
    }

    class List<T> {
        private int length;
        private Node<T> head;
        private Node<T> tail;
        private Node<T> curr;

        public void List<T>() {
            length = 0;
            head = null;
            tail = null;
            curr = null;
        }

        public int Length() {
            return length;
        }

#region "Node Access"
        public Node<T> NextNode() {
            return curr.next;
        }

        public Node<T> PrevNode() {
            return curr.prev;
        }
#endregion

#region "Node Actions"
        /*  This method inserts a node after the current position in the list.  */
        public void InsertAfter(Node<T> node) {
            //do something
        }

        /*  This method inserts a node before the current position in the list.   */
        public void InsertBefore(Node<T> node) {
            //do something
        }

        /*  This method deletes the next node from the list and returns the deleted node.
            If the next node is null (aka: curr = tail) do nothing and return null.  */
        public Node<T> DeleteAfter() {
            //do something
        }

        /*  This method deletes the prev node from the list and returns the deleted node.
            If the prev node is null (aka: curr = head) do nothing and return null.  */
        public Node<T> DeleteBefore() {
            //do something
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
#endregion

#region "Expose List Data"
        /*  This method returns true if curr = head and false otherwise.  */
        public bool IsHead() {
            if (curr.prev == null)
                return true;
            else
                return false;
        }

        /*  This method returns true if curr = tail and false otherwise.  */
        public bool IsTail() {
            if (curr.next == null)
                return true;
            else
                return false;
        }

        /*  This method returns curr.data.  */
        public T Data() {
            return curr.data;
        }
#endregion
    }
}