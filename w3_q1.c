#include <stdio.h>
void main(){
   char line[150];
   int i,j;
   char a;
   printf("Enter a string: ");
   gets(line);
   printf("enter character to remove:");
   scanf("%c",&a);
    int len = strlen(line);
    for(i=0; i<len; i++)
    {
        if(line[i] == a)
        {
            for(j=i; j<len; j++)
            {
                line[j] = line[j+1];
            }
            len--;
            i--;
        }
    }
   printf("string after removal of character:%s",line);
}
   
