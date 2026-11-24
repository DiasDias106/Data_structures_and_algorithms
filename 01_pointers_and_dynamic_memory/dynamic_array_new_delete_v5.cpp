#include<iostream>
using namespace std;
// criar um programa em que usemos alocação de memoria dinamica para armazenar espaço para um pointer
int main(){
    int tot;
    int *pnum = nullptr;
    cout << "introduza o total\n";
    cin >> tot;
    pnum = new(nothrow) int[tot];
    if(!pnum) return 8;
    for(size_t i=0;i<tot;i++){
        cout << "introduza numero: \t";
        cin >> pnum[i];
    }
     for(size_t i=0;i<tot;i++){
        cout << pnum[i] << endl;
     }
}