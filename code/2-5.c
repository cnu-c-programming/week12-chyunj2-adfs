#include <stdio.h>

int main(int argc, const char* argv[]) {
    if (argc < 3)
        return 0;
char c;
    while ((c = fgetc(fp_src)) != EOF) {
        fputc(c, fp_dst);
    }

}

