using namespace std;

int RandomNumber(int from , int to)
{
    int randomnum = rand() % (to - from + 1) + from;

    return randomnum;
}




int main()
{
    srand((unsigned)time(NULL));

    cout << RandomNumber(1, 5) << endl;
    cout << RandomNumber(1, 5) << endl;
    cout << RandomNumber(1, 5) << endl;
