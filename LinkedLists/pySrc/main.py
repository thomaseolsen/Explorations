import llist

def intList():
    linkedList = llist.LList()
    a = llist.Node(dVal = 2)
    b = llist.Node(dVal = 1)
    c = llist.Node(dVal = 3)

    linkedList.InsertAfter(a)
    linkedList.InsertBefore(b)
    linkedList.StepNext()
    linkedList.InsertAfter(c)

    linkedList.StepHead()
    print("Traversing forward...")
    iter = 0
    while iter < linkedList.length:
        print("Current Node Value: ", linkedList.curr.data)
        iter += 1
        linkedList.StepNext()

    linkedList.StepTail()
    print ("Traversing backward...")
    iter = 0
    while iter < linkedList.length:
        print("Current Node Value: ", linkedList.curr.data)
        iter += 1
        linkedList.StepPrev()

def stringList():
    linkedList = llist.LList()
    a = llist.Node(dVal = "Two")
    b = llist.Node(dVal = "One")
    c = llist.Node(dVal = "Three")

    linkedList.InsertAfter(a)
    linkedList.InsertBefore(b)
    linkedList.StepNext()
    linkedList.InsertAfter(c)

    linkedList.StepHead()
    print("Traversing forward...")
    iter = 0
    while iter < linkedList.length:
        print("Current Node Value: ", linkedList.curr.data)
        iter += 1
        linkedList.StepNext()

    linkedList.StepTail()
    print ("Traversing backward...")
    iter = 0
    while iter < linkedList.length:
        print("Current Node Value: ", linkedList.curr.data)
        iter += 1
        linkedList.StepPrev()

def main():
    intList()
    stringList()

if __name__ == "__main__":
    main()