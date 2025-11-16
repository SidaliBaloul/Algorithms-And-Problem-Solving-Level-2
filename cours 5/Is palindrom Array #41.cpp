void FillArray(int arr[100], int &length)
{
    length = 6;
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 30;
    arr[4] = 20;
    arr[5] = 10;
}
string Check(int arr[100], int length)
{
    for (int i = 0; i < length;i++)
    {
        if (arr[i] != arr[length - 1 - i])
        {
            return "No,it's not palindrom!";
        }
    }
    return "Yes , it is palindrom !";
}
void PrintArray(int arr[10], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int length = 0;
    int arr[100];
    int a, b;
    FillArray(arr, length);
    cout << "Array 1 elements : " << endl;
    PrintArray(arr, length);

    cout << endl << endl;

    cout << Check(arr, length);


    cout << endl << endl;
