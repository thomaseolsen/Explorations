import std.stdio;
import list;

void intList() {
    auto linkedList = new List!(int);
    auto a = new Node!(int);
    auto b = new Node!(int);
    auto c = new Node!(int);

    a.data = 2;
    b.data = 1;
    c.data = 3;

    linkedList.InsertAfter(a);
    linkedList.InsertBefore(b);
    linkedList.StepNext(); // curr = a
    linkedList.InsertAfter(c);

    linkedList.StepHead();
    writeln("Trafersing forward...");
    for (int i = 0; i < linkedList.Length(); i++) {
        writeln("Current Node Value: ", linkedList.Data());
        linkedList.StepNext();
    }

    linkedList.StepTail();
    writeln("Trafersing backward...");
    for (int i = 0; i < linkedList.Length(); i++) {
        writeln("Current Node Value: ", linkedList.Data());
        linkedList.StepPrev();
    }
}

void stringList() {
    auto linkedList = new List!(string);
    auto a = new Node!(string);
    auto b = new Node!(string);
    auto c = new Node!(string);

    a.data = "Two";
    b.data = "One";
    c.data = "Three";

    linkedList.InsertAfter(a);
    linkedList.InsertBefore(b);
    linkedList.StepNext(); // curr = a
    linkedList.InsertAfter(c);

    linkedList.StepHead();
    writeln("Trafersing forward...");
    for (int i = 0; i < linkedList.Length(); i++) {
        writeln("Current Node Value: ", linkedList.Data());
        linkedList.StepNext();
    }

    linkedList.StepTail();
    writeln("Trafersing backward...");
    for (int i = 0; i < linkedList.Length(); i++) {
        writeln("Current Node Value: ", linkedList.Data());
        linkedList.StepPrev();
    }
}

void main(string[] args) {
    intList();
    stringList();
}