#include <iostream>
#include "No.hpp"
#include "Estado.hpp"
#include <stack>  // para busca em profundidade
#include <list>
using namespace std;

int main(){
	stack <No *> pilha;
	
	Estado * inicial; // Não tem implementação ainda...
	
	No * atual = new No(inicial);
	
	pilha.push(atual);
	
	while(!atual->getEstado()->eObjetivo()){
		
		pilha.pop();
		
		list<Estado *> filhos = atual->getEstado()->expandir();
		for(list<Estado *>::iterator it = filhos.begin(); it != filhos.end(); it++){
			Estado * filho = *it;
			No * novaFolha = new No(filho, atual);
			pilha.push(novaFolha);
		}
		atual = pilha.top();
	}
	
	return 0;
}
