#include<stdio.h>

#include "./interpreter/interpreter.h"

int main(int argc, char **argv)
{
    if (argc == 1)
    {
        printf("Modo interativo \n");
        // chamar modulo interpreter
        modoInterativo();
        
        for (int i = 0; i < argc; ++i)
        {
            printf("argv[%d]: %s\n", i, argv[i]);
        }

    } else if(argc == 3) 
    {
        printf("Modo batch \n");
        modoBatch(argv[1], argv[2]);

        for (int i = 0; i < argc; ++i)
        {
            printf("argv[%d]: %s\n", i, argv[i]);
        }
    } else {
        printf("Erro no número de parametros \n");
        return 1;
    }
}