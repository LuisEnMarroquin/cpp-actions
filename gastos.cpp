#include <iostream>
#include <string>

using namespace std;
int main() {
  int g1, g2, g3, g4, g5, ingreso, ingresosanuales, egresosanuales, final;
  string d1, d2, d3, raptor_prompt_variable_zzyz;

  raptor_prompt_variable_zzyz ="Gasto renta/hipoteca";
  cout << raptor_prompt_variable_zzyz << endl;
  cin >> g1;
  raptor_prompt_variable_zzyz ="Gasto transporte/gasolina";
  cout << raptor_prompt_variable_zzyz << endl;
  cin >> g2;
  raptor_prompt_variable_zzyz ="Gasto comidas/despensa";
  cout << raptor_prompt_variable_zzyz << endl;
  cin >> g3;
  raptor_prompt_variable_zzyz ="Gasto servicios públicos (luz, agua, gas, Internet)";
  cout << raptor_prompt_variable_zzyz << endl;
  cin >> g4;
  raptor_prompt_variable_zzyz ="Otros gastos";
  cout << raptor_prompt_variable_zzyz << endl;
  cin >> g5;
  raptor_prompt_variable_zzyz ="Ingreso mensual";
  cout << raptor_prompt_variable_zzyz << endl;
  cin >> ingreso;
  raptor_prompt_variable_zzyz ="Cual es su nombre";
  cout << raptor_prompt_variable_zzyz << endl;
  cin >> d1;
  raptor_prompt_variable_zzyz ="Cual es su edad";
  cout << raptor_prompt_variable_zzyz << endl;
  cin >> d2;
  raptor_prompt_variable_zzyz ="Cual es el año actual";
  cout << raptor_prompt_variable_zzyz << endl;
  cin >> d3;
  ingresosanuales =ingreso * 12;
  egresosanuales = g1 + g2 + g3 + g4 + g5;
  final =ingresosanuales-egresosanuales;
  if (final>500) {
    cout << "Felicidades, usted ha tenido buenos resultados financieros" << endl;
  } else {
    cout << "Usted no ha tenido buenos resultados financieros" << endl;
  }
  cout << "Su nombre es " + d1 + " de " + d2 + " años de edad, al año " + d3 << endl;
  system("PAUSE");
  return 0;
}
