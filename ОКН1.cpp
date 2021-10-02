
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "введите число";
    int a;
    cin >> a;
    if (((a / 1000) == 0)&&((a/100)>0)) { cout << "Число трёхзначное"; }
    else
    {
        cout << "число не трёхзначное";
    }
    return 0;
}