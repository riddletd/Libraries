#include <stdio.h>
#include "extension.h"

int main() {
  char * buf;

  buf = getPwd();
  printf("%s", buf);

}
