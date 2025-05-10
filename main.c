#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *cpu = fopen("/proc/stat", "r");
    if (!cpu) {
        perror("Erro ao abrir /proc/stat");
        return 1;
    }

    char buffer[1024];
    fgets(buffer, sizeof(buffer), cpu);
    printf("Uso da CPU (linha bruta): %s", buffer);

    fclose(cpu);
    return 0;
}
