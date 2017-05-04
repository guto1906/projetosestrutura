/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Estacionamento.h
 * Author: guto
 *
 * Created on 27 de Abril de 2017, 21:33
 */

#ifndef ESTACIONAMENTO_H
#define ESTACIONAMENTO_H
#include <iostream>

using namespace std;

class Estacionamento {
public:
    Estacionamento();
    Estacionamento(const Estacionamento& orig);
    virtual ~Estacionamento();
    int dia, horaEntrada, horaSaida;
    
    void EntradaDados(){
        cout<<"entre com o dia, a hora da entrada e a hora da saida \n";
        cin >> dia >> horaEntrada >> horaSaida;
    }
    int CalculaDiaria(){
        int total = (horaSaida - horaEntrada)*5;
        return total;
    }
    
private:

};

#endif /* ESTACIONAMENTO_H */

