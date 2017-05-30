#include <stdio.h>

float tnew(float alpha, float oldTime, float factor) {
  return ((1 - alpha) * oldTime) + ((alpha * oldTime) / factor);
}

float told(float newTime, float alpha, float factor) {
  //TODO                                                                                                                          
  return 0.0;
}

float speedup(float alpha, float factor) {
  return 1 / ((1 - alpha) + (alpha / factor));
}
