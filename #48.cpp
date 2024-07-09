#include <iostream>
#include <fstream>
using namespace std;

const string clientFileName = "clientRecord.txt";

struct stClient
{
    string accountNumber;
    string pinCode;
    string fullName;
    string phone;
    double balance;  
};

string Tabs(short numberOfTabs)
{
    string tab="";
    for(int i=0;i<numberOfTabs;i++)
    {
        tab += "\t";
    }
    return tab;
}

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

void printClientRecord(stClient client)
{
    cout << Tabs(1) << setw(8) << client.accountNumber << Tabs(2) << "|";
    cout << Tabs(1) << setw(8) << client.pinCode << Tabs(1) << "|";
    cout << Tabs(2) << setw(16) << client.fullName << Tabs(2) << "|";
    cout << Tabs(1) << setw(8) << client.phone << Tabs(1) << "|";
    cout << "   " <<  client.balance << Tabs(1);
}


void printAllClientsData(vector<stClient> vClients)
{
    cout << Tabs(7) << "  Client List (" << vClients.size() << ") Client(s)." << endl;
    cout << Tabs(1) << "___________________________________________________________________________________________________________________________________\n\n";
    cout << Tabs(1) << "Account Number" << Tabs(2) << "|" << Tabs(1) << "Pin Code" << Tabs(1) << "|" << Tabs(2) << "Client Name" << Tabs(3) << "|" << Tabs(1) << "  Phone" << Tabs(2) << "|   " <<  "Balance" << endl;
    cout << Tabs(1) << "___________________________________________________________________________________________________________________________________\n\n";
    for(stClient &client : vClients)
    {
        printClientRecord(client);
        cout << endl;
    }
    cout << Tabs(1) << "___________________________________________________________________________________________________________________________________\n\n";
}

int main()
{system("clear");
    vector <stClient> vClient = loadClientDataFormFile(clientFileName);
    printAllClientsData(vClient);
    



    cout << endl << endl;
    return 0;
}