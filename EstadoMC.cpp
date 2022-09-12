#include "EstadoMC.hpp"

using namespace std;

EstadoMC::EstadoMC(int mE, int cE, int mD, int cD, char barco){
    this->mE = mE;
    this->cE = cE;
    this->mD = mD;
    this->cD = cD;
    this->barco = barco;
}

bool EstadoMC::eObjetivo(){
    return this->mE == 0 && this->cE == 0 &&
           this->mD == 3 && this->cD == 3 &&
           this->barco == 'd';
}

bool EstadoMC::bool ePermitido(int mE, int cE, int mD, int cD, char barco){
    if(barco == this -> barco)
        return false;
    
    return (mE >= cE || (mE == 0 && cE > 0)) && (mD >= cD || (mD == 0 && cD > 0 ));
    
}

list<Estado *> EstadoMC::expandir(){
    return NULL;
}

void EstadoMC::imprimeEstado(){
    cout << this->mE << "M |  | " << this->mD << "M" << endl;
   
    if(this->barco == "e"){
        cout << "   |* |" << endl;
    }else{
        cout << "   | *|" << endl;
    }
    cout << this->cE << "C |  | " << this->cD << "C" << endl << endl;
}
