

#include <iostream>
#include <string>
using namespace std;



//шгрыавшгрсымшгруысщшофыу

//Класс результатов теста
class Testresult { 
    short score;    //Кол-во баллов
    string student_name;    //Имя студента

public:
    //Конструктор 
    Testresult(short s, string name) {
        score = s;
        student_name = name;
    }
    //Функция, устонавливающая кол-во баллов 
    void set_score(short s) {
        if (!(s < 0)) {
            score = s;
        }
    }
    //Функция, устонавливающая имя студента
    void set_name(string name) {
        student_name = name;
    }
    //Функция, возвращающая кол-во баллов
    short get_score()
    {
        return score;
    }
    //Функция, возвращающая имя студента
    string get_name() {
        return student_name;
    }
};
//Главная функция
int main(){
    setlocale(LC_ALL, "ru");    //Русификатор
    Testresult student1(100, "Иван");    //Объект класса Testresult
    cout << "Студент " << student1.get_name() << " Набрал " << student1.get_score() << " Баллов";
}