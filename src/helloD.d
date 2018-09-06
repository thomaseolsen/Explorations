import std.stdio;

void main(string[] args) {
    if (args.length > 1) {
        writeln("Hello, ", args[1], "!");
    }
    else {
        writeln("Hello World!");
    }
}