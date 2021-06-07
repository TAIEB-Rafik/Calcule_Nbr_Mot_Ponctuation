#include <stdio.h>
#include <string.h>

int main()
{
  char str[100];
  int i, count = 1, countPonctuation=0;

  printf("Entrer une chaîne de caractère :  ");
  gets(str);

  for(i = 0; str[i] != '\0'; i++)
  {
    if(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
    {
      count++;
    }
    switch(str[i])
{
    case '?':
    case ':':
    case '.':
    case ',':
    case ';':
    case '!':
    case '-':
    case '(':
    case ')':
    case '[':
    case ']':countPonctuation++;


}
  }
  printf("Le nombre total de mots dans cette chaine est = %d", count);
  printf("\nLe nombre total de ponctuation dans cette chaine est = %d", countPonctuation);

  return 0;
}
