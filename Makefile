# Compila todos os arquivos para gerar o execut�vel final
all: Funcionarios

# Compila��o do execut�vel
Funcionarios: main.o Funcionario.o Desenvolvedor.o Gerente.o Estagiario.o
	g++ -Wall -o Funcionarios main.o Funcionario.o Desenvolvedor.o Gerente.o Estagiario.o

# Compila��o dos arquivos objeto
main.o: main.cpp Funcionario.h Desenvolvedor.h Gerente.h Estagiario.h
	g++ -Wall -c main.cpp

Funcionario.o: Funcionario.cpp Funcionario.h
	g++ -Wall -c Funcionario.cpp

Desenvolvedor.o: Desenvolvedor.cpp Desenvolvedor.h Funcionario.h
	g++ -Wall -c Desenvolvedor.cpp

Gerente.o: Gerente.cpp Gerente.h Funcionario.h
	g++ -Wall -c Gerente.cpp

Estagiario.o: Estagiario.cpp Estagiario.h Funcionario.h
	g++ -Wall -c Estagiario.cpp