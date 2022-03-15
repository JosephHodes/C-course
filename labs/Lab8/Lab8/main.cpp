//
//  main.cpp
//  Lab8
//
//  Created by joseph on 3/14/22.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int input,accumulator=0 ,index=0;
    char user;
    while(1){
        index++;
        cout << "enter a temperature";
        cin >>input;
        
        if(input <=-30 || input >=120 ){
            cout << "invalid temperature"<<endl;
        }else{
            accumulator +=input;
            cout << "would you like to continue?"<<endl;
            cin >> user;
            if (user!='y'&& user!='Y') {
                cout <<"total average: " <<accumulator/index <<endl;
                break;
            }
        }
    }
}
