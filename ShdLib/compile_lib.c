#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char ** argv) {
  char * file = argv[1];
  char * lib = argv[2];
  char buf[1024];
  char extension[1024];

  FILE *fp = popen("pwd", "r");
  fscanf(fp, "%s", extension);
  pclose(fp);

  snprintf(buf, sizeof(buf), "gcc -L%s -Wall -o a.out %s -l%s", extension, file, lib);

  system(buf);
}
