int ReadNumber(string msg)
{
    int num;
    do
    {
        cout << msg << endl;
        cin >> num;
    } while (num < 0);

    return num;
}

void ReversedPrint(int num)
{
    int remainder = 0;

    while (num > 0)
    {
        remainder = num % 10;
        num /= 10;
        cout << remainder << endl;
    }
    
}


int main()
{
    ReversedPrint(ReadNumber("enter the number value : "));
