#include <stdio.h>

#include "../datamodels/utilizadores.h"


void lerUsers(char* users)
{
    FILE *file;

    // ler parametros da linha de comandos

    // ler o ficheiro
    file = fopen("file.txt", "r");

    // se a leitura der erro retorna NULL
    if(file == NULL)
    {
        printf("Erro a ler o ficheiro\n");
        return 1;
    }

    // estrutura de utilizadores para guardar 100 students
    Utilizador utilizadores[100];

    //ler o conteudo do ficheiro
    int read = 0;
    int records = 0; // numero de records lidos
    do 
    {
        read = fscanf(file, "%c,%49[^,],%d, %lf\n", // ler 49 chars e para quando encontrar ","
                            &students[records].type,
                            students[records].name,
                            &students[records].age,
                            &students[records].average); 
        
        // verificar se leu as 4 colunas no ficheiro
        if (read == 4) records++;

        // verificar se leu mais do que 4 colunas e não chegou ao fim do ficheiro
        if (read != 4 && !feof(file)) {
            printf("O formato do ficheiro está incorreto\n");
            return 1;
        }
        // verificar se aconteceu um erro a ler o ficheiro
        if(ferror(file))
        {
            printf("Erro a ler o ficheiro\n");
            return 1;
        }

    }while(!feof(file)); // END-OF-FILE 

    fclose(file); // fechar o ficheiro

    printf("\n%d registos lidos.\n\n", records);

    for (int i = 0; i < records; i++)
    {
        printf("%c %s %d %.2f\n",
                students[i].type,
                students[i].name,
                students[i].age,
                students[i].average);
    }

    printf("\n");
}

void lerFlights(char* flights){}
void lerPassengers(char* passengers){}
void lerReservations(char* reservations){}