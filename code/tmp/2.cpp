int nxt[210000];
inline void cal_next(string &str)
{
    nxt[0] = -1;
    int k = -1;
    for (int q = 1; q < str.size(); q++)
    {
        while (k > -1 && str[k + 1] != str[q])
            k = nxt[k];
        if (str[k + 1] == str[q])
        k = k + 1;
    nxt[q] = k;
    }
}
int KMP(string &a, string &b)
{
    cal_next(b);
    int k = -1;
    for (int i = 0; i < a.size(); i++)
    {
        while (k > -1 && b[k + 1] != a[i])
            k = nxt[k];
        if (b[k + 1] == a[i])
            k = k + 1;
        if (k == b.size() - 1)
            return i;
    }
    return -1;
}