float ReadNumber()
{
    float num;
    cin >> num;

    return num;
}
float MyFloor(float num)
{
    int Inpart = (int)num;
    if (num > 0)
        return Inpart;
    else
        return --Inpart;

}

int main()
{
    float number = ReadNumber();
    cout << "c++ floor : " << floor(number) << endl;
    cout << "my floor : " << MyFloor(number);
