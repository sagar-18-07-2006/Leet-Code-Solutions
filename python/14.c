#include <stdio.h>
#include <string.h>
/*if we have to find longest prefix*/
int main()
{
  int n;
  printf("enter no of strings");
  scanf("%d", &n);
  char t[n][100];
  for (int i = 0; i < n; i++)
  {
    printf("enter string %d", i + 1);
    scanf("%s", t[i]);
  }
  char temp[100];
  for (int j = 0; j < n; j++)
  {
    /* code */

    for (int i = 0; i < n; i++)
    {
      if (strcmp(t[j], t[i]) < 0)
      {
        strcpy(temp, t[j]);
        strcpy(t[j], t[i]);
        strcpy(t[i], temp);
      }
      /* code */
    }
  }
  for (int i = 0; i < n; i++)
  {
    puts(t[i]);
    /* code */
  }

  char ans[100];

  for (int i = 0; i < n; i++)
  {
    if (t[0][i] != t[n - 1][i])
    {
         ans[i]='\0';
      break;
    }
    else
    {
      ans[i] = t[0][i];
    }
  }
  printf("%s is longest prefix", ans);

  return 0;
}