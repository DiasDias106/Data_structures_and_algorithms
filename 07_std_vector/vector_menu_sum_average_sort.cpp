#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void soma(vector<int> &v1, vector<int> &v2);
void ordenar(vector<int> &v1, vector<int> &v2);
void media(vector<int> &v1, vector<int> &v2);
int main(){
    vector<int> myV1(5);
    vector<int> myV2;
    int f;
    cout << "introduza 5 valores para o primerio vetor"<<endl;
    for(size_t i=0;i<5;i++){
        cin >> myV1[i];
    }
    cout << "introduza 5 valores para segundo vetor" << endl;
    for(size_t i=0;i<5;i++){
        int valor;
        cin >> valor;
        myV2.push_back(valor);
    }
    for(auto El : myV1){
        cout << El << "\t";
    }
    cout << endl;
    for(auto El : myV2){
        cout << El << "\t";
    }
    cout << endl;
    cout << "introduza a função" <<endl;
    cin >> f;
    switch(f){
        case 1:
         soma(myV1,myV2);
         break;
        case 2:
        ordenar(myV1,myV2);
        break;
        case 3:
        media(myV1,myV2);
        break;
        default:
        cout << "opereção invalida" << endl;
        return 0;
    }

}
void soma(vector<int> &v1, vector<int> &v2){
    for(size_t i=0;i<5;i++){
          v1[i] += v2[i];
    }
    for(auto El : v1){
        cout << El << "\t";
    }
}

void ordenar(vector<int> &v1, vector<int> &v2){
    sort(v1.begin(),v1.end());
    for(auto El : v1){
        cout << El << "\t";
    }
    cout << endl;
    sort(v2.begin(),v2.end());
    for(auto El : v2){
        cout << El << "\t";
    }
}

void media(vector<int> &v1, vector<int> &v2){
    float media1=0;
    float media2 =0;
    for(size_t i=0;i<5;i++){
        media1 += v1[i];
        media2 = media2 + v2[i];
    }
    cout << "media1:\t" << media1/5 << endl;
    cout << "media2:\t" << media2/5 << endl;
}
