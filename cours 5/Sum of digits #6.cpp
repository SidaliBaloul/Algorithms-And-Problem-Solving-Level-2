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

int calculate(int num)
{
    int remainder = 0;
    int sum = 0;
    while (num > 0)
    {
        remainder = num % 10;
        num /= 10;
        sum += remainder;
    }
    return sum;
}


int main()
{
    cout << "sum of digits = " << calculate(ReadPositiveNumber("enter the number value : "));
