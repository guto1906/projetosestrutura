/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   isprimo.cpp
 * Author: guto
 *
 * Created on 9 de Março de 2017, 20:54
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 *3- Um número primo é qualquer inteiro divisível por si próprio e por 1.
 * Escreva uma função que receba um inteiro positivo e, se este número
 *  for primo retorne 1, caso contrário retorne 0. 
 */

int primo(int i){
    int a;
    int b = 0;
    int j = 1;
    while (j <= i){
        if((i % j) == 0){
            b++;
        }    
        j++;
    } 
    if (b == 2 || i == 1){
        a = 1;
    
    } else {
        a = 0;    
    }
    
    return a;
}

int main(int argc, char** argv) {
    int par;
    cout << "Digite um numero \n";
    cin >> par;
    cout <<"\n"<< primo(par);
}

