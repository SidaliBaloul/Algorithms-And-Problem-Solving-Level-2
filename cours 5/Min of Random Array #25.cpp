void ReadArrLength(int arr[100], int &arrlength)
{
    do
    {
        cout << "enter the array length" << endl;
        cin >> arrlength;
    } while (arrlength <= 0);

    

}

int RandomNumber(int from, int to)
{
    int randnum = rand() % (to - from + 1) + from;
    return randnum;
}

void GetArray(int arr[100],int length)
{
    cout << "Array elements : ";

    for (int i = 0; i < length; i++)
    {
        arr[i] = RandomNumber(1, 100);
        cout << arr[i] << " ";

    }
}
int MinNumberArray(int arr[100], int arrlength)
{
     int MinNumber = 0;
     MinNumber = arr[0];
    for (int i = 0; i < arrlength; i++)
    {
        if (arr[i] < MinNumber)
            MinNumber = arr[i];
    }
    return MinNumber;
}


int main()
{
    srand((unsigned)time(NULL));

    int arr[100], arrlength;

    ReadArrLength(arr, arrlength);
    GetArray(arr,arrlength);

    cout << "\n\n Min Number is : " << MinNumberArray(arr, arrlength);
