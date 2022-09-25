// Write a program to count the number of vowels and consonants in a string using a
// pointer.
#include<stdio.h>
int main()
{
    char str[20];
    printf("Enter string fo find vowels and consonants: ");
    fflush(stdin);
    fgets(str,20,stdin);
    vowels_consonants(str);

}
void vowels_cononants( char *str)
{
   
        for(char ch;str[ch];ch++)
        {
             if( *str=='a' || *str=='i' || *str=='i' || *str=='o' || *str=='u' || *str=='A'||*str=='E'||*str=='I'||*str=='O'||*str=='U')
        {
            printf("%c",str[ch]);
        }
    }
    
}