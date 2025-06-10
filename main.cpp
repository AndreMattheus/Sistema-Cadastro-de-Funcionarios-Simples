// main.cpp
#include <iostream>
#include <vector>
#include <memory>
#include <limits>
#include <iomanip>
#include "Funcionario.h"
#include "Desenvolvedor.h"
#include "Gerente.h"
#include "Estagiario.h"

int main() {
    const int capacidade = 10;
    const int minimoCadastro = 6;
    std::vector<std::unique_ptr<Funcionario>> funcionarios;
    funcionarios.reserve(capacidade);

    int quantidadeCadastro;
    do {
        std::cout << "Quantos funcionários deseja cadastrar? (mínimo " << minimoCadastro << ", máximo " << capacidade << "): ";
        std::cin >> quantidadeCadastro;

        if (quantidadeCadastro < minimoCadastro || quantidadeCadastro > capacidade) {
            std::cout << "Quantidade inválida. Por favor, escolha entre " << minimoCadastro << " e " << capacidade << ".\n";
        }
    } while (quantidadeCadastro < minimoCadastro || quantidadeCadastro > capacidade);

    std::cout << "\nCadastro de Funcionários\n";

    while ((int)funcionarios.size() < quantidadeCadastro) {
        std::cout << "\nFuncionário #" << funcionarios.size() + 1 << "\n";
        std::cout << "Tipos disponíveis:\n";
        std::cout << "1 - Desenvolvedor\n";
        std::cout << "2 - Gerente\n";
        std::cout << "3 - Estagiário\n";
        int tipo;
        std::cout << "Escolha o tipo: ";
        std::cin >> tipo;

        if (tipo < 1 || tipo > 3) {
            std::cout << "Tipo inválido. Tente novamente.\n";
            continue;
        }

        // Dados comuns
        int id;
        std::string nome;
        float salarioBase;
        std::cout << "ID: ";
        std::cin >> id;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Nome: ";
        std::getline(std::cin, nome);
        std::cout << "Salário base: ";
        std::cin >> salarioBase;

        // Dados específicos do tipo
        std::unique_ptr<Funcionario> f;
        if (tipo == 1) {
            int qtdProj;
            std::cout << "Quantidade de projetos: ";
            std::cin >> qtdProj;
            auto dev = std::make_unique<Desenvolvedor>();
            dev->setQuantidadeDeProjetos(qtdProj);
            f = std::move(dev);
        }
        else if (tipo == 2) {
            float bonus;
            std::cout << "Bônus mensal: ";
            std::cin >> bonus;
            auto ger = std::make_unique<Gerente>();
            ger->setBonusMensal(bonus);
            f = std::move(ger);
        }
        else {
            int horas;
            std::cout << "Horas trabalhadas (no mês): ";
            std::cin >> horas;
            auto est = std::make_unique<Estagiario>();
            est->setHorasTrabalhadas(horas);
            f = std::move(est);
        }

        // Configuração dos dados comuns
        f->setId(id);
        f->setNome(nome);
        f->setSalarioBase(salarioBase);

        funcionarios.push_back(std::move(f));
        std::cout << "Funcionário cadastrado com sucesso!\n";
    }

    // Exibindo relatórios
    std::cout << "\n=== Relatório de Funcionários ===\n";
    for (const auto& f : funcionarios) {
        f->exibirInformacoes();
        std::cout << std::fixed << std::setprecision(2);
        std::cout << "Salário final: R$ " << f->calcularSalarioFinal() << "\n\n";
    }

    return 0;
}