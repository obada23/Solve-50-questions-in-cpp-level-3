#include <iostream>
#include <fstream>
using namespace std;

// Add Client

const string clientFileName = "clientRecord.txt";
struct stClient
{
    string accountNumber;
    string pinCode;
    string fullName;
    string phone;
    double accountBalance;
};

string convertRecordToLine(stClient client,string seprator="#//#")
{
    string clientRecord="";
    clientRecord = client.accountNumber+seprator;
    clientRecord += client.pinCode+seprator;
    clientRecord += client.fullName+seprator;
    clientRecord += client.phone+seprator;
    clientRecord += to_string(client.accountBalance);
    
    return clientRecord;

}

void addRecordToFile(string fileName,string record)
{
    fstream myFile;
    myFile.open(fileName,ios::out|ios::app);
    if(myFile.is_open())
    {
        myFile << record << endl;
        myFile.close();
    }
    

}
stClient readNewClient()
{
    stClient client;
    cout << "Enter Account Number? ";
    getline(cin >> ws,client.accountNumber);
    cout << "Enter PinCode? ";
    getline(cin,client.pinCode);
    cout << "Enter Name? ";
    getline(cin,client.fullName);
    cout << "Enter Phone? ";
    getline(cin,client.phone);
    cout << "Enter Account Balance? ";
    cin >> client.accountBalance;
    cout << endl;
    return client;
}
    

void addNewClient()
{
    stClient client;
    client = readNewClient();
    addRecordToFile(clientFileName,convertRecordToLine(client));

}

void addClients()
{
    char addMore;
    do
    {
        system("clear");
        cout << "Adding New Client:" << endl << endl;
        addNewClient();

        cout << "Client Added Successfully, do you want to add more clients? Y/N? ";
        cin >> addMore;
        cout << endl;
        
    } while (toupper(addMore) == 'Y');

    

}



int main()
{
    addClients();
    return 0;
}