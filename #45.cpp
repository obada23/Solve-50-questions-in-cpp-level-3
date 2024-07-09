#include <iostream>
using namespace std;
struct stClient
{
    string accountNumber;
    string pinCode;
    string fullName;
    string phoneNumber;
    int accountBalance;
};

void readNewClient(stClient &client)
{
    cout << "Please Enter Client Data:" << endl << endl;
    cout << "Enter Account Number? ";
    cin >> client.accountNumber;
    cout << "\nEnter PinCode? ";
    cin >> client.pinCode;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "\nEnter Name? ";
    getline(cin,client.fullName);
    cout << "\nEnter Phone? ";
    cin >> client.phoneNumber;
    cout << "\nEnter AccountBalance? ";
    cin >> client.accountBalance;
    cout << endl << endl;
}

string convertRecordToLine(stClient &client, string seperator="#//#")
{
    string clientRecord="";
    clientRecord+=client.accountNumber + seperator;
    clientRecord+=client.pinCode + seperator;
    clientRecord+=client.fullName + seperator;
    clientRecord+=client.phoneNumber + seperator;
    clientRecord+=to_string(client.accountBalance);
    
    return clientRecord;
   

}

int main()
{system("clear");
    stClient client1;
    readNewClient(client1);

    cout << "Client Record for Saving is:" << endl;
    cout << convertRecordToLine(client1) << endl << endl;

    
    return 0;
}