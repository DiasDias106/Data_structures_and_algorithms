#include<iostream>
#include<vector>
using namespace std;
void pesquisar(vector<int> &v){
    int num;
    cout << "introduza o numero que pretende pesquisar" << endl;
    cin >> num;
    bool encontrado = false;
    for(int i=0;i<5;i++){
        if(num == v[i]){
            encontrado = true;
            cout << num;
            cout << "posicao\t"<< i;
    }
    }
    if(encontrado == false){
        cout << "numero nao encontrado";
    }
}
int main(){
    vector<int> myV1(5);
    cout << "introduza 5 numeros" << endl;
    for(size_t i=0;i<5;i++){
        cin >> myV1[i];
    }
    pesquisar(myV1);
}