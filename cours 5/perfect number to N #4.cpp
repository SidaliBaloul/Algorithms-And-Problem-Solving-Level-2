int ReadPositiveNumber(string msg)
{
    int num;
    do
    {
        cout << msg << endl;
        cin >> num;
    } while (num <= 0);

    return num;
}
bool CheckPerfectNumber(int num)
{
    int m = round(num / 2);
    int sum = 0;

    for (int i = 1; i <= m; i++)
    {
        if (num % i == 0)
            sum += i;
    }
    return num == sum;
}
void PrintResult(int num)
{
    for (int j = 1; j <= num; j++)
    {
        if (CheckPerfectNumber(j))
        {
            cout << j << endl;
        }
    }
}


int main()
{
    
    PrintResult(ReadPositiveNumber("enter the number value : "));
