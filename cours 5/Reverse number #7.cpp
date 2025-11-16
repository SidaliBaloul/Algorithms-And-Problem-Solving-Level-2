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

int ReverseNumber(int num)
{
    int remainder = 0;
    int num2 = 0;
    while (num > 0)
    {
        remainder = num % 10;
        num /= 10; 
        num2 = num2 * 10 + remainder;
    }
    return num2;
}


int main()
{
    cout << ReverseNumber(ReadPositiveNumber("enter the number value : "));
