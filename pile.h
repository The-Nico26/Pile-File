typedef struct Element Element;
typedef struct Pile Pile;
#define TYPE_VARIABLE int

Pile *p_init();
void p_empiler(Pile *pile, TYPE_VARIABLE valeur);
TYPE_VARIABLE p_depiler(Pile *pile);
void p_toString(Pile *pile);
void p_secuPile(Pile *pile);
void p_secuElement(Element *element);
