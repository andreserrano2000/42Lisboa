int ft_strlen(char *str){
    int a = 0;
    while (str[a] != '\0')
    {
        a++;
    }
    return(a);
}