#include <iostream>
#include <string>
using namespace std;


int main () {
    struct Student { //non-primitive data types, struct
        int id;
        string name;
        string course;
        int age;
    };

    Student students[5] = { //create arrays of the struct
        {24006152, "Eavan", "CS", 20},
        {24006979, "John", "IT", 21},
        {24007867, "Ali", "IS", 22},
        {24007878, "Chua", "CS",20},
        {24003456, "Jessy", "PE", 22}
    };

    // display the students
    cout << "All Students\n\n";
    for (int i = 0; i < 5; i++){
        cout << "ID: " << students[i].id << "\n";
        cout << "Name: " << students[i].name << "\n";
        cout << "Course: " << students[i].course << "\n";
        cout << "Age: " << students[i].age << "\n\n";
    }

    // search by id
    int searchID;
    cout << "Enter ID to search: ";
    cin >> searchID;

    bool searchFound = false;
    for (int i = 0; i < 5; i++){
        if(students[i].id == searchID){
            cout << "Found. Name: " << students[i].name << "\n";
            searchFound = true;
        }
    }
    if (!searchFound) cout << "Student not found.\n";

    // update records in a loop until user quits
    string inputID;
    while (true) {
        cout << "\nEnter ID to update (or Q to quit): ";
        cin >> inputID;

        if (inputID == "Q" || inputID == "q") {
            cout << "Exiting update mode.\n";
            break;
        }

        int updateID = stoi(inputID);
        string change;
        cout << "What do you want to change (id/name/course/age): ";
        cin >> change;
        cin.ignore();

        bool updateFound = false;
        for (int i = 0; i < 5; i++){
            if (students[i].id == updateID){
                updateFound = true;
                if(change == "id"){
                    int newID;
                    cout << "Enter new id: ";
                    cin >> newID;
                    students[i].id = newID;
                    cout << "Updated.\n";
                }
                else if(change == "name"){
                    cout << "Enter new name: ";
                    getline(cin, students[i].name);
                    cout << "Updated.\n";
                }
                else if(change == "course"){
                    cout << "Enter new course: ";
                    getline(cin, students[i].course);
                    cout << "Updated.\n";
                }
                else if(change == "age"){
                    int newAge;
                    cout << "Enter new age: ";
                    cin >> newAge;
                    students[i].age = newAge;
                    cout << "Updated.\n";
                }
                else{
                    cout << "Invalid field. Use: id, name, course, or age.\n";
                }

                cout << "ID: " << students[i].id << '\n';
                cout << "Name: " << students[i].name << '\n';
                cout << "Course: " << students[i].course << '\n';
                cout << "Age: " << students[i].age << '\n';
            }
        }
        if (!updateFound) cout << "Student not found.\n";
    }

    return 0;
}
