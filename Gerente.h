#ifndef GERENTE_H
#define GERENTE_H

#include "Funcionario.h"

class Gerente : public Funcionario {
    private:
        int bonusMensal;
    
    public:
        float calcularSalarioFinal() const override;
        void exibirInformacoes() const override;

        float getBonusMensal() const;
        void setBonusMensal(float bonus);

};


#endif