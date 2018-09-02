#include "3.h"
#include <stdio.h>
#include <string.h>

void car_init(struct Car *car) {
	strcpy(car->license_plate, "Unknown");
}

int main() {
  struct Car c1;
  car_init(&c1);
  printf("Plate Number: %s\n", c1.license_plate);


  return 0;
}
