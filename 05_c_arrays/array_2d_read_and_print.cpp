#include<iostream>
using namespace std;
int main(){
    int numero[5][3];
    for(size_t i=0;i<5;i++){
        for(size_t j=0;j<3;j++){
            cin >> numero[i][j];
        }
    }
     for(size_t i=0;i<5;i++){
        for(size_t j=0;j<3;j++){
            cout << "numeros:"<< numero[i][j] << endl;
        }
    }
    
}