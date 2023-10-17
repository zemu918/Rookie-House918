#include <stdio.h>
#include <unistd.h>
int main(int argc, char* argv[])
{
    int tmp = 4;
   
    while( (tmp = getopt(argc, argv, "abck")) != -1  )
    {
           
           printf("-%c\t", tmp);
           int opt = optind ;
           while( opt < argc )
           {
                  if ( argv[opt][0] != '-' )
                  {
                       printf("%s\t", argv[opt]);
                       opt ++;
                  }
                  else
                      break;
           }
           printf("\n");
    }
    getchar();
}
