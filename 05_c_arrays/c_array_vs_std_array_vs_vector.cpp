#include<iostream>
#include<array>
#include<vector>
using namespace std;
// função template = comum a todos mas n e necessaria para o contentor vetor = função template e usade para criar pedaços de codigo flexiveis que aceitam varios tipos de dados, neste caso e usado para que n seja necessario colocara dimenção do contentor .
template<typename T, size_t N>
void listar( T(&Arr)(N)){
    for(auto El: Arr){ //a utelização de uma funçao teemplate permite que usemos este pedaço de codigo uma vez que a função template possui conhecimento sobre o tamanho do contentor
        cout << El << endl;
    }
};
int main(){
    int ar[5]; // array tradicional
    array<int,5> myA; // array contentor
    vector<int> myV(5); // contentor vetor
}
