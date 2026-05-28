#include <stdio.h>

int main(int argc, const char* argv[]) {
    if (argc < 3)
        return 0;
    FILE* fp_src = fopen(argv[1], "r");
    FILE* fp_dst = fopen(argv[2], "w");
char c[1024];
    while (fgets(c, sizeof(c), fp_src) != NULL) {
        fputs(c, fp_dst);
    }
 fclose(fp_src);
    fclose(fp_dst);
}

