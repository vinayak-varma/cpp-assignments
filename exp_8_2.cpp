#include <iostream> 
#include <string> 
using namespace std; 
// Base class: Employee 
class Employee 
{ 
    protected:
        int empId;
        string empName;
        float basicSalary;
    public:
        void getEmployeeInfo() 
        { 
            cout << "Enter Employee ID: "; 
            cin >> empId;
            cin.ignore();
            cout << "Enter Employee Name: "; 
            getline(cin, empName); 
            cout << "Enter Basic Salary: "; 
            cin >> basicSalary; 
        }
};

// Derived class (Multilevel): Department 
class Department : public Employee 
{ 
    protected:
        string deptName;
    public:
        void getDepartmentInfo() 
        { 
            cin.ignore();
            cout << "Enter Department Name: "; 
            getline(cin, deptName); 
        }
};

// Derived class (Multilevel): PF (from Department)
class PF : public Department 
{ 
    protected: 
        float pfAmount;
    public:
        void calculatePF() 
        { 
            pfAmount = basicSalary * 0.12; //12% of basic salary
        } 
        void displayPFInfo() 
        { 
            cout << "\n--- Employee Details (Multilevel Inheritance) ---\n";
            cout << "Employee ID: " << empId<<endl; 
            cout << "Employee Name: " << empName<<endl; 
            cout << "Basic Salary: " << basicSalary<<endl; 
            cout << "Department Name: " << deptName<<endl; 
            cout << "PF Amount: " << pfAmount<<endl; 
        }
};

// Another Derived class (Hierarchical) from Employee 
class Project : public Employee 
{ 
    protected:
        string projectName;
    public:
        void getProjectInfo() 
        { 
            cin.ignore();
            cout << "Enter Project Name: "; 
            getline(cin, projectName); 
        } 
        void displayProjectInfo() 
        { 
            cout << "\n--- Employee Details (Hierarchical Inheritance) ---\n";
            cout << "Employee ID: " << empId<<endl; 
            cout << "Employee Name: " << empName<<endl; 
            cout << "Project Name: " << projectName<<endl; 
        }
};

//Main Function
int main()
{
    // Object for multilevel inheritance 
    PF emp1;
    cout << "--- Enter Employee Info for PF ---\n";
    emp1.getEmployeeInfo();
    emp1.getDepartmentInfo();
    emp1.calculatePF();
    emp1.displayPFInfo();

    // Object for hierarchical inheritance 
    Project emp2; 
    cout << "\n--- Enter Project Info ---\n"; 
    emp2.getEmployeeInfo(); 
    emp2.getProjectInfo(); 
    emp2.displayProjectInfo();
    return 0;
}