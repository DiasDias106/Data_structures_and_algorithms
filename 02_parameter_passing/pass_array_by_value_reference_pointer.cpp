#include <iostream>
#include <algorithm> // Para std::copy

void funcPorValor(int arr[], int tamanho) {
    int copia[5];
    std::copy(arr, arr + tamanho, copia);
    copia[0] = 10; // Modificação na cópia, não afeta o array original
    std::cout << "Dentro da função: " << copia[0] << std::endl; // Output: 10
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    funcPorValor(arr, 5);
    std::cout << "No main: " << arr[0] << std::endl; // Output: 1
    return 0;
}


void funcPorReferencia(int (&arr)[5]) {
    arr[0] = 10; // Modificação afeta o array original
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    funcPorReferencia(arr);
    std::cout << arr[0] << std::endl; // Output: 10
    return 0;
}

void funcPorPonteiro(int* arr, int tamanho) {
    arr[0] = 10; // Modificação afeta o array original
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    funcPorPonteiro(arr, 5);
    std::cout << arr[0] << std::endl; // Output: 10
    return 0;
}

