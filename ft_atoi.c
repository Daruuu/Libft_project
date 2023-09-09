
#include "libft.h"
/*
#include <stdlib.h>
#include <stdio.h>*/

int ft_atoi(const char *str)
{
	int		i;
	int		number;
	int		counter;

	i = 0;
    number = 0;
    counter = 0;
	while (str[i] && (str[i] == 32 || (str[i] >= 9 && str[i] <= 13)))
		i++;
	while (str[i] && (str[i] == '-' || str[i] == '+'))
    {
        if(str[i] == '-')
            counter++;
        i++;
    }
    while (str[i] >= 48 && str[i] <= 57)
    {
        number = (number * 10) + (str[i] - '0');
        i++;
    }
    if (counter % 2 == 0)
        counter = 1;
    else
    {
        counter = -1;
    }
	return (number * counter);
}

/*int main() {
    // Casos de prueba
    const char *test_cases[] = {
            "12345",
            "-+6789",
            "   42",
            "0",
            "-0",
            "   +999",
            "   -123abc",
            "   12 34", // Espacios en medio del número
            "",         // Cadena vacía
            "abc123",   // Cadena no numérica
            "   - 789", // Signo seguido de espacio
            "   + 123", // Signo seguido de espacio
    };

    // Resultados esperados
    int expected_results[] = {
            12345,
            +6789,
            42,
            0,
            0,
            999,
            -123,
            12,
            0, // La cadena vacía debe devolver 0
            0, // La cadena no numérica debe devolver 0
            0, // Casos con signo seguido de espacio deben devolver 0
            0,
    };

    int num_test_cases = sizeof(test_cases) / sizeof(test_cases[0]);

    // Realizar las pruebas
    for (int i = 0; i < num_test_cases; i++) {
        const char *test_case = test_cases[i];
        int expected_result = expected_results[i];

        int result = ft_atoi(test_case);

        printf("Cadena: \"%s\" -> Resultado esperado: %d, Resultado real: %d\n", test_case, expected_result, result);

        // Compara con la función atoi de la biblioteca estándar
        int atoi_result = atoi(test_case);
        if (result != atoi_result) {
            printf("ERROR: Los resultados de ft_atoi y atoi difieren para la cadena: \"%s\"\n", test_case);
        }
    }

    return 0;
}*/