#ifndef GERENTE_H
#define GERENTE_H
#include "Funcionario.h"

class Gerente : public Funcionario {
    private:
        int bonusMensal;
    
    public:
        float calcularSalarioFinal();
        void exibirInformacoes();

        float getBonusMensal();
        void setBonusMensal(float bonus);

};


#endif