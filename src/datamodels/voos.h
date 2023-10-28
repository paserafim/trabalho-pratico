#ifndef VOOS_H
#define VOOS_H

typedef struct voo Voo;

// funções getter e setters
char * getId(Voo* voo);
char * setId(Voo* voo, char* airline);

#endif