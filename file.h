typedef struct Element Element;
typedef struct File File;
#define TYPE_VARIABLE int

File *f_init();
void f_enfiler(File *file, TYPE_VARIABLE valeur);
TYPE_VARIABLE f_defiler(File *file);
void f_toString(File *file);
void f_secuFile(File *file);
void f_secuElement(Element *element);
