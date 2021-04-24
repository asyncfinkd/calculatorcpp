#include <iostream>
#include <string>
using namespace std;

void usernameVoid(string name)
{
    if (name == "" || name == " ")
    {
        cout << "Please Enter a name";
    }
    else
    {
        cout << "Hello, " << name << endl;
    }
}

void chooseOperator(string var)
{
    if (var == "" || var == " ")
    {
        cout << "Please enter a operator";
    }
    else
    {
        cout << "You Choose: " << var << endl;
    }
}

void renderCalc(string val, int num, int fNum, int sNum)
{
    if (val == "+")
    {
        num = fNum + sNum;
    }
    else if (val == "-")
    {
        num = fNum - sNum;
    }
    else if (val == "*")
    {
        num = fNum * sNum;
    }
    else if (val == "/")
    {
        num = fNum / sNum;
    }
    else if (val == "%")
    {
        num = fNum % sNum;
    }
    cout << "Your Answer " << num << endl;
}

int main()
{
    int x, y, z;
    string username, l;
    cout << "What's your name?" << endl;
    cin >> username;
    usernameVoid(username);
    cout << "Please Choose: +, -, *, %, /" << endl;
    cin >> l;
    chooseOperator(l);
    cout << "Choose First Number" << endl;
    cin >> x;
    cout << "Choose Second Number" << endl;
    cin >> y;
    renderCalc(l, z, x, y);

    return 0;
}
