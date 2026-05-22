#include <stdio.h>
int main(int argc, char *argv[]) {
    if(argc < 2) {
        return 0;
    }
    const char* filename = argv[1];
    char buffer[256] = {0};
    FILE *file = fopen(filename, "r");
    if(file == NULL) {
        return 0;
    }
    fgets(buffer, sizeof(buffer), file);
    fclose(file);
    printf("%s\n", buffer);
    return 0;
}
