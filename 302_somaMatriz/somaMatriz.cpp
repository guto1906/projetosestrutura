/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   somaMatriz.cpp
 * Author: guto
 *
 * Created on 23 de Fevereiro de 2017, 20:30
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 2-) Ler valores inteiros para a matriz A[3][5].
 * Gerar e imprimir o vetor Soma_Linha, onde cada elemento é a soma
 * dos elementos de uma linha da matriz A. Faça o trecho que gera a matriz
 * separadamente da entrada e saída.
 */
int main(int argc, char** argv) {

    int linha[3][5];
    int soma[3];    
    cout << "Entre com um numero 15 numeros \n";    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j< 5; j++){
            cin >> linha[i][j];            
        }
    }
    cout << "\n Matriz \n";
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j< 5; j++){
            cout << linha[i][j] << " ";            
        }
         cout << "\n";
    }
    
    
    cout << "\n Resultado \n";
    for(int i = 0; i < 3; i++){
        soma[i]= 0;
        for(int j = 0; j< 5; j++){
        soma[i] += linha[i][j];            
        }
        cout << "Soma da linha " << i+1 << " = " << soma[i]<<"\n";
    }
}

