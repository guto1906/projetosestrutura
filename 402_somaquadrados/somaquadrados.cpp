/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   somaquadrados.cpp
 * Author: guto
 *
 * Created on 9 de Março de 2017, 20:40
 * 2- Calcule a soma dos quadrados de dois números fornecidos pelo usuário.
 *  Trabalhe com chamada de funções usadas como argumento de outras funções.
 * Dica: você vai criar 3 funções onde duas delas estarão dentro de uma.
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */

int somaquadrado(int a, int b){
    int q;
    q = (a*a) + (b*b);
    return q;

}
int main(int argc, char** argv) {
    
    int a, b;
    cout << "Entre com dois números \n";
    cin >> a;
    cin >> b;
    
    cout << "O soma dos quadrados = " << somaquadrado(a, b);    
}

