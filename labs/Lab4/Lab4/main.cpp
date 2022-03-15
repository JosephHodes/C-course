//
//  main.cpp
//  Lab4
//
//  Created by joseph on 1/29/22.
//

#include <iostream>
//i was not sure if u wanted it compounded the monthly rate but that would require math.pow and or a for loop which you didnt go over in the recent lectures and i used int to make the double readable because it would give u scientific notation
int main(int argc, const char * argv[]) {
    std::cout << "Enter in the cost of the house"<<std::endl;
    unsigned long int cost_of_house;
    std::cin >> cost_of_house;
    std::cout << "Enter in your fico score"<<std::endl;
    unsigned int fico_score;
    std::cin >> fico_score;
    std::cout << "Enter if you want to 15 or 30 years fixed" <<std::endl;
    unsigned int year;
    std::cin >> year;
    double percantage;
    if (year==15){
        percantage= 1.043;
    }else if (year==30){
        percantage=1.048;
    }else{
        percantage=NULL;
        std::cout << "please run again and enter in the right years"<<std::endl;
        return 0;
    }
    if(fico_score<=500 || fico_score<=579){
        percantage+=.040;
    }else if (fico_score <=580 ||fico_score <= 619){
        percantage+=.0225;
    }else if (fico_score <=620 ||fico_score <= 659){
        percantage+=.015;
    }else if (fico_score <= 700  ||fico_score <= 759){
        percantage+=.025;
    }else{
        std::cout << "You have the best credit score";
    }
    std::cout << "Your percentage is " << percantage<<std::endl;
    std::cout << "your monthly payment is  " <<(cost_of_house*percantage) <<std::endl;
    std::cout << "your total payments overall will be " <<int((cost_of_house*percantage)*(year*12))<< " not compounded" <<std::endl;
    return 0;
}
