#include <iostream>
#include <ctime>
#include <string>
#include <stdlib.h>

#include <locale>
#include<Windows.h>

using namespace std;

string name;
int playerClass;
int weapon;

    

int playerHealth = 100;
int bossHealth = 1000;
int StartTravell();
int main() {

    //SetConsoleCP(1251);
    //SetConsoleOutputCP(1251); 
    setlocale(LC_ALL, "ru-RU");
    
    cout << "������� ��� ������ �����" << endl;

    cin >> name;

    cout << "����� ���������� � ���� ���������� ���, " << name << '!' << endl;
    cout << "�������� ���� �� ���� �������: 1 - ������, 2 - ���, 3 - �����������" << endl;

    cin >> playerClass;

    cout << "�� ������� �����: " << playerClass << endl;
    if (playerClass == 1) {
        cout << "�������� ���: 1 - ��� �����, 1 - ��� ����, 3 - ������������ ����� " << endl;
        cin >> weapon;
    }
    else if (playerClass == 2) {
        cout << "�������� �����: 1 - ����� ����, 1 - ����� ����, 3 - ����� �������� ���� " << endl;
        cin >> weapon;
    }
    else if (playerClass == 3) {
        cout << "�������� ����������� ��������: 1 - ������, 2 - �����, 3 - ������� ��x " << endl;
        cin >> weapon;
    }
        



    return StartTravell();

}

    
int StartTravell()
{
    cout << "...����� ��������� ��� �������� �� ����� ���� �� �������-�� ���������� � ����� ��������� ���..." << endl;
    cout << "���� �������� ��� �� ��� �� ��������..." << endl;

    while (true) {
        cout << "�������� �����: 1 - ���������, 2 - ����������" << endl;
        int AttackOrDefeat = 0;
        cin >> AttackOrDefeat;


        if (AttackOrDefeat == 1) {
            srand(time(0));
            int randomval = rand() % 2;
            if (randomval == 0) {
                int Bossdamage = rand() % 30 + 10;

                int PlayerDamage = rand() % 350 + 250;
                cout << "� ���� ��� ����� ����������� �� ��� � �� ��������� ���� � �������, " << Bossdamage << endl;
                cout << "�� � ���� �� ������ �� ������������� � �������� ���� � �������, " << PlayerDamage << endl;
                playerHealth -= Bossdamage;
                if (playerHealth < 0) {
                    cout << "� ���� ������� ����� �������� ��� �������� ��� ���� ������ � ��������� ���� ���" << endl;
                    break;
                }

                bossHealth -= PlayerDamage;

                if (bossHealth < 0) {
                    cout << "� ���� ������ ����� �� �������� ������ ��� �������� ���� � ������ ���" << endl;
                    break;
                }
                cout << "���� ��������: " << playerHealth << endl;
                cout << "�������� ��������� ���: " << bossHealth << endl;


            }
            else {
                int PlayerDamage = rand() % 350 + 250;

                cout << "� ���� ��� ����� �� ����� ������� � �� �������� ���� � �������, " << PlayerDamage << endl;

                bossHealth -= PlayerDamage;
                if (bossHealth < 0) {
                    cout << "� ���� ������ ����� �� �������� ������ ��� �������� ���� � ������ ���" << endl;
                    break;
                }
                cout << "���� ��������: " << playerHealth << endl;
                cout << "�������� ��������� ���: " << bossHealth << endl;
            }
        }
        if (AttackOrDefeat == 2) {
            cout << "�� ������� ���������� ������" << endl;
        }



    }
    return 0;
}
    
    
