#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado {

  public:

	void setQuotaMensalVendas (double quota){
		_quotaMensalVendas = quota;
	}
    
	double getQuotaMensalVendas () {
		return _quotaMensalVendas;
	}

	double quotaTotalAnual() {
	  return getQuotaMensalVendas() * 12;
	}

  protected:
	double _quotaMensalVendas;
};

