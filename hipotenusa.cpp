#include <cstdlib>
#include <iostream>
#include <cmath>
#include <stdio.h>      /* printf */

using namespace std;

int main(int argc, char** argv) {

  string raptor_prompt_variable_zzyz;
  double hipotenusa;
  int cat_1, cat_2;

  raptor_prompt_variable_zzyz = "Valor del cateto 1";
  cout << raptor_prompt_variable_zzyz << endl; cin >> cat_1;

  raptor_prompt_variable_zzyz = "Valor del cateto 2";
  cout << raptor_prompt_variable_zzyz << endl; cin >> cat_2;

  hipotenusa = sqrt(cat_1 * cat_1 + cat_2 * cat_2);
  cout << "La hiponenusa es: " << hipotenusa << endl;

  system("PAUSE");
  return EXIT_SUCCESS;
}
