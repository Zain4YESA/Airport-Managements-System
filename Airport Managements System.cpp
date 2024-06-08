#include <iostream>
#include <string>
using namespace std;

class Data_Base {
protected:
    double serial_no = 14.5;
    string Name;
    string Departure_date;
    string Arrival_date;
    string Airport_list_For_Departure;
    string Airport_list_For_Arrival;

public:
    Data_Base() {}
    Data_Base(double x, string a, string b, string c, string d, string e) {
        serial_no = x;
        Name = a;
        Departure_date = b;
        Arrival_date = c;
        Airport_list_For_Departure = d;
        Airport_list_For_Arrival = e;
    }
};

class Func : public Data_Base {
public:
    void Check_Serial_Number() {
        cout << "Enter the Serial Number: ";
        cin >> serial_no;

        if (serial_no == 14.5) {
            cout << "Right Number" << endl;
        } else {
            cout << "Error, Invalid number!" << endl;
        }
    }

    double Get_Serial_Number() {
        return serial_no;
    }

    void Set_Name() {
        cout << "Enter the Name: ";
        cin >> Name;
    }

    string Get_Name() {
        return Name;
    }

    void Get_List_of_Departure_flight() {
        cout << "List Flights For Departure (1: Dubai, 2: London, 3: China, 4: USA): ";
        int choice;
        cin >> choice;
        switch (choice) {
            case 1:
                Airport_list_For_Departure = "Dubai";
                break;
            case 2:
                Airport_list_For_Departure = "London";
                break;
            case 3:
                Airport_list_For_Departure = "China";
                break;
            case 4:
                Airport_list_For_Departure = "USA";
                break;
            default:
                cout << "Invalid choice" << endl;
                return;
        }
        cout << "Selected: " << Airport_list_For_Departure << endl;
    }

    void Get_List_of_Arrival_flight() {
        cout << "List Flights For Arrival (1: Dubai, 2: London, 3: China, 4: USA): ";
        int choice;
        cin >> choice;
        switch (choice) {
            case 1:
                Airport_list_For_Arrival = "Dubai";
                break;
            case 2:
                Airport_list_For_Arrival = "London";
                break;
            case 3:
                Airport_list_For_Arrival = "China";
                break;
            case 4:
                Airport_list_For_Arrival = "USA";
                break;
            default:
                cout << "Invalid choice" << endl;
                return;
        }
        cout << "Selected: " << Airport_list_For_Arrival << endl;
    }

    void Set_Departure_Date() {
        cout << "Departure Date: ";
        cin >> Departure_date;
    }

    string Get_Departure_Date() {
        return Departure_date;
    }

    void Set_Arrival_Date() {
        cout << "Arrival Date: ";
        cin >> Arrival_date;
    }

    string Get_Arrival_Date() {
        return Arrival_date;
    }
};

int main() {
   

    Func fu;
    fu.Check_Serial_Number();
    cout << "Serial Number: " << fu.Get_Serial_Number() << endl;
    fu.Set_Name();
    cout << "Name: " << fu.Get_Name() << endl;
    fu.Get_List_of_Departure_flight();
    fu.Set_Departure_Date();
    cout << "Departure Date: " << fu.Get_Departure_Date() << endl;
    fu.Get_List_of_Arrival_flight();
    fu.Set_Arrival_Date();
    cout << "Arrival Date: " << fu.Get_Arrival_Date() << endl;

    return 0;
}