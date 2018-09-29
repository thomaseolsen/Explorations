using LList;

namespace Main {
    class Program {
        static void Main(string[] args) {
            intList();
            stringList();
        }

        static void intList() {
            List<int> linkedList = new List<int>();
            Node<int> a = new Node<int>(2);
            Node<int> b = new Node<int>(1);
            Node<int> c = new Node<int>(3);

            linkedList.InsertAfter(a);
            linkedList.InsertBefore(b);
            linkedList.StepNext(); // curr = a
            linkedList.InsertAfter(c);

            linkedList.StepHead();
            System.Console.WriteLine("Trafersing forward...");
            for (int i = 0; i < linkedList.Length(); i++) {
                System.Console.WriteLine("Current Node Value: ", linkedList.Data());
                linkedList.StepNext();
            }

            linkedList.StepTail();
            System.Console.WriteLine("Trafersing backward...");
            for (int i = 0; i < linkedList.Length(); i++) {
                System.Console.WriteLine("Current Node Value: ", linkedList.Data());
                linkedList.StepPrev();
            }
        }

        static void stringList() {
            List<string> linkedList = new List<string>();
            Node<string> a = new Node<string>("Two");
            Node<string> b = new Node<string>("One");
            Node<string> c = new Node<string>("Three");

            linkedList.InsertAfter(a);
            linkedList.InsertBefore(b);
            linkedList.StepNext(); // curr = a
            linkedList.InsertAfter(c);

            linkedList.StepHead();
            System.Console.WriteLine("Trafersing forward...");
            for (int i = 0; i < linkedList.Length(); i++) {
                System.Console.WriteLine("Current Node Value: ", linkedList.Data());
                linkedList.StepNext();
            }

            linkedList.StepTail();
            System.Console.WriteLine("Trafersing backward...");
            for (int i = 0; i < linkedList.Length(); i++) {
                System.Console.WriteLine("Current Node Value: ", linkedList.Data());
                linkedList.StepPrev();
            }
        }
    }
}