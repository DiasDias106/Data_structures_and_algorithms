#include<iostream>
using namespace std;
int somaum(int num);
int somaoutro(int &numero);
int somaumoutro(int *num);
int main(){
    int numero;
    cout << "introduza um numero \n";
    cin >> numero;
    somaum(numero);
    cout << numero << endl;
    somaoutro(numero);
    cout<<numero << endl;
    somaumoutro(&numero);
    cout << numero <<endl;
}
int somaum(int num){
    num = num + 1;
}
int somaoutro(int &numero){
    numero = numero +1;
}
int somaumoutro(int *num){
    *num = *num + 1;
}