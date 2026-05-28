#include <stdio.h>

int main(int argc, const char* argv[]) {
    if (argc < 3)
        return 0;
char c[1024];
    while (fgets(c, sizeof(c), fp_src) != NULL) {
        fputs(c, fp_dst);
    }

}

