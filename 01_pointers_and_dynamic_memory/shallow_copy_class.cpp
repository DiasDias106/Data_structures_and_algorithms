#include <iostream>
#include <cstring>

class String {
public:
    char* data;
    
    // Construtor
    String(const char* str) {
        data = new char[strlen(str) + 1];
        strcpy(data, str);
    }
    
    // Construtor de cópia superficial
    String(const String& other) {
        data = other.data;
    }
    
    // Destrutor
    ~String() {
        delete[] data;
    }
};

int main() {
    String original("Hello");
    String shallowCopy = original;
    
    std::cout << original.data << std::endl; // Saída: Hello
    std::cout << shallowCopy.data << std::endl; // Saída: Hello
    
    // Modificando a cópia superficial afeta o original
    shallowCopy.data[0] = 'Y';
    std::cout << original.data << std::endl; // Saída: Yello
    std::cout << shallowCopy.data << std::endl; // Saída: Yello

    return 0;
}