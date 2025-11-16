enum enPrime {prime = 1, notprime = 2};

int RandomNumber(int from, int to)
{
    int randnum = rand() % (to - from + 1) + from;
    return randnum;
}

void ReadArrLength(int arr[100], int &arrlength)
{
    do
    {
        cout << "enter the array length" << endl;
        cin >> arrlength;
    } while (arrlength <= 0);

}
void GetArray(int arr[100], int arrlength)
{
    for (int i = 0; i <= arrlength; i++)
    {
        arr[i] = RandomNumber(1, 100);
    }
}

void PrintArray(int arr[100], int length)
{

    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
}
void SumArrays(int arr[100], int arr2[100],int arrlength,int arr3[100])
{
    for (int i = 0; i < arrlength;i++)
    {
        arr3[i] = arr[i] + arr2[i];
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100], arrlength;
    int arr2[100],arr3[100];
    
    ReadArrLength(arr, arrlength);

    cout << "Array 1 elements : " << endl;
    GetArray(arr, arrlength);
    PrintArray(arr,arrlength);

    cout << endl << endl;

    cout << "Array 2 elements : " << endl;
    GetArray(arr2, arrlength);
    PrintArray(arr2, arrlength);

    cout << endl << endl;

    cout << "Sum arrays is : " << endl;
    SumArrays(arr, arr2, arrlength, arr3);
    PrintArray(arr3, arrlength);
    
    cout << endl;
    
