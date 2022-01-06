#pragma once
#include <iostream>

using namespace std;

bool PeselValidator(const char *, int *);
void printPesel(int *);
int getCtrlNumber(int *);
int getDay(int *);
int getMonth(int *);
int getYear(int *);