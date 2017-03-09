/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   somadiagonal.cpp
 * Author: guto
 *
 * Created on 23 de Fevereiro de 2017, 20:10
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 1-)Criar uma matriz de ordem 4 e exibir a soma da diagonal principal.
 */
int main(int argc, char** argv) {

    int diagonal[4][4];
    int soma = 0;
    cout << "Entre com um numero 16 numeros \n";    
    for(int i = 0; i < 4; i++){
        for(int j = 0; j< 4; j++){
            cin >> diagonal[i][j];            
        }
    }
    cout << "\n Matriz \n";
    
    for(int i = 0; i < 4; i++){
        for(int j = 0; j< 4; j++){
            cout << diagonal[i][j] << " ";            
        }
        cout << "\n";
    }
    
    for(int i = 0; i < 4; i++){
        soma += diagonal[i][i];                 
        
    }
    cout << "\n Resultado";
    cout << "Soma Diagonal = " << soma;
}

