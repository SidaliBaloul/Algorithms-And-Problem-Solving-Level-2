string ReadCapitalLetters()
{
    string pass;
    cout << "enter the password : " << endl;
    cin >> pass;

    return pass;
}

bool GuessPassword(string pass)
{
    int counter = 0;
    string word = "";
    for (int m = 65; m <= 90; m++)
    {
        for (int i = 65; i <= 90; i++)
        {
            for (int j = 65; j <= 90; j++)
            {
                counter++;
                
                word = word + char(m);
                word = word + char(i);
                word = word + char(j);
                cout << "Trial [" << counter << "] : " << word << endl;
               
                if (word == pass)
                {
                    cout << "password is " << word << endl;
                    cout << "found after " << counter << " Trial(s)" << endl;

                    return true;

                }
                word = "";
            }
            
        }

        
    }
    
    return false;
}

int main()
{


    GuessPassword(ReadCapitalLetters());
