#include<iostream>
#include<cstring>
#include<fstream>

using namespace std;
class Worker
{
    string surname;
    int experience, salaryh, hours, salary;
    double premy;
public:
    void setWorker(string sn, int exp, int sh, int h)
    {
        surname = sn;
        experience = exp;
        salaryh = sh;
        hours = h;
        double p;
        int s;
        s = sh * h;
        salary = s;
        if (exp < 1) p = 0;
        else
        {
            if (exp >= 1 && exp < 3) p = 0.05 * s;
            else
            {
                if (exp >= 3 && exp < 5) p = 0.08 * s;
                else
                {
                    if (exp >= 5) p = 0.15 * s;
                }
            }
        }
        premy = p;
    }
    void getWorker()
       
    {
        setlocale(LC_ALL, "Rus");
        cout << surname << endl << "Стаж: " << experience << endl << "Часовая заработная плата: " << salaryh << endl << surname << " Вы отработали " << hours << " часов" << endl << "Ваша зарплата: " << salary << endl << "Ваша премия: " << premy << endl;
        cout << "Информация о " << surname << " была записана в file 'Workers.txt'" << endl;
        ofstream file;
        file.open("Workers.txt", ios_base::app);
        file << surname << endl << "Experience is " << experience << endl << "Hourly wage is " << salaryh << endl << surname << " has worked " << hours << " hours" << endl << "Salary is " << salary << endl << "Premy is " << premy << endl << endl << endl;
        file.close();
    }
};

int main() 
{
    setlocale(LC_ALL, "Rus");
    string surname;
    int experience, salaryh, hours, salary, premy;
    cout << "Введите ваше имя: "; cin >> surname; cout << endl;
    cout << "Введите ваш стаж: "; cin >> experience; cout << endl;
    cout << "Введите часовую заработную плату: "; cin >> salaryh; cout << endl;
    cout << "Введите количество отработанных часов " << surname << " Вы отработали: "; cin >> hours; cout << endl;
    Worker objWorker;
    objWorker.setWorker(surname, experience, salaryh, hours);
    objWorker.getWorker();
    system("pause");
    return 0;
}