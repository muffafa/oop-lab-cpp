#include<iostream>
#include<cstdio>
using namespace std;

class date {
    int day, month, year;
    public:
    date(char *str);
    date(int m, int d, int y) {
        month = m;
        day = d;
        year = y;
    }
    void show() { cout << month << '/' << day << '/' << year << endl; }
};

date::date(char *str){
    sscanf(str, "%d%*c%d%*c%d", &month, &day, &year);
}

int main() {
    date sdate("12/31/99");
    date idate(12, 31, 99);

    sdate.show();
    idate.show();
    return 0;
}