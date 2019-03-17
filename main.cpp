#include <iostream>
using namespace std;

static int dailyCost =250;
class PatientAccount{
    int days =0;
public:
    int getDays() const {
        return days;
    }

    void updateDays() {
        days++;
        charge +=dailyCost;
    }

private:
    double charge =0;
public:
    double getCharge() const {
        return charge;
    }

    void updateCharge(double x){
        charge +=x;
    }
};
class Surgery{
    double kneeSur =2000;
    double heartSur = 10000;
    double kidneySur = 7000;
    double handSur = 5000;
    double footSur = 3000;
public:

    void doSurgery(PatientAccount &p){

        int c;
        cout<<"What surgery you want?\n1.Knee\n2.Heart\n3.Kidney\n4.Hand\n5.Foot"<<endl;
        cin>>c;
        switch(c){
            case 1:
                p.updateCharge(kneeSur);
                break;
            case 2:
                p.updateCharge(heartSur);
                break;
            case 3:
                p.updateCharge(kidneySur);
                break;
            case 4:
                p.updateCharge(handSur);
                break;
            case 5:
                p.updateCharge(footSur);
                break;
            default:
                cout<<"invalid input"<<endl;
                break;


        }
    }
};

class Pharmacy{
    double painkiller =200;
    double feverMed = 1000;
    double cancerMed = 700;
    double coldMed = 500;
    double hivMed = 300;
public:
    void sellMed(PatientAccount &p){

        int c;
        cout<<"What Medication you want?\n1.Pain killer\n2.fever med\n3.cancer med\n4.cold med\n5.Hiv med"<<endl;
        cin>>c;
        switch(c){
            case 1:
                p.updateCharge(painkiller);
                break;
            case 2:
                p.updateCharge(feverMed);
                break;
            case 3:
                p.updateCharge(cancerMed);
                break;
            case 4:
                p.updateCharge(coldMed);
                break;
            case 5:
                p.updateCharge(hivMed);
                break;
            default:
                cout<<"invalid input"<<endl;
                break;


        }
    }

};

int main() {
    bool stay = true;
    int choice =0;
    Surgery s;
    Pharmacy p;
    PatientAccount pa;
    while(stay){
        cout<<"What do you want to do? \n1.Surgery\n2.Buy Medication\n3.Check out\n4.Stay for a day"<<endl;
        cin >>choice;
        switch (choice){
            case 1:
                s.doSurgery(pa);
                break;
            case 2:
                p.sellMed(pa);
                break;
            case 3:
               cout<<"Cost total is: "<<pa.getCharge()<<endl;
               stay = false;
               break;
            case 4:
                pa.updateDays();
                cout<<"Stayed for a day"<<endl;
                break;
            default:
                cout<<"invalid input"<<endl;

        }


    }

}