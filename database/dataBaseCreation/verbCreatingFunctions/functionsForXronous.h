#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct allData{

    int  length;
    char *word;
    char *xorisKataklida;
    char *AxorisKataklida;
    char *xorisKataklidaLT;
    char *xorisKataklidaPT;

};

char* deleteKataklida(char* word);
int stringToInt(char a[]);
char *afaireshTonou(char *sulabi);
char *prosthesiTonou(char *sulabi);
int isPhoneien(char *sulabi);

char* atono(char* wcreator);
char* teleutaioTonismeno(char* wcreator);
char* protoTonismeno(char* wcreator);
