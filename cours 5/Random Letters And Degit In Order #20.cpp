using namespace std;

int RandomNumber(int from , int to)
{
    int randomnum = rand() % (to - from + 1) + from;
    return randomnum;
}
enum enRandom {smallletter = 1, capitalletter = 2, specialchar = 3, digit = 4};

char GetRandomChar(enRandom num)
{
    switch (num)
    {
     case enRandom::smallletter:
     {
         return char(RandomNumber(97, 122));
         break;
     }
     case enRandom::capitalletter:
     {
         return char(RandomNumber(65, 90));
         break;
     }
     case enRandom::specialchar:
     {
         return char(RandomNumber(33, 47));
         break;
     }
     case enRandom::digit:
     {
         return char(RandomNumber(48, 57));
         break;
          
     }
    }
}

int main()
{
    srand((unsigned)time(NULL));

    cout << GetRandomChar(enRandom::smallletter) << endl;
    cout << GetRandomChar(enRandom::capitalletter) << endl;
    cout << GetRandomChar(enRandom::specialchar) << endl;
    cout << GetRandomChar(enRandom::digit) << endl;
