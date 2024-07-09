#include <iostream>
using namespace std;
struct stClient
{
    string accountNumber;
    string pinCode;
    string fullName;
    string phoneNumber;
    double accountBalance;
};

vector<string> splitString(string lineRecord, string seprator)
{
    string word="";
    vector<string> vlineRecord;
    int i=0;
    while(i<lineRecord.length())
    {
        if(lineRecord[i]!=seprator[0])
        {
            word += lineRecord[i];
            i++;
        }
        else
        {
            vlineRecord.push_back(word);
            word="";
            i+=seprator.length();
        }
    }
    vlineRecord.push_back(word);
    return vlineRecord;

}

void fillClientRecord(stClient &client,string lineRecord)
{
    vector<string> vLineRecord = splitString(lineRecord,"#//#");
    client.accountNumber = vLineRecord.at(0);
    client.pinCode = vLineRecord.at(1);
    client.fullName = vLineRecord.at(2);
    client.phoneNumber = vLineRecord.at(3);
    client.accountBalance = stod(vLineRecord.at(4));
}

void printClientRecord(stClient &client)
{
    cout << "The following is the extracted client record:" << endl << endl;
    cout << "Account Number  : " << client.accountNumber << endl;
    cout << "Pin Code        : " << client.pinCode << endl;
    cout << "Name            : " << client.fullName << endl;
    cout << "Phone           : " << client.phoneNumber << endl;
    cout << "Account Balance : " << client.accountBalance << endl;
}



int main()
{system("clear");
    
    cout << "Line Record is:" << endl;
    string lineRecord = "A150#//#1234#//#Mohammed Abu-Hadhoud#//#079999#//#5270.00000";
    cout << lineRecord << endl << endl;


    stClient client1;
    fillClientRecord(client1,lineRecord);
    printClientRecord(client1);

    

    
    return 0;
}