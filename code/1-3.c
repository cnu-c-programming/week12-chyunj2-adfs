#include <stdio.h>
int main(int argc, const char* argv[], const char* envp[]) {

    const char** e = envp;
    while (*e)
    {
        printf("%s\n", *e);
        e++;
    }
    
    
    return 0;
}
