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

def main():
    intList()

if __name__ == "__main__":
    main()