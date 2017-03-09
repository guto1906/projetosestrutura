/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   transposta.cpp
 * Author: guto
 *
 * Created on 23 de Fevereiro de 2017, 20:42
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 3-) Criar uma matriz 2x3. Gerar e imprimir a transposta dessa matriz.
 * A matriz transposta é gerada trocando linha por coluna.
 */
int main(int argc, char** argv) {

    int matriz[2][3];
    int transposta[3][2];
    
    cout << "entre com 6 numeros \n";
    
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            cin >> matriz[i][j];
            transposta[j][i] = matriz[i][j];
        }
    }
    
    cout << "Matriz \n";
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            cout << matriz[i][j] << " ";
        }
        cout << "\n";
    }  
    
    
    cout << "Transposta \n";
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            cout << transposta[i][j] << " ";
        }
        cout << "\n";
    }  
    
}

