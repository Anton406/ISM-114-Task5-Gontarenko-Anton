#include "source.hpp"
char* dayByDate(date d){//возвращаем строку с названием дня и принимаем как аргумент дату
char*res = new char[256];//создаем строку с названием дня
bool visokos = d.year%4==0;//високосный ли год? если да - то в феврале 29
int days=0;//число дней с момента 1 января
if((d.month-1)%2==1)//если число прошедших месяцев нечетно
{
days+=((d.month-1)/2+1)*nonOddMonth;//прибавляем число дней с месяцами где 31
days+=((d.month-1)/2)*oddMonth;//прибавляем число дней с месяцами где 30 дней
}
else {//если число прошедших месяцев четно
days+=((d.month-1)/2)*nonOddMonth;//число с 30 и 31 поровну
days+=((d.month-1)/2)*oddMonth;
}
if((d.month-1)>=2){//если февраль прошел - учитываем , вискосный ли год
days -=oddMonth;//февраль мы посчитали изначально как обычный четный месяц с 30 днями
if(visokos)//если високосный
days+=leapFebruary;//прошло 29 дней
else
days+=nonLeapFebruary;//прошло 28 дней
}
days+=d.day;//прибавляем дни в текущем месяце
int res1 = days%weekDay;//номер дня
    switch(res1){
        case 0://воскресенье
            res="sunday"; break;
            
        case 1:
            res="monday"; break;
        case 2:
            res="tuesday"; break;
        case 3:
            res="wednesday";break;
        case 4:
            res="thursday";break;
        case 5:
            res="friday";break;
        case 6:
            res="saturday";break;
    }
return res;
}
