#include<stdio.h>
int main()
{
    char user[100],condition;
    int i=0;
    printf("Enter the input: ");
    gets(user);
    printf("If you want to encrypt press e\n If you want to decrypt press d\n ");
    scanf("%c",&condition);
    if(condition == 'e')
    {
         while(user[i] != '\0')
         {
            user[i]=user[i]+4;
            i++;
         }
         printf("%s",user);
    }
    elsez
    {
        while(user[i] != '\0')
        {
            user[i]=user[i]-4;
            i++;
        }
        printf("%s",user);
    }
    return 0;
}