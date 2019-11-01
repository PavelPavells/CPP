#include <iostream>
#include <string>
using namespace std;
//using std::cin;
//using std::cout;
//using std::wcout;
//using std::endl;
int main()
{
    char a = 'H';
    wchar_t b = 'e';
    char16_t c = 'l';
    char32_t d = 'o';
    short e = -10;
    unsigned short f = 10;
    long g = 11;
    long long h = 90;
    const float pi = 3.14;
    int sum = 2000;
    int res;
    string name;
    bool result = 10 > 5 && 10 > 11;
    sum = e + g;
    string str = a + " " + d;
    if(h < 80) 
        cout << "True" << endl;
    else
        cout << "False" << endl;

    while(sum < 2000)
    {
        cout << sum << "*" << sum << "=" << sum * sum << endl;
        sum++;
    }

    for(int x = 1; x <= 100; x++)
    {
        cout << x << "*" << x << "=" << x * x << endl;
    }
    for(int w = 1; w <= 100; w++)
    {
        for(int y = 1; y <= 100; y++)
        {
            cout << w * y << '\t';
        }
        cout << endl;
    }
    int count[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for(int number : count)
    {
        cout << number << endl;
    }

    cout << sum << endl;
    cout << result << endl;
    cout << a << (char)b << (char)c << (char)c << (char)d << endl; 
    wcout << a << b << endl;
    cout << str << endl;
    cout << "Please enter your name:";
    cin >> name;
    cout << "Hello, " << name;
    cout << endl;
    return 0;
}