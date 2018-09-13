# Linked Lists

## Ada

### C++
This is my base implementation of the DLL. From here, I will translate the idea across the various languages and output the results of traversing the list.

For comparison, I also tested std::list available in the C++ Standard Library. This provides similar functionality built-in. I'll compare the implementation of this library to the other languages as well (where available). This is also an implementation of a DLL, and as such offers fairly equivalent functionality to our jumping off point.

I'd like to note here that wile working with the template class, I came across some interesting linker issues. As such, there is an additional layer "list-impl.cpp" that explicitly informs the compiler what types to create classes for from our template. It should resolve any issues using any of the types (my demo code only tests int and std::string). This was rather annoying, but there is a great explanation of the issue at hand [here](https://isocpp.org/wiki/faq/templates#templates-defn-vs-decl).

### C#


### COBOL


### D
Following the C++ implementation, I branched out to D. I chose this next because the syntax in D is very similar to other C-family languages and so wouldn't be completely foreign as I approached the task. As such, the implementation is extremely similar to my C++ version, with a few particular variations.

The book [The D Programming Language](https://www.amazon.com/D-Programming-Language-Andrei-Alexandrescu/dp/0321635361?keywords=9780321635365&qid=1536867605&sr=8-1&ref=sr_1_1) noted that while D does permit pointers, their use was strongly discouraged. The particular quote that stuck with me was thus, "you should be able to write a great deal of goo dD code without relying on pointers -- a low-level and dangerous feature _par excellence_." As such, I avoided all pointers in the logic.

Next up was the simplicity with which I noted I could create a template class. This ease made the work of creating my DLL class that much easier. Also worth noting was how much easier it was to create instances of my nodes. In C++ I had to actually allocate the memory for use. In D, I created new variables with the "auto" keyword and the compiler took care of the rest for me.

All-in-all, I'd say my time in the D language was rather enjoyable. I look forward to the next journey here.

## Fortran

## Go

## Java

## Objective-C

## Pascal

## Python

## Ruby
