/**
 *date- структура, описывающая дату, содержит три числа-номер дня, номер месяца и год
 *dayByDate - возвращает наименование дня недели по дате
 *по условию задачи 1 января-понедельник

 */

#pragma once
#include <string>
enum Days{
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};
const std::string daysArr[]={"Sunday","Monday","Tuesday","Wednasday","Thursday","Friday","Saturday"};
const int oddMonth=30;//количество дней в четном по счету месяце
const int nonOddMonth=31;//количество дней в нечетном месяце
const int leapFebruary=29;//количество дней в феврале в високосный год
const int nonLeapFebruary=28;//и в невисокосный
const int weekDay=7;//число дней в неделе
struct date{//структура с описанием даты
int year,month,day;//число года месяца и дня
};
std::string dayByDate(date d);//определяем день недели по текущей даты, если 1 января по условию задачи - всегда понедельник

