#include <iostream>
#include <vector>
using namespace std;

string joinString(vector<string> vName, string delim)
{
    string name="";
    for(int i=0;i<vName.size();i++)
    {
        name+=vName.at(i) + delim;
    }
    
    return name.substr(0,name.length()-delim.length());
   

}

string joinString(string arr[],int length,string delim)
{
    string name="";
    for(int i=0;i<length;i++)
    {
        name += arr[i] + delim;
    }
    return name.substr(0,name.length()-delim.length());
}


int main()
{system("clear");
    
    vector<string> vString;
    vString.push_back("Obada");
    vString.push_back("Mohammed");
    vString.push_back("Oday");
    vString.push_back("Ahmad");
    cout << "Vector after join:\n" << joinString(vString," * ") << endl << endl;

    string arr[5] = { "Obada", "Nour", "Hala", "Doha", "Samer" };
    cout << "Array after join:\n" << joinString(arr,5," * ") << endl << endl;
    

 
    
    
  

    return 0;
} 