#include<iostream>
using namespace std;
int main(){
    int num[5][3];
    cout << "introduza 15 numeros para o array" << endl;
    for(size_t i=0;i<5;i++){
        for(size_t j=0;j<3;j++){
            cin >> num[i][j];
        }
    }
    for(size_t i=0;i<5;i++){
        for(size_t j=0;j<3;j++){
            cout << num[i][j] << endl;
        }
    }
}