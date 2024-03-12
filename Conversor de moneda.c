#include <studio.h>

#define TC_DOLLAR_GTQ 7.75
#define TC_EURO_GTQ 8.54

int main() {
    int opcion;
    float cantidad;

    prinf("Bienvenido al conversor de moneda\n");
    prinf("1. Convertir de Dolares a Quetzales\n");
    prinf("2. Convertir de Quetzales a Dolares\n");
    prinf("3. Convertir de Quetzales a Euros\n");
    prinf("4. Convertir de Euros a Quetzales\n");
    scanf("%d", &opcion);

    switch(opcion) {
        case 1:
            prinf("Ingrese la cantidad de Dolares: ");
            scanf("%f", &cantidad);
            prinf("%2.f USD equivale a %.2f USD\n", cantidad, cantidad * C_DOLLAR_GTQ);
            break;
        case 2:
            prinf("Ingrese la cantidad de Quetzales: ");
            scanf("%f", &cantidad);
            prinf("%2.f GTQ equivale a %.2f USD\n", cantidad, cantidad / TC_DOLLAR_GTQ);
            break;
        case 3:
            prinf("Ingrese la cantidad de Quetzales: ");
            scanf("%f", &cantidad);
            prinf("%2.f GTQ equivale a %.2f EUR\n", cantidad, cantidad / TC_EURO_GTQ);
            break;
        case 4:
            prinf("Ingrese la cantidad de Euros: ");
            scanf("%f", &cantidad);
            prinf("%2.f EUR equivale a %.2f GTQ\n", cantidad, cantidad * TC_EURO_GTQ);
            break;
        default:
            prinf("Opcion no valida\n")
    }
return 0;
}