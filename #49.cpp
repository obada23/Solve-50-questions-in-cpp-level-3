#include <iostream>
#include <fstream>
using namespace std;

// Client Details

const string clientFileName = "clientRecord.txt";

struct stClient
{
    string accountNumber;
    string pinCode;
    string fullName;
    string phone;
    double balance;  
};


vector<string> spiltLine(string line , string seprator="#//#")
{
    string word = "";
    vector<string> vClient;
    int i=0;
    while(i<line.length())
    {
        if(line[i] != seprator[0])
        {
            word += line[i];
            i++;
        }
        else
        {
            vClient.push_back(word);
            word = "";
            i+=seprator.length();
        }
    }
    vClient.push_back(word);
    word="";
    return vClient;
}

stClient convertLineToRecord(string line)
{
    stClient client;
    vector<string> vClient = spiltLine(line);

    client.accountNumber = vClient.at(0);
    client.pinCode = vClient.at(1);
    client.fullName = vClient.at(2);
    client.phone = vClient.at(3);
    client.balance = stod(vClient.at(4));

    return client;

    
}

vector<stClient> loadClientDataFormFile(string clientFileName)
{
    vector <stClient> vClients;
    fstream myFile;
    myFile.open(clientFileName,ios::in);
    if(myFile.is_open())
    {
        string line;
        stClient client;

        while(getline(myFile,line))
        {
            client = convertLineToRecord(line);
            vClients.push_back(client);
        }
        myFile.close();
    }

    return vClients;
}

void printClientDetails(stClient client)
{
    cout << "Account Number  : " << client.accountNumber << endl;
    cout << "Pin Code        : " << client.pinCode << endl;
    cout << "Name            : " << client.fullName << endl;
    cout << "Phone           : " << client.phone << endl;
    cout << "Account Balance : " << client.balance << endl;

}

bool findClientByAccountNumber(string accountNumber, stClient &client)
{
    vector<stClient> vClient = loadClientDataFormFile(clientFileName);
    for(stClient &c : vClient)
    {
        if(c.accountNumber==accountNumber)
        {
            client = c;
            return true;
        }
    }
    return false;
    
}

string readClientAccountNumber()
{
    string clientAccountNumber;
    cout << "Please Enter AccountNumber? ";
    cin >> clientAccountNumber;
    return clientAccountNumber;
}

int main()
{system("clear");
    
    stClient client;
    string accountNumber = readClientAccountNumber();

    if(findClientByAccountNumber(accountNumber,client))
        printClientDetails(client);
    else
        cout << "Client With Account Number (" << accountNumber << ") Is Not Found!" << endl;

        
    

    cout << endl << endl;
    return 0;
}