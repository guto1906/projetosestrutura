/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Teste.h
 * Author: guto
 *
 * Created on 27 de Abril de 2017, 21:22
 */

#ifndef TESTE_H
#define TESTE_H
#include <cstdlib>
#include <iostream>
using namespace std;

class Teste {
public:
    Teste();
    Teste(const Teste& orig);
    virtual ~Teste();
    int A, B;
    void receba(){
        cout << "Digite 2 números \n";
        cin >> A >> B;
    }
    int soma(){
        return A+B;
    }
    
    int sub(){
        return A-B;
    }
private:

};

#endif /* TESTE_H */

