class Node<T> {
    public T data;
    public Node<T> next;
    public Node<T> prev;

    public Node(T val) {
        data = val;
    }
}