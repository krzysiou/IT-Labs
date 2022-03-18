#pragma once

class DivisibleBy {
  public:
    DivisibleBy(int);
    bool operator ()(int);
  private:
    int _pivot;
};

class GreaterThan {
  public:
    GreaterThan(int);
    bool operator ()(int);
  private:
    int _pivot;
};