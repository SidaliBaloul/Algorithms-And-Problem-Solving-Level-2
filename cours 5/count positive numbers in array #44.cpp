int RandomNumber(int from, int to)
{
    int randnum = rand() % (to - from + 1) + from;
    return randnum;
}
void ReadArrLength(int arr[100], int& arrlength)
{
    do
    {
        cout << "enter the array length" << endl;
        cin >> arrlength;
    } while (arrlength <= 0);

    for (int i = 0; i <= arrlength; i++)
    {
        arr[i] = RandomNumber(-100, 100);
    }

}

void PrintArray(int arr[100], int length)
{

    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
}

int PositiveNumbersCount(int arr[100],int arrlength,int &counter)
{
    for (int i = 0; i < arrlength; i++)
    {
        if (arr[i] > 0)
        {
            counter++;
        }
    }
    return counter;
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100], arrlength;

    ReadArrLength(arr, arrlength);

    cout << "Array elements : ";
    PrintArray(arr, arrlength);

    cout << endl << endl;

    int counter = 0;

    cout << "Positive numbers count is : " << PositiveNumbersCount(arr, arrlength, counter);
 

    cout << endl;
