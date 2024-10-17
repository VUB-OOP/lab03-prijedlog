#include "motocikl.h"

// DEFAULT CONSTRUCTOR
Motocikl::Motocikl() : Motocikl("", "", 0) {
}

// DODATNI CONSTRUCTOR
Motocikl::Motocikl(std::string proizvodac, std::string model, int zapremnina) : 
  proizvodac(proizvodac),
  model(model),
  zapremnina(zapremnina) {
}

// SETTER
void Motocikl::setZapremnina(int zapremnina) {
  this->zapremnina = zapremnina;
}
