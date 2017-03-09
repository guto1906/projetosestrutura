/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: guto
 *
 * Created on 14 de Fevereiro de 2017, 21:30
 */

#include <cstdlib>
#include <iostream>



using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int altura;
    int base;
        
    cout << "Valor da Base = ";
    cin >> base;
    cout << endl;
    cout << "Valor da Altura = ";
    cin >> altura;
    cout << endl;
    
    if(base > 0 && altura > 0){
        cout << "Area do Retângulo = " << base*altura;
    } else{
        cout << "A base e a Altura não podem ser menores ou iguais a zero";
        cout << endl;
    }
}

