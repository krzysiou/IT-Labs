#include "pesel.h"
#include <cstring>

bool leapYear(int year) {
  return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

bool PeselValidator(const char * Tpesel, int * pesel){
  if(strlen(Tpesel) != 11) {
    return false;
  }
  for(int i = 0; i < 11; i++){
    pesel[i] = Tpesel[i] - 48;
  }
  if(getDay(pesel) == 0){
    return false;
  } 
  if(getCtrlNumber(pesel) == -1){
    return false;
  } 
  return true;
}
void printPesel(int * pesel){
  for(int i = 0; i < 11; i++){
    cout << pesel[i];
  }
  cout << endl;
}

int getCtrlNumber(int * pesel){
  int weights [10] = {1, 3, 7, 9, 1, 3, 7, 9, 1, 3};
  int sum = 0;
  int control = pesel[10];
  for(int i = 0; i < 10; i++){
    sum += weights[i] * pesel[i];
  }
  sum = sum % 10;
  sum = 10 - sum;
  sum = sum % 10;
  if(sum != control){
    return -1;
  }
  return sum;
}

int getMonth(int * pesel){
  int month = 10 * pesel[2] + pesel[3];
  while(month > 12){
    month -= 20;
  }
  return month;
}

int getYear(int * pesel){
  int i = 0;
  int month = 10 * pesel[2] + pesel[3];
  while(month > 12){
    month -= 20;
    i++;
  }
  int year = 1900 + i*100 + 10 * pesel[0] + pesel[1];
  return year;
}

int getDay(int * pesel){
  int daysOfMonth[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
  int year = getYear(pesel);
  int month = getMonth(pesel);
  int day = 10 * pesel[4] + pesel[5];
  if(leapYear(year)){
    daysOfMonth[1] = 29;
  }
  if(day > daysOfMonth[month - 1] || day < 1){
    return 0;
  }
  return day;
}