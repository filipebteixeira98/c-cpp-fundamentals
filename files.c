#include <stdio.h>
#include <errno.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  char buffer[255];
  FILE *file;
  file = fopen("file.txt","a+");

  if(file == NULL) fprintf(stderr,"%s\n",strerror(errno));
  else{
    fputs("Created a new file!",file);
    fgets(buffer,255,(FILE*)file);
    printf("%s\n",buffer);
    fclose(file);
  }

  return 0;
}
