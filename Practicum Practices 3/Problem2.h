#define QUARTERBACK_H
#include <iostream>
using namespace std;

class Quarterback{
    private:
        string name;
        int pass_completes;
        int pass_attempts;
        int total_yards;
        int touchdowns;
        int intercepts;

    public:
        Quarterback();
        Quarterback(string n, int comp, int att, int yards, int td, int i);

        void setName(string new_name);
        string getName();
        void setComp(int x);
        int getComp();
        void setAtt(int x);
        int getAtt();
        void setYards(int x);
        int getYards();
        void setTD(int x);
        int getTD();
        void setPick(int x);
        int getPick();
        void PassCompleted(int x);
        void PassAttempted();
        void Interception();
        float PasserRating();
        void Touchdown(int x);
        Quarterback(string d);


};