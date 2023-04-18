#include <iostream>
#include <string>

using namespace std;

class Movie
{
    public:
        string return_name();
        string return_MPAA();
        void set_name();
        void set_MPAA();
        void inc_rat(int rating);
        double return_avg_rat();
        Movie(string name, string MPAA_rat);
    
    private:
        string name;
        string MPAA_rat;
        int rat_1;
        int rat_2;
        int rat_3;
        int rat_4;
        int rat_5;
};

int main()
{
   Movie mov1("KUki", "R18"), mov2("Muki", "U13");
   
   mov1.return_name();
   mov1.return_MPAA();
   mov1.inc_rat(5);
   mov1.inc_rat(3);
   mov1.inc_rat(3);
   mov1.inc_rat(5);
   mov1.inc_rat(2);
   mov1.return_avg_rat();
   
   mov2.return_name();
   mov2.return_MPAA();
   mov2.inc_rat(1);
   mov2.inc_rat(3);
   mov2.inc_rat(4);
   mov2.inc_rat(5);
   mov2.inc_rat(1);
   mov2.return_avg_rat();
   
   return 0;
}

string Movie::return_name()
{
    cout << "Movie name: " << name << endl;
    return name;
}

string Movie::return_MPAA()
{
    cout << "MPAA rating: " << MPAA_rat << endl;
    return MPAA_rat;
}

void Movie::set_name()
{
    cout << "Enter movie name: ";
    getline(cin, name);
}

void Movie::set_MPAA()
{
    cout << "Enter movie MPAA rating: ";
    getline(cin, MPAA_rat);
}

void Movie::inc_rat(int rating)
{
    switch(rating)
    {
        case 1:
            rat_1++;
            break;
            
        case 2:
            rat_2 = rat_2 + 2;
            break;
            
        case 3:
            rat_3 = rat_3 + 3;
            break;
            
        case 4:
            rat_4 = rat_4 + 4;
            break;
            
        case 5:
            rat_5 = rat_5 + 5;
            break;
    }
}

double Movie::return_avg_rat()
{
    double avg = (rat_1 + rat_2 + rat_3 + rat_4 + rat_5) / 5.0;
    cout << "Avg: " << avg << endl;
    return avg;
}

Movie::Movie(string name_v, string MPAA_rat_v) : name(name_v), MPAA_rat(MPAA_rat_v), rat_1(0), rat_2(0), rat_3(0), rat_4(0), rat_5(0)
{
    
}