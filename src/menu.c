#include "menu.h"

#include <stdio.h>
#include <stdlib.h>

const char* fnctns[] = {
    [1] = "f(x) = (x^2)(cosx) - 2x",
    [2] = "f(x) = (6 - (2/x^2))(e^(2+x)/4) + 1",
    [3] = "f(x) = x^3 - 3sen(x^2) + 1",
    [4] = "f(x) = x^3 + 6x^2 + 9.4x + 2.5",
};

void read_opc(unsigned* opc) {
    char bffr[100];
    scanf("%[^\n]%*c", bffr);
    (*opc) = (unsigned) (bffr[0] - '0');
    return;
}

void menu_funciones(unsigned* opc) {
    puts("\n# Seleccione la ecuacion a resolver");
    puts("\t1) f(x) = (x^2)(cosx) - 2x");
    puts("\t2) f(x) = (6 - (2/x^2))(e^(2+x)/4) + 1");
    puts("\t3) f(x) = x^3 - 3sen(x^2) + 1");
    puts("\t4) f(x) = x^3 + 6x^2 + 9.4x + 2.5");
    puts("\t5) Salir");

    while (printf("# [1,5]:"), read_opc(opc), (*opc) < 1 || 5 < (*opc)) {
        puts("# Opcion no valida");
    }
    return;
}

void menu_metodo(unsigned* opc, unsigned fnctn) {
    printf("\n# Funcion a resolver: %s\n", fnctns[fnctn]);
    puts("# Seleccione metodo a usar");
    puts("\t1) Metodo de Newton");
    puts("\t2) Metodo de la Secante");
    puts("\t3) Salir");

    while (printf("# [1,3]:"), read_opc(opc), (*opc) < 1 || 3 < (*opc)) {
        puts("# Opcion no valida");
    }
    return;
}