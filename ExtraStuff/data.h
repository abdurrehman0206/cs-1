#include<iostream>
#include<string>
#include<iomanip>
#include<conio.h>
#include<fstream>
using namespace std;
class Student {
protected:
    string item_name;
    float price;
    int quantity, code;
public:
    void menu();
    void add_item();
    void show_item();

};
void Student::menu() {
    int sel;

    cout << "--->MENU<---\n";
    cout << "1.Add Item\t2.View Item\n3.Delete Item\t4.Update Item\n5.Exit \n";
    cout << "Please Select:"; cin >> sel;
    cout << "\n\n";
    switch (sel) {
    case 1:

        add_item();
        cin.ignore();
        cout << "Press Enter to go Main Menu.....";
        cin.get();
        system("cls");
        menu();
        break;

    case 2:
        cout << "----------------------------------------------\n";
        cout  <<setw(6) << "Name" << setw(12) << " Code" << setw(12) << " Price " << setw(12) << "Quantity" << endl;
        cout << "----------------------------------------------\n";
        show_item();
        cin.ignore();
        cout << "Press Enter to go Main Menu.....";
        cin.get();
        system("cls");
        menu();
        break;
    case 6:
        exit(1);
    default:
        cout << "You entered invalid option:\n";


    }

}
void Student::add_item() {
    char choice;
    int reps;
    do {
    cout << "How many items you want to enter: "; cin >> reps;
    cout << "\n";
    
        for (int i = 0; i < reps; i++)
        {
         
            cout << "Please Enter Item number "<<i+1<<"..........\n";
            cout << "Item name: ";  cin >> item_name;
            
            cout << "Item code: "; cin >> code;
            cout << "Item price: "; cin >> price;
            cout << "Item quantity: "; cin >> quantity;
            cout<<"\n\n";

            fstream File;
            File.open("list.txt", ios::out | ios::app);
            if (File.is_open()) {
                File << setw(6) << item_name << setw(12) << code << setw(12) << price << setw(12) << quantity << endl; 
            }
            else {
                cout << "Error";
            }

            File.close();
        }

        cout << "Do you want to add more item(y/n)?";
        cin >> choice;
    } while ('y' == choice);

}

void Student::show_item() {
    fstream File;
  
    File.open("list.txt", ios::in);  
    if (File.is_open()) {
        string line;
        while (!File.eof()) {
            getline(File,line);
            cout << line << endl;
            //cout << item_name << " " << code << " " << price << " " << quantity << endl;
           // File >> item_name >> code >> price >> quantity;
        }
        File.close();
    }
}
