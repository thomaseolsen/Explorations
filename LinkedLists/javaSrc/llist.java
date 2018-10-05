public class llist {
    public static void main(String[] args) {
        intList();
        stringList();
    }

    static void intList() {
        LinkedList<Integer> linkedList = new LinkedList<Integer>();
        Node<Integer> a = new Node<Integer>(2);
        Node<Integer> b = new Node<Integer>(1);
        Node<Integer> c = new Node<Integer>(3);

        linkedList.InsertAfter(a);
        linkedList.InsertBefore(b);
        linkedList.StepNext(); // curr = a
        linkedList.InsertAfter(c);

        linkedList.StepHead();
        System.out.println("Trafersing forward...");
        for (int i = 0; i < linkedList.Length(); i++) {
            System.out.println("Current Node Value: " + linkedList.Data());
            linkedList.StepNext();
        }

        linkedList.StepTail();
        System.out.println("Trafersing backward...");
        for (int i = 0; i < linkedList.Length(); i++) {
            System.out.println("Current Node Value: " + linkedList.Data());
            linkedList.StepPrev();
        }
    }

    static void stringList() {
        LinkedList<String> linkedList = new LinkedList<String>();
        Node<String> a = new Node<String>("Two");
        Node<String> b = new Node<String>("One");
        Node<String> c = new Node<String>("Three");

        linkedList.InsertAfter(a);
        linkedList.InsertBefore(b);
        linkedList.StepNext(); // curr = a
        linkedList.InsertAfter(c);

        linkedList.StepHead();
        System.out.println("Trafersing forward...");
        for (int i = 0; i < linkedList.Length(); i++) {
            System.out.println("Current Node Value: " + linkedList.Data());
            linkedList.StepNext();
        }

        linkedList.StepTail();
        System.out.println("Trafersing backward...");
        for (int i = 0; i < linkedList.Length(); i++) {
            System.out.println("Current Node Value: " + linkedList.Data());
            linkedList.StepPrev();
        }
    }
}