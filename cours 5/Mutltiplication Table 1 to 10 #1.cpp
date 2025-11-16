void PrintHeader()
{
    cout << "\t\t\t multiplication table from 1 to 10 \n\n";

    for (int i = 1; i <= 10;i++)
    {
        cout << "\t" << i;
    }
    cout << "\n_______________________________________________________________________________________\n\n";
}

string Side(int i)
{
    if (i < 10)
        return "   |";
    else
        return "  |";
}

void Calculate()
{
    PrintHeader();
    for (int i = 1; i <= 10; i++)
    {
        cout << " " << i << Side(i) << "\t";
        for (int j = 1; j <= 10; j++)
        {

            cout << i * j << "\t";


        }

        cout << endl;
        
    }
}


int main()
{
    
    Calculate();
