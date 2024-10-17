#include <string>

class Motocikl {
public:
  Motocikl();
  Motocikl(std::string proizvodac, std::string model, int zapremnina);

  void setZapremnina(int zapremnina);

private:
  std::string proizvodac;
  std::string model;
  int zapremnina;
};