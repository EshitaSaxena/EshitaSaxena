/* ESHITA SAXENA
ROLL NO : BTECH/10223/19
IT*/


// Simple Calculator


#include <stdio.h>
int main() {
  char op;
  double no1, no2;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &op);
  printf("Enter two numbers: ");
  scanf("%lf %lf", &no1, &no2);
  // Here I a using switch case to calculate the two numbers according to the operator you select
  switch (op) {
    case '+':
      printf("%.1lf + %.1lf = %.1lf", no1, no2, no1 + no2);
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf", no1, no2, no1 - no2);
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf", no1, no2, no1 * no2);
      break;
    case '/':
      printf("%.1lf / %.1lf = %.1lf", no1, no2, no1 / no2);
      break;
    // operator doesn't match any case constant
    default:
      printf("Error! operator is not correct");
  }

  return 0;
}
