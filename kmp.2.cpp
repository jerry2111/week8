#include <iostream>
#include  <string>

using namespace std;



int main()
{
    string str;
    string sub;

   

    cout << "string = ";
    cin >> str;
    cout << "substring = ";
    cin >> sub;

    int len = sub.length();
    int LEN = str.length();
    int num[len];
    
    



    int i = 1, j = 0;
    num[0] = 0;
    while (i<len)
    {
        if (sub[i] == sub[j])
        {
            num[i] = j + 1;
            i++;
            j++;


        }
        else if (sub[i] != sub[j])
        {
            if (j == 0)
            {
                num[i] = 0;
                i++;
       
            }
            else
            {
                j = num[j - 1];
            }

        }
    }

    
    int X=0;
    i=0;
    j=0;
    while(i<LEN)
    {
    	if(str[i]==sub[j])
    	{
    		i++;
    		j++;
		}
		else
		{
			if(j!=0)
			{
				j=num[j-1];
			}
			else
			{
				i++;
			}
		}
		if(j==len)
		{
			cout << "have" << endl ;
			j=num[j-1];
			X=1;
			break;
		}
	}
	if(X==0)
	{
		cout << "don't have" << endl ;
	}
    
    
    
    
    
    
}
