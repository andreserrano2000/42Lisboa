char ft_memset(void *str, int c, int size){
    char *res;
    int a = 0;
    char *string = str;

    while (size != 0)
    {
        res[a] = 'c';
        a++;
        size--;
    }
    while (string[a] != '\0')
    {
        res[a] = string[a];
        a++;
    }
    return(res);
}