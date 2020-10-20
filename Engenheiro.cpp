#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado {

  public:

    
    Engenheiro (std::string nome, double salario, int projetos) : Empregado (nome, salario){
      //Empregado(nome, salario);
      _numProjetos = projetos;
    }


    void setNumProjetos (int projetos){
      _numProjetos = projetos;
    }

    int getNumProjetos (){
      return _numProjetos;
    }

    virtual void print (double horas) override{
      std::cout << "Nome: " << getNome() << std::endl;
      std::cout << "Salario Mes: " << pagamentoMes(horas) << std::endl;
      std::cout << "Projetos: " << getNumProjetos() << std::endl;  
      std::cout << std::endl;
    } 

  protected:

	  int _numProjetos; // indica a quantidade de projetos em que o engenheiro está envolvido
	
};

