string ReadName()
{
    string name;
    cout << "enter ur name : " << endl;
    cin >> name;

    return name;
}

string EncryptName(string name, short key)
{
    
    for (int i = 0; i <= name.length();i++)
    {
        name[i] = char((int)name[i] + key);
    }
    return name;

}
string decrypt(string name, short key)
{
    for (int i = 0; i <= name.length(); i++)
    {
        name[i] = char((int)name[i] - key);
    }
    return name;
}


int main()
{
    const short key = 2;
    string name = ReadName();
    string EncryptNamee = EncryptName(name, key);
    string decr = decrypt(EncryptNamee, key);

    cout << "name before : " << name << endl;
    cout << "encryption name : " << EncryptNamee << endl;
    cout << "last decrep : " << decr << endl;
