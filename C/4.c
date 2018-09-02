#include "3.h"
#include "4.h"
#include <stdio.h>
#include <string.h>

void car_init2(struct Car *car, char *plate) { strcpy(car->license_plate, "Unknown"); }

int main() {
  struct Car c1;
  car_init(&c1);
  printf("Plate Number: %s\n", c1.license_plate);


  car_init2(&c1, "foo");
  printf("Plate Number: %s\n", c1.license_plate);
  return 0;
}
