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
    
    cout << "Введите имя вашего героя" << endl;

    cin >> name;

    cout << "Добро пожаловать в этот прекрасный мир, " << name << '!' << endl;
    cout << "Выберите один из трех классов: 1 - Мечник, 2 - Маг, 3 - Призыватель" << endl;

    cin >> playerClass;

    cout << "Вы выбрали класс: " << playerClass << endl;
    if (playerClass == 1) {
        cout << "Выбирите меч: 1 - Меч Света, 1 - Меч Тьмы, 3 - Уничтожитель Богов " << endl;
        cin >> weapon;
    }
    else if (playerClass == 2) {
        cout << "Выбирите посох: 1 - Посох Огня, 1 - Посох Льда, 3 - Посох Великого Мага " << endl;
        cin >> weapon;
    }
    else if (playerClass == 3) {
        cout << "Выбирите призываемое существо: 1 - Цербер, 2 - Голем, 3 - Великий дуx " << endl;
        cin >> weapon;
    }
        



    return StartTravell();

}

    
int StartTravell()
{
    cout << "...После нескольих лет скитаний по этому миру вы наконец-то прибываете в замок Истинного Зла..." << endl;
    cout << "Пора показать все на что вы способны..." << endl;

    while (true) {
        cout << "Сделайте выбор: 1 - Атаковать, 2 - Защищаться" << endl;
        int AttackOrDefeat = 0;
        cin >> AttackOrDefeat;


        if (AttackOrDefeat == 1) {
            srand(time(0));
            int randomval = rand() % 2;
            if (randomval == 0) {
                int Bossdamage = rand() % 30 + 10;

                int PlayerDamage = rand() % 350 + 250;
                cout << "В этот раз удача отвернулась от вас и вы получаете урон в рамзере, " << Bossdamage << endl;
                cout << "Но в этот же момент вы контратакуете и наносите урон в размере, " << PlayerDamage << endl;
                playerHealth -= Bossdamage;
                if (playerHealth < 0) {
                    cout << "В этой великой битве Истинное Зло одержало над вами победу и захватило весь мир" << endl;
                    break;
                }

                bossHealth -= PlayerDamage;

                if (bossHealth < 0) {
                    cout << "В этой велиой битве вы одержали победу над Истинным Злом и спасли мир" << endl;
                    break;
                }
                cout << "Ваше здоровье: " << playerHealth << endl;
                cout << "Здоровье Истинного Зла: " << bossHealth << endl;


            }
            else {
                int PlayerDamage = rand() % 350 + 250;

                cout << "В этот раз удача на вашей стороне и вы наносите урон в рамзере, " << PlayerDamage << endl;

                bossHealth -= PlayerDamage;
                if (bossHealth < 0) {
                    cout << "В этой велиой битве вы одержали победу над Истинным Злом и спасли мир" << endl;
                    break;
                }
                cout << "Ваше здоровье: " << playerHealth << endl;
                cout << "Здоровье Истинного Зла: " << bossHealth << endl;
            }
        }
        if (AttackOrDefeat == 2) {
            cout << "Вы успешно парировали аттаку" << endl;
        }



    }
    return 0;
}
    
    
