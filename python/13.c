
#include<stdio.h>
#include<string.h>
int romantointeger(char c)
{
    switch (c)
    {
    case 'D':
    {
        return 500;
        break;
    }
    case'M':
    {
        return 1000;
        break;
    }
    case'L':
    {
        return 1000;
        break;
    }
    case 'C':
    {
        return 100;
        break;
    }
    case 'X':
    {
        return 10;
        break;
    }
    case 'V':
    {
        return 5;
        break;
    }
    case 'I':
    {
        return 1;
        break;
    }
        
    
    default:
        break;
    }         
}
int main(){
    char s[30];
    printf("enter roman number ");
    gets(s);
   int n=strlen(s);
   int l=0;
   for (int  i = 0; i < n; i++)
   {
   
    if(romantointeger(s[i])<romantointeger(s[i+1]))
    {
       l=l-romantointeger(s[i]);
    }
    else
    {
        l=l+romantointeger(s[i]);
    } 
//  printf("\nKFYK\n");
   }
   
    printf("%d",l);
}