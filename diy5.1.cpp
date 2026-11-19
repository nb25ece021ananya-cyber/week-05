#include <iostream>
using namespace std;

class Counter
{
    static int total;
    static int alive;

public:
    Counter()
    {
        total++;
        alive++;
    }

    ~Counter()
    {
        alive--;
    }

    static void show()
    {
        cout << "Total objects ever created: " << total << endl;
        cout << "Objects currently alive: " << alive << endl;
    }
};

int Counter::total = 0;
int Counter::alive = 0;

int main()
{
    Counter c1, c2;

    Counter::show();

    {
        Counter c3;
        Counter::show();
    }

    Counter::show();

    return 0;
}