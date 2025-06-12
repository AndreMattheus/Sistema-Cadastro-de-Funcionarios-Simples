#include <iostream>
#include "Funcionario.h"
#include "Estagiario.h"
using namespace std;

// Implementação dos métodos da classe Estagiário

void Estagiario::setHoras(int horas) {
    this->horasTrabalhadas = horas;
}

int Estagiario::getHoras() {
    return horasTrabalhadas;
}

float Estagiario::calcularSalarioFinal() {
    return salarioBase * (horasTrabalhadas / 160.0f);
};

void Estagiario::exibirInformacoes() {
    Funcionario::exibirInformacoes();
    cout << "Tipo: Estagiário " << endl;
    cout << "Horas trabalhadas: " << getHoras() << endl;
    cout << "Salário final: " << calcularSalarioFinal() << endl;
}