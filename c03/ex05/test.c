unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int de_size;
    unsigned int sr_size;
    unsigned int i;

    i = 0;
    de_size = ft_strlen(dest);
    sr_size = ft_strlen(src);

    if (size <= de_size)
        return (sr_size + size);

    while (de_size + i + 1 < size && src[i] != '\0')
    {
        dest[de_size + i] = src[i];
        i++;
    }
    dest[de_size + i] = '\0';

    return (de_size + sr_size);
}
