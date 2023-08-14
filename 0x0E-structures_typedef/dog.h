#ifndef head
#define head
/**
 * defining a struct
 * name, type = char *
 * age, type = float
 * owner, type = char *
*/
struct dog
{
char *name;
float age;
char *owner;
};
typedef struct dog dog2;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog2 *new_dog(char *name, float age, char *owner);
void free_dog(dog2 *d);
#endif
