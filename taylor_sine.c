#include "taylor_sine.h"
#include <math.h>

//Hjælpe funktion til at beregne fakultetet
double factorial(int num) {
  double fact = 1;
  for (int i = 1; i <= num; i++) {
    fact *=i;
  }
  return fact;
}


double taylor_sine(double x, int n) {
  if (n < 1){
  //Hvis antallet af terms "n" er mindre end 1, returner -1(fejl)
  return -1.0;
}

double sine = 0.0; //Initialiser til 0

//Udregning af "sine" ved brug af Taylor-rækker op til "n" terms
for (int i = 0; i < n; i++) {
  //Taylor-række term (-1)^i * x^(2i+1) / (2i+1)!
  double term = (pow(-1, i) * pow(x, 2 * i + 1)) / factorial(2 * i + 1);
  sine += term; //Læg hvert term til "sine" result
}

return sine;

}