float ReadNumber()
{
    float num;
    cin >> num;

    return num;
}
float MyCeil(float num)
{
    int Inpart = (int)num;
    float num2 = num - Inpart;
    if (abs(num2) > 0)
    {
        if (num > 0)
            return ++Inpart;
        else
            return Inpart;
    }
    else
        return Inpart;
   

}

int main()
{
    float number = ReadNumber();
    cout << "c++ ceil : " << ceil(number) << endl;
    cout << "my ceil : " << MyCeil(number);
