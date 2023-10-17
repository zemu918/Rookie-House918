#include <iostream>
#include <stdio.h>
#include <unistd.h>
 
void usage(){
    std::cout << "Usage: " << std::endl;
    std::cout << "\tOptDemo [-a] [-b] [-c message]" <<std::endl;
}
 
int main(int argc, char *argv[]) {
    int o;
    const char *optstring = "abc::"; 
    while ((o = getopt(argc, argv, optstring)) != -1) {
        switch (o) {
            case 'a':
                printf("opt is a, oprarg is: %s\n", optarg);
                break;
            case 'b':
                printf("opt is b, oprarg is: %s\n", optarg);
                break;
            case 'c':
                printf("opt is c, oprarg is: %s\n", optarg);
                break;
            case '?':
                printf("Correct use of the method \n");
                usage(); 
                break;
        }
    }
    return 0;
}
