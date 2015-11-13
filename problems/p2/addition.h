static int methodFor(int n)
{
    int ans = 0;
    for(int a=0; a<=n; ++a)
        ans += a;
    return ans;
}

static int methodWhile(int n)
{
    int count = 0;
    int ans = 0;
    while(count<=n)
    {
        ans += count;
        ++count;
    }
}

static int methodRecurse(int n)
{
    int ans = 0;
    if (n == 1)
        return (1);
    else
        ans = n + methodRecurse(n - 1);
    return (ans);
}
