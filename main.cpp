#include <iostream>

using namespace std;

template<typename T>
struct nodo{
    T value;
    nodo<T> *next = nullptr;
};

int main()
{
    cout << "Hello World!" << endl;

    //  creacion de la lista
    /*nodo<int> cabeza;
    nodo<int> * elemento;


    elemento = &cabeza;
    for(int i=0; i<10000; i++){
        elemento->next = new nodo<int>;
        elemento= elemento ->next;
    }

    elemento = &cabeza;
    int value = 0;

    while( elemento != nullptr){
        elemento->value=value++;
        elemento = elemento ->next;
    }*/


    //
    nodo<string> cabeza;
    nodo<string> * elemento;


    elemento = &cabeza;
    for(int i=0; i<10000; i++){
        elemento->next = new nodo<string>;
        elemento= elemento ->next;
    }

    elemento = &cabeza;
    int count =0;
    string sValue = "Holi";

    while( elemento != nullptr){
        elemento->value=sValue+std::to_string(count++);
        elemento = elemento ->next;
    }

    // liberador de punteros
    elemento = &cabeza;
    elemento = elemento->next;

    while(elemento != nullptr){
        nodo <string> *listaBorrar= elemento->next;
        delete elemento;
        elemento= listaBorrar;

    }

    return 0;
}
