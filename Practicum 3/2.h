#define APP_H
#include <iostream>
#include <vector>
using namespace std;

class App{
    private:
        string title;
        string company;
        int downloads;
    public:
        App(){
            title = "";
            company = "";
            downloads = 0;
        }
        App(string t, string c, int d){
            title = t;
            company = c;
            downloads = d;
        }
        void setTitle(string t){
            title = t;
        }
        string getTitle(){
            return title;
        }
        void setCompany(string c){
            company = c;
        }
        string getCompany(){
            return company;
        }
        void setDownloads(int d){
            downloads = d;
        }
        int getDownloads(){
            return downloads;
        }
        double grossRevenue(double price){
            return price * downloads;
        }

};