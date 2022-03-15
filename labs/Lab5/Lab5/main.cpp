//
//  main.cpp
//  Lab5
//
//  Created by joseph on 2/7/22.
//

#include <iostream>
#include <unordered_map>
bool check_date(bool is_leap_year, int days, int month){
    std::unordered_map<int, int> days_in_each_month;
    days_in_each_month[1] = 31; // january
    days_in_each_month[2] = is_leap_year ? 29 : 28; // febuary
    days_in_each_month[3] = 31 ;// march
    days_in_each_month[4] = 30; // april
    days_in_each_month[5] = 31; // may
    days_in_each_month[6] = 30; // june
    days_in_each_month[7] = 31; // july
    days_in_each_month[8] = 31; // august
    days_in_each_month[9] = 30; // september
    days_in_each_month[10] = 31; // october
    days_in_each_month[11] = 30; // november
    days_in_each_month[12] = 31; // december
    return month <= 12 && month > 0 && days > 0 && days <= days_in_each_month[month];
}

int main(int argc, const char * argv[]) {
    int day,year,month;
    std::cout << "enter day in number form: "<<std::endl;
    std::cin >> day;
    std::cout << "enter year in number ####: "<<std::endl;
    std::cin >> year;
    std::cout << "enter month in number # (1-12): " <<std::endl;
    std::cin >> month;
    std::cout << "the date you entered is: "<< (check_date((year%4 ==0 && year%100 !=0)||year%400 ==0 , day, month)? "valid": "invalid")<<std::endl;
    return 0;
}

