#include<iostream>
using namespace std;
int fatorialRecursivo(int n, int limite);
int main(){
    int lim;
    int num;
    cout << "introduza um numero:"<<endl;
    cin >> num;
    cout << "introduza o limite" << endl;
    cin >> lim;

    int ret = fatorialRecursivo(num,lim);
    cout << ret << endl;
}
int fatorialRecursivo(int n, int limite) {
    // Condição de saída da recursão
    if (n > limite) {
        std::cout << "Número maior que o limite. Saindo da recursão." << std::endl;
        return -1; // Retorna um valor indicando que o limite foi ultrapassado
    }
    // Caso base da recursão
    if (n <= 1) {
        return 1;
    }
    // Chamando a função recursivamente
    return n * fatorialRecursivo(n - 1, limite);
}