#include <iostream>

int main(int argc, char *argv[]) {
    if (argc > 1)
        std::cout << "Hello, " << argv[1] << "!" << std::endl;
    else
        std::cout << "Hello World!" << std::endl;
    
    return 0;
}