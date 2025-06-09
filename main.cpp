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

    std::cout << "Cadastro de Funcion�rios (m�nimo " << minimoCadastro << ", m�ximo " << capacidade << ")\n";

    while ((int)funcionarios.size() < minimoCadastro) {
        std::cout << "\nFuncion�rio #" << funcionarios.size() + 1 << "\n";
        std::cout << "Tipos dispon�veis:\n";
        std::cout << "1 - Desenvolvedor\n";
        std::cout << "2 - Gerente\n";
        std::cout << "3 - Estagi�rio\n";
        int tipo;
        std::cout << "Escolha o tipo: ";
        std::cin >> tipo;

        if (tipo < 1 || tipo > 3) {
            std::cout << "Tipo inv�lido. Tente novamente.\n";
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
        std::cout << "Sal�rio base: ";
        std::cin >> salarioBase;

        // Dados espec�ficos do tipo
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
            std::cout << "B�nus mensal: ";
            std::cin >> bonus;
            auto ger = std::make_unique<Gerente>();
            ger->setBonusMensal(bonus);
            f = std::move(ger);
        }
        else {
            int horas;
            std::cout << "Horas trabalhadas (no m�s): ";
            std::cin >> horas;
            auto est = std::make_unique<Estagiario>();
            est->setHorasTrabalhadas(horas);
            f = std::move(est);
        }

        // Configura��o dos dados comuns
        f->setId(id);
        f->setNome(nome);
        f->setSalarioBase(salarioBase);

        funcionarios.push_back(std::move(f));
        std::cout << "Funcion�rio cadastrado com sucesso!\n";
    }

    // Exibindo relat�rios
    std::cout << "\n=== Relat�rio de Funcion�rios ===\n";
    for (const auto& f : funcionarios) {
        f->exibirInformacoes();
        std::cout << std::fixed << std::setprecision(2);
        std::cout << "Sal�rio final: R$ " << f->calcularSalarioFinal() << "\n\n";
    }

    return 0;
}