#include<stdio.h>
#include<conio.h>

int A[5],top=-1;
void push()
{
    int i;
    if(top==4)
        printf("\n\n\t STACK OVERFLOW...");
    else
    {
        top++;
        printf("\n\n\t ENTER THE VALUE TO PUSH IN STACK : ");
        scanf("%d",&A[top]);
        printf("\n\n\t RESULTANT STACK IS : \n\n");
        for(i=top;i>=0;--i)
        {
            printf("\t %d\n",A[i]);
        }
    }
}

void pop()
{
    int i;
    if(top==-1)
        printf("\n\n\t STACK UNDERFLOW...");
    else
    {
        printf("\n\n\t THE POPPED VALUE IS : %d",A[top]);
        top--;
        if(top==-1)
            printf("\n\n\t THE RESULTANT IS EMPTY...");
        else
        {
            printf("\n\n\t RESULTANT STACK IS :\n\n");
            for(i=top;i>=0;--i)
            {
                printf("\t %d\n",A[i]);
            }
        }
    }
}

int main()
{
    int ch;
    do
    {
        printf("\n\n\t ********MENU********");
        printf("\n\n\t 1.PUSH.");
        printf("\n\n\t 2.POP.");
        printf("\n\n\t 3.EXIT.");
        printf("\n\n\t ********************");
        printf("\n\n\t ENTER YOUR CHOICE(1-3) : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 : push();
                     printf("\n\n\t PRESS ANY KEY TO CONTINUE...");
                     getch();
                     break;
            case 2 : pop();
                     printf("\n\n\t PRESS ANY KEY TO CONTINUE...");
                     getch();
                     break;
        }
    }while(ch!=3);
    return 0;
}
