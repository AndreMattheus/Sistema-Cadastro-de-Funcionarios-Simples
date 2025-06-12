#ifndef DESENVOLVEDOR_H
#define DESENVOLVEDOR_H
#include "Funcionario.h"

class Desenvolvedor : public Funcionario {
private:
    int qtdProjetos;

public:
    void setQtdProjetos(int qtd);
    int getQtdProjetos();

    float calcularSalarioFinal();
    void exibirInformacoes();
};

#endif