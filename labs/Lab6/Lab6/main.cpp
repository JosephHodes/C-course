
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string  symbol,isperfered, firstname, lastname, phonenumber, address, throwaway;
    double rate;
    bool perfer;
    ofstream output;
    output.open("confirmed.txt");
    ifstream myfile ("potentials.txt");
    if (myfile.is_open())
    {
        while(1){
        myfile >> symbol;
        if(myfile.fail()){
            break;
        }
        if (symbol=="X"){
            rate=.079;
            perfer=true;
        }else{
            rate=0.129;
            perfer=false;
        }
        cout << "----------------" <<endl;
        myfile >> firstname;
        cout << "firstname: "<< firstname <<endl;
        myfile >> lastname;
        cout << "lastname: "<< lastname <<endl;
        myfile >> phonenumber;
        cout << "phonenumber: "<< phonenumber <<endl;
        cout << "rate: "<< rate*100 <<"%" <<endl;
        cout<< "'A' to accept 'D' to decline"<< endl;
        cin >> isperfered;
        if(isperfered=="D"){
            if(perfer){
                cout<<" tempt them with cash back rewards and give them a special phone number to call for a better card"<<endl;
            }
            cout<<"thanks any how"<<endl;
        }else if (isperfered=="A"){
        cout << "please enter in address" << endl;
        getline(cin, throwaway);
        getline(cin, address);
        output << firstname << " "<<lastname << " "<<address<< " "<<symbol <<endl;
        }else{
            cout<<"you did not enter the correct option goodbye"<< endl;
            break;
        }
    }
        myfile.close();
    }
    return 0;
}
