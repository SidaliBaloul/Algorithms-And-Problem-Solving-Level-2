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

void PatternNumber(int num)
{
    for (int i = 65 ; i <= 65 + num - 1; i++)
    {
        for (int j = 1; j <= num - (65 + num - 1 - i); j++)
        {
            cout << char(i);
        }
        cout << endl;
    }
}

int main()
{

    PatternNumber(ReadPositiveNumber("enter a number : "));
