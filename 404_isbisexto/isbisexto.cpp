/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   isbisexto.cpp
 * Author: guto
 *
 * Created on 9 de Março de 2017, 21:26
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 4- Escreva uma função que receba o ano e retorne 1 se for bissexto e 0
 *  se não for. Um ano é bissexto quando divisível por 4, mas não por 100.
 *  Um ano também é bissexto quando divisível por 400.
 */

int bissexto(int i){
    int r = 0;
    if((i % 4) == 0 && (i % 100) != 0 || (i % 400) == 0){
        r = 1;
    }    
    return r;
}


int main(int argc, char** argv) {
    int a;
    cout << "Entre com o ano \n";
    cin >> a;
    cout <<"\n"<< bissexto(a);
    
}

