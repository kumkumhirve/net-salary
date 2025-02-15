#include <iostream>
using namespace std;

int main()
{
    int salary, bonus, pf, netsalary;
    cout << " enter salary " << endl;
    cin >> salary;
    bonus = salary * 10 / 100;
    cout << "bonus 10%=" << bonus << endl;
    pf = salary * 5 / 100;
    cout << "pf 5%=" << pf << endl;
    netsalary = salary + bonus - pf;
    cout << "netsalary=" << netsalary << endl;

    return 0;
}