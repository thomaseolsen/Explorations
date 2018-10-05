# Linked Lists

### Ada


### C++
This is my base implementation of the DLL. From here, I will translate the idea across the various languages and output the results of traversing the list.

For comparison, I also tested std::list available in the C++ Standard Library. This provides similar functionality built-in. I'll compare the implementation of this library to the other languages as well (where available). This is also an implementation of a DLL, and as such offers fairly equivalent functionality to our jumping off point.

I'd like to note here that wile working with the template class, I came across some interesting linker issues. As such, there is an additional layer "list-impl.cpp" that explicitly informs the compiler what types to create classes for from our template. It should resolve any issues using any of the types (my demo code only tests int and std::string). This was rather annoying, but there is a great explanation of the issue at hand [here](https://isocpp.org/wiki/faq/templates#templates-defn-vs-decl).

### C#
After my stint in Python, I needed to come back to something more familiar. I consider C# to be my "home" language, it's what I prefer to code in the majority of the time (though D was a lot of fun, I must admit). Where Python was very freeing and I could do whatever I wanted, C# brought me back to a less anarchist approach to programming. Most things are private unless specifically made public, curly braces rule the world, and semi-colons keep everything in line. Okay, so maybe I'm being a bit facetious about Python, but I think I got my point across.

Since I've spent so much time in C#, I didn't rely on any books or websites to help me along here, it's purely from memory and what I know of the language. That said, there may be some things I did that could be considered "bad form" and I apologize for those up front. I did notice a marked similarity to D in a number of cases. I know everyone says C# was based on Java, and you can tell that it has roots there, but it's striking to me some of the syntactic similarities between C# and D. It's more than both being C-family languages, someone from one liked something from another...I'll have to dig more to find out who started what.

Next up, I think I'll branch into Java. Why not, right? I mean, I did just complete C#, it only makes sense to make a minor shift in that direction.

### COBOL


### D
Following the C++ implementation, I branched out to D. I chose this next because the syntax in D is very similar to other C-family languages and so wouldn't be completely foreign as I approached the task. As such, the implementation is extremely similar to my C++ version, with a few particular variations.

The book [The D Programming Language](https://www.amazon.com/D-Programming-Language-Andrei-Alexandrescu/dp/0321635361?keywords=9780321635365&qid=1536867605&sr=8-1&ref=sr_1_1) noted that while D does permit pointers, their use was strongly discouraged. The particular quote that stuck with me was thus, "you should be able to write a great deal of good D code without relying on pointers -- a low-level and dangerous feature _par excellence_." As such, I avoided all pointers in the logic.

Next up was the simplicity with which I noted I could create a template class. This ease made the work of creating my DLL class that much easier. Also worth noting was how much easier it was to create instances of my nodes. In C++ I had to actually allocate the memory for use. In D, I created new variables with the "auto" keyword and the compiler took care of the rest for me.

All-in-all, I'd say my time in the D language was rather enjoyable. I look forward to the next journey here.

### Fortran


### Go


### Java
Moving into Java from C# was certainly an interesting experiment. For starters, the two are so much more similar than I ever realized. I started the process by copying each class into its own .java file and moved on from there. I made sure the file names matched the class names (simple Java etiquite). After that, it was a minor matter of making the few syntactic changes that were required to make the project work. For instance, "int" became "Integer" when declaring my typed LinkedList and Node classes; "string" became "String" (yes, casing mattered in some of these instances); "bool" became "Boolean"; and the C# "System.Console.WriteLine" became "System.out.println" in Java. Such simple changes, to be sure. While my simple little project here required such few tweaks, I'm sure it's a bit more complicated with a real-world application. Nonetheless, it drives home the oft-talked about reality that C# really did come out of Java in a real and very close way.

I made use of the [Oracle Java Documentation](https://docs.oracle.com/javase/tutorial/java/javaOO/) for a few issues that came up (most notably what my types needed to be called) but other than that because the C# logic so closely matches Java, there wasn't much of a learning curve.

I don't mind Java as a whole, however I did find that I missed some of the familiarity that I feel with C#. This is just a personal preference, however, and I can see how the two are considered equal languages. Moving on from this, I think I'd like to try my hand in Go next. We'll see where that takes me.

### Objective-C


### Pascal


### Python
Following the D implementation, I moved on to Python. I chose this next because while C++ and D are both C-family languages, Python has a very different approach. As such, I felt it would be a good exercise in feeling out a different syntax and honestly different concept to programming in general.

The book [Programming in Python 3](https://www.amazon.com/Programming-Python-Complete-Introduction-Language/dp/0137129297?keywords=9780137129294&qid=1536935877&sr=8-1&ref=sr_1_1) proved particularly useful in this implementation. I tried my best to avoid searching online when I got stuck, and only ended up with a single search for a single concept. For everything else in this implementation, I relied on my reference book and my understanding of how programming languages work in general.

I noticed a significant departure from languages that I'm familiar with in that Python doesn't lock down class members (whether variables or functions) in any meaningful way. As such, the logic was simpler in that I didn't need to expose my Private members in any way, everything is already exposed. While this simplified the logic, it did leave me concerned with the security of the Python language as a whole. If any caller has access to my entire class, then what sort of mechanisms do I have available to lock down things I don't want being external facing? This is a question I'll need to explore in more depth at a later time.

In the end, Python was interesting, and I'm glad to have a better understanding of the language as a whole. I can't say it's my favorite language so far, but for it's ease of learning and simple implementation of many key constructs, I can see why it is such a popular language today.

### Ruby
