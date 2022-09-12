#pragma once
#include <iostream>
#include "Estado.hpp"

class EstadoMC : public Estado{
private:
    int mD; //missionario margem direita
    int cD; //canibais margem direita
    int mE; //missionario margem esquerda
    int cE; //canibais margem esquerda
    char barco; //onde barco esta
    bool ePermitido(int mE, int cE, int mD, int cD, char barco);
    Estado * levar2Missionarios();
   
public:
    EstadoMC(int mE, int cE, int mD, int cD, char barco);
    bool eObjetivo() = 0;
list<Estado *> expandir() = 0;
void imprimeEstado();
};
