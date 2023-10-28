#include "utilizadores.h"

typedef struct utilizador
{
    char* id;
    char* name;
    char* email;
    char* phone_number;
    char* birth_date;
    char* sex;
    char* passport;
    char* country_code; 
    char* address;
    char* account_creation;
    char* pay_method;
    enum ACCOUNTSTATUS account_status;
} Utilizador;

// definir setter e getters e outras funçoes
