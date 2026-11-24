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
    
    // Construtor de cópia profunda
    String(const String& other) {
        data = new char[strlen(other.data) + 1];
        strcpy(data, other.data);
    }
    
    // Destrutor
    ~String() {
        delete[] data;
    }
};

int main() {
    String original("Hello");
    String deepCopy = original;
    
    std::cout << original.data << std::endl; // Saída: Hello
    std::cout << deepCopy.data << std::endl; // Saída: Hello
    
    // Modificando a cópia profunda não afeta o original
    deepCopy.data[0] = 'Y';
    std::cout << original.data << std::endl; // Saída: Hello
    std::cout << deepCopy.data << std::endl; // Saída: Yello

    return 0;
}