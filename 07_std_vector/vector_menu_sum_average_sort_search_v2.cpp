#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void media(vector<int> &v1, vector<int> &v2);
void ordena(vector<int> &v1, vector<int> &v2);
void soma(vector<int> &v1, vector<int> &v2);
void pesquisa(vector<int> &v1, vector<int> &v2);
int main(){
    vector<int> myV1(5);
    vector<int> myV2(5);
    int op;
    cout << "introduza 5 valores para v1" << endl;
    for(size_t i=0;i<5;i++){
        cin >> myV1[i];
    }
    cout << "introduza 5 valores para v2" << endl;
    for(size_t i=0;i<5;i++){
        cin >> myV2[i];
    }
    cout << "introduza uma opcao:" << endl;
    cin >> op;
    switch(op){
        case 1:
        soma(myV1,myV2);
        break;
        case 2:
        media(myV1,myV2);
        break;
        case 3:
        ordena(myV1,myV2);
        break;
        case 4:
        pesquisa(myV1,myV2);
        break;
        default:
        cout << "opcao invalida" << endl;
    }
}

void soma(vector<int> &v1, vector<int> &v2){
    vector<int> myV3(5);
    for(size_t i=0;i<5;i++){
        myV3[i] = v1[i] + v2[i];
    }
    for(auto El: myV3){
        cout << El << endl;
    }
}

void media(vector<int> &v1, vector<int> &v2){
    int soma1=0,soma2=0;
    float media1,media2;
    for(size_t i=0;i<v1.size();i++){
          soma1 += v1[i];
          soma2 += v2[i];
    }
    media1 = soma1/v1.size();
    media2 = soma2/v2.size();

    cout << "Media1" << media1 << endl;
    cout << "Media2" << media2 << endl;
}

void ordena(vector<int> &v1, vector<int> &v2){
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    for(auto El : v1){
        cout << El << "\t";
    }
    cout << endl;
    for(auto El : v2){
        cout << El << "\t";
    }
}

void pesquisa(vector<int> &v1, vector<int> &v2){
    int pesquisar;
    cout << "introduza o que quer pesquisar" << endl;
    cin >> pesquisar;

    auto it1 = find(v1.begin(),v1.end(),pesquisar);
    if(it1 != v1.end()){
        cout << "o numero esta na posicao" << (size_t) distance(v1.begin(),it1) << endl;
    }else{
        cout << "o numero nao foi encontrado" << endl;
    }

    auto it2 = find(v2.begin(),v2.end(),pesquisar);
    if(it2!= v2.end()){
        cout << "o numero esta na posicao:" << (size_t) distance(v2.begin(),it2) << endl;
    }else{
        cout << "o numero nao foi encontrado" << endl;
    }
}