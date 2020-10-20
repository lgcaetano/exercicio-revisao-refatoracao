#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado {

  public:

	
    Vendedor (std::string nome, double salario, double quota) : Empregado (nome, salario){
      //Empregado (nome, salario);
	  _quotaMensalVendas = quota;
    }

	void setQuotaMensalVendas (double quota){
		_quotaMensalVendas = quota;
	}
    
	double getQuotaMensalVendas () {
		return _quotaMensalVendas;
	}

	double quotaTotalAnual() {
	  return getQuotaMensalVendas() * 12;
	}

	
    virtual void print (double horas) override{
      std::cout << "Nome: " << getNome() << std::endl;
      std::cout << "Salario Mes: " << pagamentoMes(horas) << std::endl;
      std::cout << "Quota vendas: " << quotaTotalAnual() << std::endl;  
      std::cout << std::endl;
    } 

  protected:
	double _quotaMensalVendas;
};

