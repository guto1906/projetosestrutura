/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   produtodiagonal.cpp
 * Author: guto
 *
 * Created on 23 de Fevereiro de 2017, 21:28
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 *5-) Ler os elementos de uma matriz de ordem 6 e imprima o produto dos
 *  elementos que estão abaixo da diagonal principal. 
 */

int main(int argc, char** argv) {

    int matriz[6][6];
    int multiplicacao = 1;
    
    cout << "entre com 36 numeros \n";
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            cin >> matriz[i][j];
    
        }
    
    }
    
    cout << "entre com 36 numeros \n";
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            while(i != j && i < j){
            multiplicacao *= matriz[i][j];
            }    
        }
    
    }
    
    cout << "\n Mutliplicacao = " << multiplicacao;
}

