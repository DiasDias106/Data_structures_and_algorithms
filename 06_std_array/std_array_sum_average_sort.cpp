#include<iostream>
#include<array>
using namespace std;
void soma(array<int,5> &a1, array<int,5> &a2){
      for(size_t i=0;i<5;i++){
        a1[i] += a2[i];
      }
      for(auto El : a1){
        cout << El << "\t";
      }
}

void media(array<int,5> &a1, array<int,5> &a2){
    float media1 =0;
    float media2 =0;
    for(size_t i=0;i<5;i++){
        media1 += a1[i];
        media2 += a2[i];
    }
    cout << "media1:\t" << media1/5 << endl;
    cout << "media2:\t" << media2/5 << endl;
}

void ordena(array<int,5> &a1, array<int,5> &a2){
    int dim1 = a1.size();
    int dim2 = a2.size();
    for(size_t i=0;i<dim1-1;i++){
        for(size_t j=0;j<dim1-1-i;j++){
           if(a1[j] > a1[j++]){
           swap(a1[j], a1[j++]);
           }
        }
    }
     for(size_t i=0;i<dim2-1;i++){
        for(size_t j=0;j<dim2-1-i;j++){
           if(a2[j] > a2[j++]){
           swap(a2[j], a2[j++]);
           }
        }
    }
    for(auto El : a1){
        cout << El << "\t" ;
    }
    cout << endl;
    for(auto El : a2){
        cout << El << "\t";
    }
}
int main(){
    array<int,5> myA = {10,20,30};
    array<int,5> myA1;
    int op;
    cout << "introduza os 2 ultimos elementos" << endl;
    for(size_t i=3;i<5;i++){
        cin >> myA[i];
    }
    for(auto El : myA){
        cout << El << "\t";
    }
    cout << endl;
    cout << "introduza 5 numeros para o segundo contentor" << endl;
    for(size_t i=0;i<5;i++){
        cin >> myA1[i];
    }
    for(auto El : myA1){
        cout << El << "\t";
    }
    cout << endl;
    cout << "introduza uma opcao" << endl;
    cin >> op;
    switch(op){
        case 1:
        soma(myA,myA1);
        break;
        case 2:
        media(myA,myA1);
        break;
        case 3:
        ordena(myA,myA1);
        break;
        default:
        cout << "numero invalido" << endl;
        return 0;
    }
}