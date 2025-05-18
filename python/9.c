#include<stdio.h>
// int palindrome(int a)
// {
//     int c=0;
//     while (a>=0)
//     {
//        c=c+a;
//         printf("%d",c);
//     }
//     if(c==a)
//     {
//         printf("it is a palindrome number %d",a);
//     }
// else{
//      printf("it is not  a palindrome number %d",a);
// }

// }
int main()
{
    int a;

    printf("enter number");
    scanf("%d",&a);
    int c=0;
for (int i = a; i>0; i=i/10)

{
    c=(c*10)+(i%10);
   
    /* code */
}

  
    if(c==a)
    {
        printf("it is a palindrome number %d",a);
    }
else{
     printf("it is not  a palindrome number %d",a);
}

    
}