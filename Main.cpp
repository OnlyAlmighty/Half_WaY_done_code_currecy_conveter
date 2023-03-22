#include <iostream>
#include <string>

using namespace std;

int main(){

    string ask;

    float dollar;

    float JPY = 132.53;

    float dollar2 = 0.0075;

    float JPY2;

    float dollar3 = 1.08;

    float Euro;

    cout << "Welcome to this currency converter! \n";
    cout << "Choose which currency you want to convert: \n";
    cout << "[USD] US dollar\n";
    cout << "[Euro] Euro \n";
    cout << "[JPY] Japanese yen \n";
    cout << "[GBP] Pound sterling \n";
    cout << "[AUD] Australian dollar \n";
    cout << "[CAD] Canadian dollar \n";
    cout << "[CHF] Swiss franc \n";
    cout << "[CNY] Chinese renminbi \n";
    cout << "[HKD] Hong Kong dollar \n";
    cout << "[NZD] New Zealand dollar  \n";
    cout << "Enter your choice: ";
    cin >> ask;

    if (ask == "USD"){
        cout << "Enter the amount in US dollars: ";
        cin >> dollar;
        cout << dollar << " USD is " << dollar*JPY << " Japanese yen." << endl;
    }
    else if (ask == "JPY"){
        cout << "Enter the amount in Japanese yen: ";
        cin >> JPY2;
        cout << JPY2 << " JPY is " << JPY2*dollar2 << " US dollars." << endl;
    }
    else if (ask == "Euro"){
        cout<<"Enter the amount in euro: ";
        cin>> Euro;
        cout<< Euro << " Euro is " << Euro*dollar3 << " US dollars." << endl;
    }
    else{
        cout << "Sorry, that currency is not supported by this converter." << endl;
    }

    return 0;
}
