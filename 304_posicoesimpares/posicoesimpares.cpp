/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   posicoesimpares.cpp
 * Author: guto
 *
 * Created on 23 de Fevereiro de 2017, 21:14
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 4-) Criar uma matriz de ordem 5 e imprima: toda a matriz e depois
 * os números que se encontram em posições cuja a linha mais a coluna
 * formam um número ímpar.
 */
int main(int argc, char** argv) {

    int matriz[5][5];
    
    cout << "entre com 25 numeros \n";
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> matriz[i][j];
    
        }
    
    }
    
    cout << "\n Matriz \n";
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cout << matriz[i][j] << " ";
    
        }
        
        cout << "\n";
    
    }
    
    cout << "\n Posicoes Impares \n";
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            int impar = i +j;
            if (impar % 2 != 0){
            cout << matriz[i][j] << " ";
            }
        }
    }
    
}

