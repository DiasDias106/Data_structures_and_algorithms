#include<iostream>
using namespace std;
void somaum(int arr[],int dim);
void soma1(int *pa, int dim);
int main(){
    int num[5];
    size_t dim = sizeof(num)/sizeof(num[0]);
    cout << "introduza 5 numeros:\t" << endl;
    for(size_t i=0;i<5;i++){
        cin >> num[i];
    }
    somaum(num,dim);
    soma1(num,dim);
}

void somaum(int arr[],int dim){
    for(size_t i=0;i<dim;i++){
        arr[i] ++;
    }
     for(size_t i=0;i<dim;i++){
        cout << arr[i] << "\t";
     }
     cout << endl;
}

void soma1(int *pa, int dim){
    for(size_t i=0;i<dim;i++){
        pa[i] = pa[i] +1;
    }
    for(size_t i=0;i<dim;i++){
        cout << pa[i] << "\t";
    }
    cout << endl;
}