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

int ReverseNumber(int num1, short num2)
{
    int remainder = 0;
    int degits = 0;
    while (num1 > 0)
    {
        remainder = num1 % 10;
        num1 /= 10;

        if (remainder == num2)
            degits++;

        
    }
    return degits;
}
void PrintAlldigits(int num)
{
    for (int i = 0; i < 10;i++)
    {
        short digtfr = 0;
        digtfr = ReverseNumber(num, i);

        if (digtfr != 0)
        {
            cout << i << " frequancy is : " << digtfr << endl;
        }
    }
}


int main()
{
    int num1 = ReadPositiveNumber("enter the main number : ");

    PrintAlldigits(num1);
