// 2.4.6

unsigned strlen(const char *str)
{
    int i = 0;
    while (str[i]!= '\0') i++;
    return(i);
}

// 2.4.7

void strcat(char *to, const char *from)
{
    int i = 0;
    while (to[i]!= '\0') i++;
    
    int k = 0;
    while (from[k]!= '\0') k++;
    for (int j = i; j < i + k + 1; j++)
        to[j] = from[j - i];
}