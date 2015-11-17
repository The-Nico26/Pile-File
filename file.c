#include <stdio.h>
#include <stdlib.h>
#include "file.h"

struct Element{
 TYPE_VARIABLE valeur;
 Element *next;
};
struct File{
 Element *first;
 Element *last;
};

File *f_init(){
 File *file = malloc(sizeof(File));
 f_secuFile(file);
 file->first = NULL;
 file->last = NULL;
 return file;
}

void f_enfiler(File *file, TYPE_VARIABLE valeur){
 f_secuFile(file);
 Element *add = malloc(sizeof(Element));
 f_secuElement(add);
 add->valeur = valeur;
 add->next = NULL;

 if(file->first == NULL){
  file->first = add;
 }else{
  file->last->next = add;
 }

 file->last = add;
}

TYPE_VARIABLE f_defiler(File *file){
 f_secuFile(file);
 TYPE_VARIABLE valeur = NULL;
 if(file->first != NULL){
  Element *element = file->first;
  valeur = element->valeur;
  file->first = element->next;

  free(element);
 }
 return valeur;
}

void f_toString(File *file){
 f_secuFile(file);
 if(file->first == NULL){
  printf("La file est vide\n");
  return;
 }
 Element *element = file->first;
 printf("Etat de la file :\n");
 while(element != NULL){
  printf("%d ", element->valeur);
  element = element->next;
 }
 printf("\n");
}
void f_secuFile(File *file){
 if(file == NULL)
  exit(EXIT_FAILURE);
}

void f_secuElement(Element *element){
 if(element == NULL)
  exit(EXIT_FAILURE);
}
