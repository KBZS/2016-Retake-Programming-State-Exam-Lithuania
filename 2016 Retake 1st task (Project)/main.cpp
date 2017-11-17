#include <iostream>
#include <fstream>

using namespace std;

void vidurkis();
void aukst();
void spausdinimas();

int vid;
int sk=0;
int n;

int main()
{
    vidurkis();
    aukst();
    spausdinimas();

    return 0;
}

void vidurkis()
{
    int temp;
    int sum = 0;
    ifstream fd("U1.txt");
    fd >> n;
    for(int i=0; i<n; i++)
    {
        fd >> temp;
        sum = sum + temp;
    }
    vid = sum/n;
}

void aukst()
{
    int temp;
    ifstream fd1("U1.txt");
    fd1 >> n;
    for(int i=0; i<n; i++)
    {
        fd1 >> temp;
        if(temp > vid) sk++;
    }
}

void spausdinimas()
{
    ofstream fr("U1rez.txt");
    fr << vid << " " << sk << endl;
}
