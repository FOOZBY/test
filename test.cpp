#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(nullptr)); // use current time as seed for random generator
    cout << "enter num of vershin: ";
    int N, a;
    cin >> N;

    // roll 6-sided dice 20 times
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            a = rand() % 10;
            if (a < 5)
            {
                a = 0;
            }
            else
            {
                a = (rand() % 9)+1;
            }
            if (i == j)
                a = 0;
            cout << a << " ";
        }
        cout << endl;
    }
    system("pause");
}
