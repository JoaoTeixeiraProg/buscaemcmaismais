#include "No.hpp"

No::No(Estado * estado){
	this->estado = estado;
	this->pai = NULL;
}
	
No::No(Estado * estado, No * pai){
	this->estado = estado;
	this->pai = pai;
}
	
Estado * No::getEstado(){
	return this->estado;
}

No * No::getPai(){
	return this->pai;
}
