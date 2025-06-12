#ifndef ESTAGIARIO_H
#define ESTAGIARIO_H
#include "Funcionario.h"

class Estagiario : public Funcionario {
private:
    int horasTrabalhadas;

public:
    void setHoras(int horas);
    int getHoras();

    float calcularSalarioFinal();
    void exibirInformacoes();
};

#endif