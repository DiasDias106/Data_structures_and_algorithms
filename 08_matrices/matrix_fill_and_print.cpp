#include<iostream>
#include<vector>
using namespace std;
int main(){
   vector<vector<int>> myV1(5, vector<int>(3));
   cout << "introduza 15 numeros" << endl;
   for(size_t i=0;i<5;i++){
    for(size_t j=0;j<3;j++){
        cin >> myV1[i][j];
    }
   }
    /*for (auto& row : myV1) {
        for (auto& el : row) {
            cout << el << "\t";
        }
        cout << endl;
    }*/ //usando o auto para ler a matriz
    for(size_t i=0;i<5;i++){
    for(size_t j=0;j<3;j++){
        cout <<  myV1[i][j] << "\t";
    }
   }
}