#include <stdio.h>
#include "amdahl.h"

int main() {
  float alpha = 0.0;
  float oldTime = 0.0;
  float factor = 0.0;
  float newTime = 0.0;
  float spdup = 0.0;

  printf("Enter old time: ");
  scanf("%f", &oldTime);

  printf("Enter alpha: ");
  scanf("%f", &alpha);

  printf("Enter factor: ");
  scanf("%f", &factor);

  newTime = tnew(alpha, oldTime, factor);
  printf("New time = %f\n", newTime);

  spdup = speedup(alpha, factor);
  printf("Speedup = %f\n", spdup);
}
