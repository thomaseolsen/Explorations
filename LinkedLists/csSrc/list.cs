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
    }
}