string s = Convert.ToString(32, 2);
int finalResult = 0;
int soma = 0;
for (int i = 1; i < s.Length; i++)
{
    if (s[i] == '0')
    {
        soma++;
    }
    else if (s[i] == '1')
    {
        finalResult = finalResult > soma ? finalResult : soma;
        soma = 0;
    }
}
return finalResult;