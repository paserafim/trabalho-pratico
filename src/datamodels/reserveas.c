#include "reservas.h"

typedef struct reserva
{
    char* id;
    char* user_id;
    char* hotel_id;
    char* hotel_name;
    int  hotel_stars;
    int city_tax;
    char* address;
    char* begin_date;
    char* end_date;
    int price_per_night;
    enum BREAKFAST includes_breakfast;
    char* room_details; 
    int rating;
    char* comment; 
} Reserva;

//getters e setters
