int ReadNumber()
{
    int num;
    cin >> num;

    return num;
}

int Myabs(int num)
{
    if (num > 0)
        return num;
    else
        return num * -1;
}
int main()
{
    float number = ReadNumber();
    cout << "c++ abs : " << abs(number) << endl;
    cout << "my abs : " << Myabs(number) << endl;
