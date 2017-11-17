#include <iostream>
#include <fstream>
// 2016 Exam (Retake session)

using namespace std;

void vidurkis();    //function to calculate the average heigh
void aukst();       //function to calculate how many students are taller than the average
void spausdinimas();//function for output  

int vid;            //variable for average
int sk = 0;         //starting value for the number of students who are taller than average
int n;              //how many students in the list

int main()
{
    vidurkis();
    aukst();
    spausdinimas();

    return 0;
}

void vidurkis()     //function to calculate the average heigh
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

void aukst()        //function to calculate how many students are taller than the average
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

void spausdinimas() //function for output
{
    ofstream fr("U1rez.txt");
    fr << vid << " " << sk << endl;
}
