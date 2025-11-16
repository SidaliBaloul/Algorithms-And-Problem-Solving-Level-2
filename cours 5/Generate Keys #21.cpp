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
int RandomNumber(int from, int to)
{
    int randnum = rand() % (to - from + 1) + from;
    return randnum;
}
string RandomKey(short length)
{
    string word = "";
    for (int i = 0; i < length; i++)
    {
        word += char(RandomNumber(65, 90));
    }

    return word;
}
string Generate(short length)
{
    string key = "";
    
    key += RandomKey(length) + "-";
    key += RandomKey(length) + "-";
    key += RandomKey(length) + "-";
    key += RandomKey(length);

    return key;
}
void GenerateKeys(int num,short length)
{
    for (int i = 1; i <= num; i++)
    {
        cout << " Key [" << i << "] : " << Generate(length) << endl;
    }
}



int main()
{
    srand((unsigned)time(NULL));
    short length = 4;
    GenerateKeys(ReadPositiveNumber("enter key number : "), length);
