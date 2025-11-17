//5.	Write a program that takes a set of names of individuals and abbreviates the first, middle and other names except the last name by their first letter.
#include <stdio.h>
#include <string.h>
int main() {
    char name[100];
    printf("Enter full name: ");
    gets(name);
    int i=0;
    printf("Abbreviated name: ");
    if(name[0] != ' ')
        printf("%c.", toupper(name[0]));
    while(name[i]!='\0') {
        if(name[i]==' ' && name[i+1]!='\0' && name[i+1]!=' ') {
            if(strchr(name+i+1, ' ') != NULL)
                printf("%c.", toupper(name[i+1]));
            else {
                printf("%s", name+i+1);
                break;
            }
        }
        i++;
    }
    return 0;
}
