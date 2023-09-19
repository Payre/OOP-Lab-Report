#include <iostream>

#define PADDING 0
int days_in_months[] = { PADDING, 30, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
class Date {
    int yy, mm, dd;
public:
    Date() :yy(0), mm(0), dd(0) {}
    Date(int y, int m, int d) : yy(y), mm(m), dd(d) {}
    Date operator++() {
        ++dd;
        if (dd > days_in_months[mm]) {
            if (mm == 2 && ((yy % 4) == 0) && ((yy % 100) != 0 || (yy % 400) == 0)) {
                if (dd > 29) {
                    mm++;
                    dd = 1;
                }
            }
            else {
                dd = 1;
                mm++;
                if (mm > 12) {
                    mm = 1;
                    yy++;
                }
            }
        }
        return (*this);
    }
    Date operator++(int) {
        Date temp = *this;
        ++ *this;
        return temp;
    }
    friend std::ostream& operator<<(std::ostream& stream, const Date& date) {
        stream << date.yy << "/" << date.mm << "/" << date.dd;
        return stream;
    }
};


int main() {
    Date date(2008, 2, 28), z;
    ++date;
    std::cout << date << std::endl;
    date++;
    std::cout << date << std::endl;
}
