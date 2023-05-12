#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(nullptr)); // use current time as seed for random generator
    cout << "enter num of vertexes: ";
    int N, a;
    double count = 0;
    cin >> N;

    // roll 6-sided dice 20 times
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            a = rand() % 10;
            if (a < 0)
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
            if (!a)
            {
                count++;
            }
        }
        cout << endl;
    }
    count = count / pow(N,2);
    count = count * 100;
    cout << "% of 0's = " << count << " %" << endl;
    system("pause");
}
