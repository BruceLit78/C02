int ipssi_atoi(char *str)
{
    int i;
    int sign_count;
    int sign;
    int result;

    i = 0;
    sign_count = 0;
    result = 0;
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
           str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
        i++;
    while (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign_count++;
        i++;
    }
    sign = (sign_count % 2 == 0) ? 1 : -1;
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return (result * sign);
}
