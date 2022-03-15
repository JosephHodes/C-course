//
//  main.cpp
//  Lab 7
//
//  Created by joseph on 2/21/22.
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <iostream>
#include<cstdlib>

int main(int argc, const char * argv[]) {
    int iSecret, iGuess, roll_num, total_val;

    /* initialize random seed: */
    std::cout << "please enter how many rolls it will take (1-100)" <<std::endl;
    std::cin >>iGuess;
    roll_num=0;
    total_val=0;
    while(1){
    iSecret = 1+rand() % 6;
        roll_num++;
        total_val+= iSecret;
    std::cout << roll_num << ": "<< iSecret<< " " <<total_val <<std::endl;
        if(total_val>= 100){
            if(roll_num <=5){
                std::cout<< "amazing!"<<std::endl;
                break;
            }else if (roll_num<=10){
                std::cout << "good"<<std::endl;
                break;
            }else if (roll_num<=15){
                std::cout << "okay"<<std::endl;
                break;
            }else{
                std::cout <<" think harder next time"<<std::endl;
                break;
                
            }
        }
    }
    return 0;
}
