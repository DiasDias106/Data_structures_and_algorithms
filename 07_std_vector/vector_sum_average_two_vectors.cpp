#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> myV;
    vector<int> myV1;
    float media1=0 , media2=0;
    cout << "introduza 5 valores para o primeiro vetor" << endl;
    for(size_t i=0;i<5;i++){
        int valor;
        cin >> valor;
        myV.push_back(valor);
    }
    cout << "introduza 5 valores para o segundo vetor" << endl;
    for(size_t i=0;i<5;i++){
        int valor;
        cin >> valor;
        myV1.push_back(valor);
    }

    for(size_t i=0;i<5;i++){
         media1 +=  myV[i];
         media2 += myV1[i];
    }

     for(size_t i=0;i<5;i++){
         myV1[i] += myV[i];
    }

    for(auto El : myV){
        cout << El << "\t";
    }
    cout << endl;
    for(auto El: myV1){
        cout << El << "\t";
    }
    cout <<endl;
    cout << "media1\t" << media1/5 << endl;
    cout << "media2\t" << media2/5 << endl;
}