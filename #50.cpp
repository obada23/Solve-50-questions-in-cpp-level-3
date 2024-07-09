#include <iostream>
#include <fstream>
using namespace std;

// Delete Client

const string clientFileName = "clientRecord.txt";

struct stClient
{
    string accountNumber;
    string pinCode;
    string fullName;
    string phone;
    double acccountBalance;
};

vector<string> spiltLine(string line,string seprator = "#//#")
{
    string word = "";
    int i=0;
    vector<string> vClient;
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
    word = "";
    return vClient;
}

stClient convertLineToRecord(string line)
{
    vector<string> vClient = spiltLine(line);
    stClient client;
    client.accountNumber = vClient.at(0);
    client.pinCode = vClient.at(1);
    client.fullName = vClient.at(2);
    client.phone = vClient.at(3);
    client.acccountBalance = stod(vClient.at(4));
    return client;
}

vector<stClient> loadClientDataFromFile(string clientFileName)
{
    vector<stClient> vClient;
    fstream myFile;
    myFile.open(clientFileName,ios::in);
    if(myFile.is_open())
    {
        string line;
        stClient client;
        while(getline(myFile,line))
        {
            client = convertLineToRecord(line);
            vClient.push_back(client);
        }
        myFile.close();
    }
    return vClient;
}

string readAccountNumber()
{
    string accountNumber;
    cout << "Please Enter Account Number ?  ";
    cin >> accountNumber;
    cout << endl;
    return accountNumber;
}

bool findClientByAccountNumber(string accountNumber,stClient &client)
{   
    vector<stClient> vClient = loadClientDataFromFile(clientFileName);
    for(stClient &c : vClient )
    {
        if(c.accountNumber == accountNumber)
        {
            client = c;
            return true;
        }
    }
    return false;

}

void printClientDetails(stClient client)
{
    cout << "Account Number  : " << client.accountNumber << endl;
    cout << "Pin Code        : " << client.pinCode << endl;
    cout << "Name            : " << client.fullName << endl;
    cout << "Phone           : " << client.phone << endl;
    cout << "Account Balance : " << client.acccountBalance << endl;
}

string convertClientToRecord(stClient client,string dilm = "#//#")
{
    string line = "";
    line += client.accountNumber + dilm;
    line += client.pinCode + dilm;
    line += client.fullName + dilm;
    line += client.phone + dilm;
    line += to_string(client.acccountBalance);
    return line;
}

void deleteClientFromFile(stClient &client)
{
    string line = convertClientToRecord(client);
    fstream myFile,tempFile;
    myFile.open(clientFileName,ios::in);
    tempFile.open("temp.txt",ios::out);
    if(myFile.is_open()&&tempFile.is_open())
    {
        string record;
        while(getline(myFile,record))
        {
            if(record != line)
            {
                tempFile << record << endl;
            }
        }
        myFile.close();
        tempFile.close();

        remove(clientFileName.c_str());
        rename("temp.txt",clientFileName.c_str());

    }
    
}

int main()
{system("clear");
    char dClient;
    stClient client;
    string accountNumber = readAccountNumber();
    if(findClientByAccountNumber(accountNumber,client))
    {
        printClientDetails(client);
        cout << "\nAre you sure you want delete this client? Y/N? ";
        cin >> dClient;
        if(toupper(dClient)=='Y')
        {
            deleteClientFromFile(client);
            cout << "\nClient Deleted Successfuly." << endl;
        }
    }
        
    
    else
        cout << "Client With Account Number (" << accountNumber << ") Is Not Found!" << endl;  

    

    cout << endl << endl;

    return 0;
}