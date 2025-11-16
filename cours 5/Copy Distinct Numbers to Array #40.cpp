void FillArray(int arr[100], int &length)
{
    length = 10;
    arr[0] = 10;
    arr[1] = 10;
    arr[2] = 50;
    arr[3] = 50;
    arr[4] = 70;
    arr[5] = 70;
    arr[6] = 70;
    arr[7] = 70;
    arr[8] = 70;
    arr[9] = 90;
}
int FindNumberPosition(int num, int arr[100], int arrlength)
{
    for (int i = 0; i < arrlength;i++)
    {
        if (arr[i] == num)
            return 1;
    }
    return -1;
}
bool IsNumberInArray(int num, int arr[100], int arrlength)
{
    return FindNumberPosition(num, arr, arrlength) != -1;
}
void AddArrayElement(int num, int arr[100], int &length)
{
    length++;
    arr[length - 1] = num;
}
void Check(int arr[10],int arr2[10],int arrlength, int &length)
{
    for (int i = 0; i + 1 <= arrlength; i++)
    {
        if (!IsNumberInArray(arr[i],arr2,length))
        {
            AddArrayElement(arr[i], arr2, length);
        }
    }
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
    FillArray(arr, length);
    cout << "Array 1 elements : " << endl;
    PrintArray(arr, length);

    cout << endl << endl;

    int arr2[10];
    int arr2length = 0;

    Check(arr, arr2,length,arr2length);

    cout << "Array 2 elements : " << endl;
    PrintArray(arr2, arr2length);
