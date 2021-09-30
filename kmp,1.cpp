#include <iostream>
#include <string>
using namespace std;


int subSerch(string str,string sub,int i,int j)
{
    if (i == str.length())
    {
		
    }
    else if (str[i] == sub[j] && j == (sub.length() - 1))
    {
        return 100;
    }
    else if (str[i] == sub[j])
    {
        return subSerch(str, sub, i + 1, j + 1);
    }
    else if (str[i] != sub[j])
    {
        return subSerch(str, sub, i + 1, 0);
    }

 }

  
int main()
{
    string str;
    string sub;
    cout << "string = "; 
    cin >> str;
    cout << "substring = ";
    cin >> sub;
    if (subSerch(str, sub, 0, 0) == 100)
    {
        cout << "have";;
    }
    else
    {
        cout << "don't have";
    }
    

}
