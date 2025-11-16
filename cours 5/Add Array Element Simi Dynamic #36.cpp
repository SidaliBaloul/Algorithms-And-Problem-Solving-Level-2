int ReadNumber()
{
    int num;
    cout << "enter a number : " << endl;
    cin >> num;

    return num;
}
void SumLength(int num,int arr[100], int &length)
{
    length++;
    arr[length - 1] = num;
    
}
void Check(int arr[100], int &length)
{
    bool c = true;
    do
    {
        SumLength(ReadNumber(), arr, length);
        cout << "do u want to add more numbers [0] : no | [1] : yes" << endl;
        cin >> c;
    } while (c);
}
void Print(int arr[100], int length)
{
    for (int i = 0; i < length; i++)
        cout << arr[i] << " ";
}
int main()
{
    int arr[100], arrlength = 0;

    Check(arr, arrlength);

    cout << "array length " << arrlength << endl;

    cout << "Array elements : " << endl;
    Print(arr, arrlength);
