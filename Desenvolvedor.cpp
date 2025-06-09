#include "Desenvolvedor.h"
#include <iostream>

// Implementa��o dos m�todos de Desenvolvedor.h

void Desenvolvedor::setQuantidadeDeProjetos(int qtd) {
    quantidadeDeProjetos = qtd;
}

int Desenvolvedor::getQuantidadeDeProjetos() const {
    return quantidadeDeProjetos;
}

float Desenvolvedor::calcularSalarioFinal() const {
    return salarioBase + (500.0f * quantidadeDeProjetos);
}

void Desenvolvedor::exibirInformacoes() const {
    Funcionario::exibirInformacoes();
    cout << "Tipo: Desenvolvedor" << endl;
    cout << "Projetos: " << quantidadeDeProjetos << endl;
    cout << "Sal�rio final: " << calcularSalarioFinal() << endl;
}
