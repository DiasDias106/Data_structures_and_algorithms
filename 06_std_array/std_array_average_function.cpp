#include<iostream>
#include<array>
using namespace std;
void media(array<int,4>&A){
    float media=0;
    for(size_t i=0;i<4;i++){
        media += A[i];
    } 
    cout << "Media" << media/4;
}
int main(){
    array<int,4> myA1;
    cout << "introduza 4 numeros" << endl;
    for(size_t i=0;i<4;i++){
        cin >> myA1[i];
    }
    media(myA1);
}