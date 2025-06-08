#ifndef DESENVOLVEDOR_HPP
#define DESENVOLVEDOR_HPP

#include "Funcionario.h"

class Desenvolvedor : public Funcionario {
private:
    int quantidadeDeProjetos;

public:
    void setQuantidadeDeProjetos(int qtd);
    int getQuantidadeDeProjetos() const;

    float calcularSalarioFinal() const override;
    void exibirInformacoes() const override;
};

#endif

