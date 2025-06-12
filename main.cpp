#include <iostream>
#include "Funcionario.h"
#include "Desenvolvedor.h"
#include "Gerente.h"
#include "Estagiario.h"

using namespace std;

int main() {
    const int CAPACIDADE = 10;
    Funcionario* funcionarios[CAPACIDADE] = { nullptr };

    int quantidade;
    do {
        cout << "Digite a quantidade de funcionários entre 6 e 10" << endl;

        cin >> quantidade;
        } while (quantidade < 6 || quantidade > CAPACIDADE);

    for (int i = 0; i < quantidade; i++) {
        int tipo;
        cout << "Digite o tipo de funcionario (1-GERENTE, 2-DESENVOLVEDOR, 3-ESTAGIARIO): " << endl;
        cin >> tipo;

        if (tipo < 1 || tipo > 3) {
            cout << "Tipo de funcionario invalido!" << endl;
            i--;
            continue;
        }

        string nome;
        int id;
        float salario;

        cout << "Digite o nome do funcionario: ";
        cin >> nome;
        cout << "Digite o id do funcionario: ";
        cin >> id;
        cout << "Digite o salario do funcionario: ";
        cin >> salario;

        switch (tipo) {
        case 1: {
            float bonus;
            cout << "Digite o bonus mensal do gerente: ";
            cin >> bonus;

            auto* gerente = new Gerente();
            gerente->setNome(nome);
            gerente->setId(id);
            gerente->setSalarioBase(salario);
            gerente->setBonusMensal(bonus);
            funcionarios[i] = gerente;
            break;
        }
        case 2: {
            int qtdProjetos;
            cout << "Digite a quantidade de projetos do desenvolvedor: ";
            cin >> qtdProjetos;

            auto* desenvolvedor = new Desenvolvedor();
            desenvolvedor->setNome(nome);
            desenvolvedor->setId(id);
            desenvolvedor->setSalarioBase(salario);
            desenvolvedor->setQtdProjetos(qtdProjetos);
            funcionarios[i] = desenvolvedor;
            break;
        }
        case 3: {
            int horas;
            cout << "Digite a quantidade de horas trabalhadas do estagiario: ";
            cin >> horas;

            auto* estagiario = new Estagiario();
            estagiario->setNome(nome);
            estagiario->setId(id);
            estagiario->setSalarioBase(salario);
            estagiario->setHoras(horas);
            funcionarios[i] = estagiario;
            break;
        }
        }
    }


    cout << "Funcionarios cadastrados :" << endl;
    for (int i = 0; i < quantidade; ++i) {
        if (funcionarios[i]) {
            funcionarios[i]->exibirInformacoes();
            cout << endl;
        }
    }

    for (int i = 0; i < quantidade; ++i) {
        delete funcionarios[i];
    }

    return 0;
}