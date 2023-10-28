#include "voos.h"

typedef struct voo
{
    char id[11];
    char* airline;
    char* plane_model;
    int total_seats;
    char* origin;
    char* destination;
    char* schedule_departure_date;
    char* schedule_arrival_date;
    char* real_departure_date;
    char* real_arrival_date;
    char* pilot;
    char* copilot;
    char* notes;
} Voo;

// Getters e Setters
char* getId(Voo* voo){
    return voo->id;
}

char * setId(Voo* voo, char* airline){
    voo->airline = airline;
}





