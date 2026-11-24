#include<iostream>
#include<vector>
using namespace std;

void removeX(vector<int> &v, int num);

int main(){
    vector<int> myV(5);
    int num;
    cout << "introduza o número que quer remover" << endl;
    cin >> num;
    cout << "introduza 5 elementos para o contentor" << endl;
    for(size_t i = 0; i < 5; i++){
        cin >> myV[i];
    }

    removeX(myV, num);

    cout << "Contentor após remoção:" << endl;
    for(auto El : myV){
        cout << El << "\t";
    }
    cout << endl;

    return 0;
}

void removeX(vector<int> &v, int num){
    vector<int> vnovo;
    for(size_t i = 0; i < v.size(); i++){
        if(v[i] != num){
            vnovo.push_back(v[i]);
        }
    }
    v = vnovo; // Substitui o vetor original pelo novo vetor sem os elementos removidos
}