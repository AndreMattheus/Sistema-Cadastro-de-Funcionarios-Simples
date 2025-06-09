#include "Estagiario.h"

void Estagiario::setHorasTrabalhadas(int horas) {
    horasTrabalhadas = horas;
}

int Estagiario::getHorasTrabalhadas() const {
    return horasTrabalhadas;
}

float Estagiario::calcularSalarioFinal() const{
    
    return salarioBase * (horasTrabalhadas / 160.0f);

};

void Estagiario::exibirInformacoes() const{
    Funcionario::exibirInformacoes();
    cout << "Tipo: Estagiário " << endl;
    cout << "Horas trabalhadas: " << horasTrabalhadas << endl;
    cout << "Salário final: " << calcularSalarioFinal() << endl;
}