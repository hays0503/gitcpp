#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
    string temp;
    string line;
    ifstream myfile( "in.txt" );
    ofstream youfile("out.txt");
    char numbers[] = {'0','1','2','3','4',
                      '5','6','7','8','9'
                     };
    float NumberArr[256];
    float MidleNum;
    int Num;
    bool IsNum;
    float Max;
    float Min;
    if (myfile)  // same as: if (in.good())
    {
        getline( myfile, line );
        while (getline( myfile, line ))  // same as: while (getline( in, line ).good())
        {
            cout<<line<<endl;
            MidleNum = 0;
            Num = 0;
            float Max = -9999999;
            float Min = 9999999;
            for(int i(0); i<line.length(); i++)
            {
                IsNum=false;
                for(int j(0); j<10; j++)
                {
                    if(line[i]==numbers[j])//it's numbers
                    {
                        IsNum=true;
                    }
                }
                if(IsNum)
                {
                    temp = "";
                    temp+=line[i];
                    Num++;
                    if(Max<atof(temp.c_str()))
                    {
                        Max=atof(temp.c_str());
                    }
                    if(Min>atof(temp.c_str()))
                    {
                        Min=atof(temp.c_str());
                    }
                    MidleNum+=atof(temp.c_str());

                }else
                {
                    youfile<<line[i];
                }

            }
            MidleNum-=(Max+Min);
            Num-=2;
            MidleNum=MidleNum/Num;
            youfile<<MidleNum;
            youfile<<endl;
        }
        myfile.close();
    }

    return 0;
}
