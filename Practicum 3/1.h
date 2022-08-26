#define RACETRACK_H
#include <iostream>
#include <vector>
using namespace std;

class RaceTrack{
    private:
        string name;
        vector <double> speeds;
        vector <string> models;

    public:
        RaceTrack();
        RaceTrack(string raceName);

        bool addCar(double topSpeed, string carModel);
        double calcAvgSpeed();
        int countAvailable(double minSpeed);
        int countAvailableModels(string model);

};