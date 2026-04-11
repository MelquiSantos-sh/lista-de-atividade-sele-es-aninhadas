#include <stdio.h>

int main()
{
    char a;

    printf("Drama?\nresponda com S ou N\n");
    scanf("%c", &a);

    if (a == 'S' || a == 's')
    {
        printf("Aventura");
        scanf(" %c", &a);
        if (a == 'S' || a == 's')
        {
            printf("Suspense");
            scanf(" %c", &a);
            if (a == 'S' || a == 's')
            {
                printf("Te indico LOST.\n");
            }
            else if (a == 'N' || a == 'n')
            {
                printf("Fantasia?");
                scanf(" %c", &a);
                if (a == 'S' || a == 's')
                {
                    printf("Te indico Game of Thrones\n");
                }
            }
        }
        else if (a == 'N' || a == 'n')
        {
            printf("MISTÉRIO?");
            scanf(" %c", &a);
            if (a == 'S' || a == 's')
            {
                printf("SCI-FI?");
                scanf(" %c", &a);
                if (a == 'S' || a == 's')
                {
                    printf("Te indico X-Files");
                }
                else if (a == 'N' || a == 'n')
                {
                    printf("Medico?");
                    scanf(" %c", &a);
                    if (a == 'S' || a == 's')
                    {
                        printf("Te indico House M.D");
                    }
                }
            }
        }
        else if (a == 'N' || a == 'n')
        {
            printf("Politico?");
            scanf(" %c", &a);
            if (a == 'S' || a == 's')
            {
                printf("Te indico House of Cards\n");
            }
        }
        else if (a == 'N' || a == 'n')
        {
            printf("crime?");
            scanf(" %c", &a);
            if (a == 'S' || a == 's')
            {
                printf("Te indico Braking Bad\n");
            }
        }
    }
    else if (a == 'N' || a == 'n')
    {
        printf("Comedia");
        scanf(" %c", &a);
        if (a == 'S' || a == 's')
        {
            printf("Besteirol?");
            scanf(" %c", &a);
            if (a == 'S' || a == 's')
            {
                printf("Te indico The Office\n");
            }

            else if (a == 'N' || a == 'n')

            {
                printf("Romance?");
                scanf(" %c", &a);
                if (a == 'S' || a == 's')
                {
                    printf("Te indico How I Met Your Mother\n");
                }
            }
            else if (a == 'N' || a == 'n')

            {
                printf("Musical?");
                scanf(" %c", &a);
                if (a == 'S' || a == 's')
                {
                    printf("Te indico Glee\n");
                }
            }
            else if (a == 'N' || a == 'n')

            {
                printf("Nerd?");
                scanf(" %c", &a);
                if (a == 'S' || a == 's')
                {
                    printf("Te indico The Big Bang Theory\n");
                }
            }
        }
    }
    else if (a == 'S' || a == 's')
    {
        printf("Acao?");
        scanf(" %c", &a);
        if (a == 'S' || a == 's')
        {
            printf("Drama?\n");
            scanf(" %c", &a);
            if (a == 'S' || a == 's')
            {
                printf("Misterio?\n");
                scanf(" %c", &a);
                if (a == 'S' || a == 's')
                {
                    printf("Te indico Homeland\n");
                }
                else if (a == 'N' || a == 'n')
                {
                    printf("Terror?\n");
                    scanf(" %c", &a);
                    if (a == 'S' || a == 's')
                    {
                        printf("Te indico american horror story\n");
                    }
                }
            }
            else if (a == 'N' || a == 'n')
            {
                printf("Policial?\n");
                scanf(" %c", &a);
                if (a == 'S' || a == 's')
                {
                    printf("Te indico The Rookie\n");
                }
                else if (a == 'N' || a == 'n')
                {
                    printf("Crime?\n");
                    scanf(" %c", &a);
                    if (a == 'S' || a == 's')
                    {
                        printf("Te indico Dexter\n");
                    }
                }
            }
        }
    }
    else
    {
        printf("invalido");
    }

    return 0;
}