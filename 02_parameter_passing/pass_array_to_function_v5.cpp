#include<iostream>
using namespace std;
void soma2(int num[],int dim);
void soma3(int *pnum, int dim);
int main(){
    int num[5];
    cout << "preencha o array" << endl;
    int dim = sizeof(num)/sizeof(num[0]);
    for(size_t i=0;i<5;i++){
        cin >> num[i];
    }
    soma2(num,dim);
    soma3(num,dim);
}

void soma2(int nume[],int dim){
    for(size_t i=0;i<dim;i++){
        nume[i] = 2 * nume[i];
    }

    cout << endl;
    for(size_t i=0;i<dim;i++){
        cout << "numero" << i+1 <<"\t" << nume[i] << endl; 
    }
}

void soma3(int *pnum, int dim){
    for(size_t i=0;i<dim;i++){
          pnum[i] = 2 * (pnum[i]);
    }
    for(size_t i=0;i<dim;i++){
        cout << "numero" << i+1 <<"\t" << pnum[i] << endl; 
    }
}