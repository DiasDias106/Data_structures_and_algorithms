#include<iostream>
using namespace std;
template<typename t, size_t n>
void listar(t(&arr)[n]){
    for(auto El: arr){
        cout << El << endl;
    }
}
int main(){
}