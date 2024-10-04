#include <iostream>

using namespace std;

int main()
{
    int year_1, year_2, tenths = 0;
    cin >> year_1 >> year_2;
    for (int i = 1; i < (year_2-year_1); i++) {
        if (i > 100) break;
        if (i % 10 == 0) tenths++;
        cout << i + year_1 << endl;
    }
    cout << "Number of 10th elements: " << tenths << endl;
}