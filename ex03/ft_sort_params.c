#include <unistd.h>

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[1] != s2[i])
            return (s1[i] - s2[i]);
        i ++;
    }
    return (s1[i] -s2[i]);
}

void ft_swap(char **a, char **b)
{
    char *aux;

    aux = *a;
    *a = *b;
    *b = aux;
}

void ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        write(1, &str[i], 1);
        i ++;
    }
    write(1, "\n", 1);    
}

int main(int argc, char *argv[])
{
    int i;
    int j;

    i = 1;
    while (i < argc - 1)
    {
        j = 1;
        while (j < argc - i)
        {
            if (ft_strcmp(argv[j], argv[j + 1]) > 0)
                ft_swap(&argv[j], &argv[j + 1]);
            j ++;
        }
        i ++;
    }
    i = 1;
    while (i < argc)
    {
      ft_putstr(argv[i]);
      i ++;  
    }
    return (0);
}