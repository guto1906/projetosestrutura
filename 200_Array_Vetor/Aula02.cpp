/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: guto
 *
 * Created on 16 de Fevereiro de 2017, 19:19
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int vet[5];
    for(int i=0; i<5;i++){
        cout << "Digitar um nº ";
        cin >> vet[i];
    }
    cout << endl;
    cout << endl;
    for(int i=0; i<5;i++){
        cout << "Vet[" << i <<"] = "<< vet[i]<< endl;
        
    }
}

