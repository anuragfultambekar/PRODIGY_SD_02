#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    srand(time(0));
    int min = 1;
    int max = 100;
    int randomnumber = min + (rand() % (max - min + 1));
    // cout << randomnumber << endl;

    cout << "Enter Random Number From 1 to 100 :" << endl;
    int number;
    int count = 0;

    while (number != randomnumber)
    {

        cin >> number;

        if (number > randomnumber)
        {
            cout << "YOU GUESSED IT HIGH!" << endl;
            count++;
        }
        else
        {
            cout << "YOU GUESSED IT LOW!" << endl;
            count++;
        }
    }
    cout << endl;

    cout << "Great !! YOU WIN!! " << endl;
    cout << "NO. OF ATTEMPTS:" << endl
         << count;
}
