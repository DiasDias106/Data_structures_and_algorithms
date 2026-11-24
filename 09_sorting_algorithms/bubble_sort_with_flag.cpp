#include<iostream>
using namespace std;

int main() {
    int num[10]; // Array to hold 10 integers
    int dim = sizeof(num)/sizeof(num[0]); // Calculate the number of elements in the array

    cout << "Introduza 10 numeros no array" << endl;
    for(size_t i = 0; i < dim; i++) {
        cin >> num[i]; // Input 10 numbers from the user
    }

    // Bubble sort with flag
    for(size_t i = 0, troca = true; i < dim-1 && troca; i++) {
        troca = false; // Assume no swaps will be made
        for(size_t j = 0; j < dim-1-i; j++) {
            if(num[j] > num[j+1]) { // If the current element is greater than the next element
                troca = true; // A swap is made, so set the flag to true
                swap(num[j], num[j+1]); // Swap the elements
            }
        }
    }

    // Output the sorted array
    for(size_t i=0;i<dim;i++){
        cout << num[i];
    }

    return 0;
}
