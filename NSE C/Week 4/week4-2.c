#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

int main( void ) {

    // Define struct persoon
    struct persoon {
        char naam[50];
        int leeftijd;
    };

    struct persoon *p_str;
    int i;
    i = 0;

    // Allocate memory for struct
    p_str = (struct persoon *)malloc(sizeof(struct persoon));

    while(1) {
        // Ask for new person elements
        printf("\nGeef informatie op (<NAAM PERSOON> <LEEFTIJD PERSOON>) : ");
        // Scan the elements
        scanf("%s %d", (p_str + i)->naam, &(p_str + i)->leeftijd);
        i ++;
        // Print elements
        printf("\nNaam    Leeftijd\n");
        for (int n = 0; n != i; n++ ) {
            printf("%s\t%d\n", (p_str + n)->naam, (p_str + n)->leeftijd);
        }
        // Reallocate memory
        p_str = (struct persoon *)realloc(p_str, sizeof(struct persoon) + sizeof(struct persoon));
    }
}