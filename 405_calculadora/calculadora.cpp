/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   calculadora.cpp
 * Author: guto
 *
 * Created on 9 de Março de 2017, 21:44
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 5- Desenvolver um programa onde você entre via teclado com dois valores
 *  quaisquer  e após a digitação o usuário escolha um seletor de opção
 *  (menu) com as seguintes opções:
 * Multiplicação;
 * Adição;
 * Divisão;
 * Subtração;
 * Fim do processo;
 * Obs. Criar uma função para cada opção e dentro do case chamar as funções respectivamente.
 */
double calculando(double a, double b, char o){
    double r;
    switch (o){
        case 'x':
            r = a*b;
            break;
        case '/':
            r = a/b;
            break;
        case '+':
            r = a+b;
            break;
        case '-':
            r = a-b;
            break;
    }
    
    return r;

}

int main(int argc, char** argv) {
    double a, b;
    char op;
    cout << "Entre com dois numeros \n";
    cin >> a;
    cin >> b;
    cout << "Entre com a operação (x, /, +, -) \n";
    cin >> op;
    cout << a <<" "<< op <<" "<< b <<" = "<<calculando(a, b, op);
    
}

