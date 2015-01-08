#include<iostream>
using namespace std;

const int STRING_LENGTH = 20;
const int SUBSTR_LENGTH = 4;

bool is_exist(char arr[], char peace[])
{
    bool exist = false;
    for(int i=0; i < STRING_LENGTH - SUBSTR_LENGTH -1 ; i++)
    {
        bool a = true;
        for(int j=0; j < SUBSTR_LENGTH - 1; j++)
        {
            if(arr[i+j]!=peace[j])
            {
                a = false;
            }
        }

        exist = a;
        if(exist)
        {
            break;
        }
    }

    return exist;
}

int main()
{
    char stringg[STRING_LENGTH] = "1234567891011121314";
    char substring[SUBSTR_LENGTH]= "111";

    cout<< is_exist(stringg, substring);

    return 0;
}


