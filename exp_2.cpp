#include <iostream>
using namespace std;
class Student
{
    private:
        int rollNo;
        string name;
        string div;
        float marks[10];
        float total;
        float percentage;
        int n;
    public:
        void getData()
        {
            //Accept roll number
            cout << "\nEnter roll number: ";
            cin >> rollNo;
            
            cin.ignore();
            //Accept name
            cout << "\nEnter name: ";
            getline(cin, name);
            
            //Accept div
            cout << "\nEnter division: ";
            getline(cin, div);

            //Accept number of subjects
            cout << "\nEnter number of subjects: ";
            cin >> n;

            total = 0; //Initialize total to 0

            //Loop to accept marks for each subject
            for(int i = 0; i < n; i++)
            {
                cout << "\nEnter marks for subject " << i+1 << ": ";
                cin >> marks[i];
                total += marks[i]; //Add marks to total
            }
        }
        //Function to calculate percentage
        void calculate()
        {
            percentage = total / n; //Calculate percentage
        }

        //Function to display student results
        void display()
        {
            cout << "\nRoll Number: " << rollNo;
            cout << "\nName: " << name;
            cout << "\nDivision: " << div;
            cout << "\nTotal Marks: " << total;
            cout << "\nPercentage: " << percentage << "%";
        }

};

//Main function
int main()
{
    int stud; //Stores number of students

    //Accept number of students
    cout << "Enter number of students: ";
    cin >> stud;

    Student s[10]; //Array of objects of Student class

    //Loop for each student
    for(int i=0; i<stud; i++)
    {
        cout<<"\n--- Student " << i+1 << " ---";
        s[i].getData(); //Accept student data
        s[i].calculate(); //Calculate percentage
        s[i].display(); //Display student results
    }
    return 0; //End of program
}