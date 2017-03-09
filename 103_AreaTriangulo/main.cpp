/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: guto
 *
 * Created on 14 de Fevereiro de 2017, 21:52
 */

#include <cstdlib>
#include <math.h>

using namespace std;

/*
 3. Crie um programa que solicite ao
 *  usuário os lados de um triângulo e informe a sua área.
 * Solução a forumla de Heron calcula a area em função dos lados
 * de um trinagulo
 * p = semiperimetro
 * p = (a+b+c)/2
 * S = area
 * S = raiz quadrada(p(p-a)(p-b)(p-c))
 * 
 */
int main(int argc, char** argv) {

    int l1;
    int l2;
    int l3;
    double p;
    double area;
            
    cout << "1º Lado = ";
    cin >> l1;
    cout << endl;
    
    cout << "2º Lado = ";
    cin >> l2;
    cout << endl;
    
    cout << "3º Lado = ";
    cin >> l3;
    cout << endl;
    
    p = (l1+l2+l3)/2;
    
    area = sqrt(p(p-l1)(p-l2)(p-l3));
    
    cout << "Area = " << area;
    cout << endl;
    
    
    
}

