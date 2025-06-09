#ifndef ESTAGIARIO_H
#define ESTAGIARIO_H


#include "Funcionario.h"
#include <iostream>

class Estagiario : public Funcionario {
private:
    int horasTrabalhadas;

public:
    void setHorasTrabalhadas(int horas);
    int getHorasTrabalhadas() const;

    float calcularSalarioFinal() const override;
    void exibirInformacoes() const override;
};

#endif