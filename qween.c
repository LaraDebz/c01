#include <unistd.h>
#include <stdio.h>

void fill_map(int map[10][10])
{
    int i;
    int j;

    i=0;
    while (i<10)
    {
        map[i][0]=i;
    }
    i=0;
    while (i<10)
    {
        j=0;
        while(++j<10)
            map[i][j]=-1;
        i++;
    }
}
void print_map(int map[][10])
{
    int i;
    int j;

    i=0;
    while (i<10)
    {
        j=0;
        while(j<10)
        {
            printf("%d ",map[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }

}
void ft_clear(int *s)
{
    int i;

    i=-1;
    while(++i<10)
        s[i]=-1;
}

void ft_print(int *str)
{
    int i;

    i=-1;

    while(++i<10)
    {

        printf("%d ", str[i]);
    }
    printf("\n");

}


int *ft_var(int *s,int col)
{
int i;
int j;
int *var[10]={0,1,2,3,4,5,6,7,8,9};


i=-1;
while(++i<col)
{
    j=-1;
    while(++j<10)
    {
        if (s[i]==var[j])
            var[j]=-1;
    }
}
i=-1;
while (++i<10)
{
    j=-1;
    while (++j<col)
    {
        if (var[i]!=-1 && (var[i]==s[j]+col-j || var[i]==s[j]-col+j))
            var[i]=-1;

    }
}
printf("var %s\n", var);
return(var);

}
int ft_is_ok(int k, int map[10][10])
{
    int i;

    i=-1;
    while(++i<10)
    {
        if (s[k]!=-1)
            return(1);
    }
    return(0);
}

int *var(int map[10][10])
{
    int i;
    int j;
    int *var[10];

    i=0;
    j=0;
    while (i < 10 && ft_is_ok(i, map)==1)
        i++;
    if (i==9)

    {
        i--;
        j=-1;
        while (m[i][++j]!=-1)
        ft_var=s[i]=j;
        if (ft_is_ok)

    }
}

void start(int map[10][10])
{
int i;
int s[10]={};

i=-1;
while(++i<10)
    map[0][i]=i;
s[0]=0;

}


int main()
{
int i;

int map[10][10];


fill_map(map);
print_map(map);

}
