#include <iostream>
#include "Funcionario.h"
#include "Desenvolvedor.h"
using namespace std;

// Implementação dos métodos da classe Desenvolvedor

void Desenvolvedor::setQtdProjetos(int qtd) {
    this->qtdProjetos = qtd;
}

int Desenvolvedor::getQtdProjetos() {
    return qtdProjetos;
}

float Desenvolvedor::calcularSalarioFinal() {
    return salarioBase + (500.0f * qtdProjetos);
}

void Desenvolvedor::exibirInformacoes() {
    Funcionario::exibirInformacoes();
    cout << "Tipo: Desenvolvedor" << endl;
    cout << "Projetos: " << getQtdProjetos() << endl;
    cout << "Salário final: " << calcularSalarioFinal() << endl;
}
