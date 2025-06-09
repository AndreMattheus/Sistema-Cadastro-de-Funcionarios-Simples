#include "Gerente.h"
#include <iostream>


float Gerente::calcularSalarioFinal() const {
    return salarioBase + bonusMensal;
}



void Gerente::setBonusMensal(float bonus) {
    bonusMensal = bonus;
}

float Gerente::getBonusMensal() const {
    return bonusMensal;
}

void Gerente::exibirInformacoes() const{
    Funcionario::exibirInformacoes();
    cout << "Tipo: Gerente " << endl;
    cout << "Bônus: " << bonusMensal << endl;
    cout << "Salário final: " << calcularSalarioFinal() << endl;
}

