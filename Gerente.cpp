#include <iostream>
#include "Gerente.h"
using namespace std;

// Implementação dos métodos da classe Gerente

float Gerente::calcularSalarioFinal() {
    return salarioBase + bonusMensal;
}

void Gerente::setBonusMensal(float bonus) {
    this->bonusMensal = bonus;
}

float Gerente::getBonusMensal() {
    return bonusMensal;
}

void Gerente::exibirInformacoes() {
    Funcionario::exibirInformacoes();
    cout << "Tipo: Gerente " << endl;
    cout << "Bônus: " << getBonusMensal() << endl;
    cout << "Salário final: " << calcularSalarioFinal() << endl;
}