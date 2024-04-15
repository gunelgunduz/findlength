
#include <stdio.h>
int findLength(char*);
int main()
{
    char message[100];
    puts("Enter a sentence:");
    gets(message);
     printf("Length:%d\n", findLength(message));
    return 0;
}

int findLength(char* ptr){
 return strlen(ptr);
}
