#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char ** argv) {
  if (argc != 2) {
    printf("Error: One cmdline arg");
  }
  else {
    char rm[100];
    char buf1[100];
    char buf2[100];
    char * lib = argv[1];

    //Stores the current directory path into a string variable
    /*
    char extension[1024];
    FILE *fp = popen("pwd", "r");
    fscanf(fp, "%s", extension);
    pclose(fp);
    */

    snprintf(rm, sizeof(rm), "rm %s.o", lib);
    snprintf(buf1, sizeof(buf1), "gcc -c -Wall -Werror -fpic %s.c", lib);
    snprintf(buf2, sizeof(buf2), "gcc -shared -o lib%s.so %s.o", lib, lib);
    
    /* This Piece of code is used to test a main.c file to see
       if the library functions properly
    */
    //snprintf(buf3, sizeof(buf3), "gcc -L%s -Wall -o test main.c -l%s", extension, lib);

    System(buf1);
    system(buf2);
    system(rm);
    //system(buf3);
  }
}
