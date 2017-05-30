#include <stdio.h>
#include <stdlib.h>

char * getPwd(void) {
  static char extension[1024];
                                                                                                         
  FILE *fp = popen("pwd", "r");                                                                                                 
  fscanf(fp, "%s", extension);                                                                                                  
  pclose(fp);
 
  return extension;
}
