#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <cctype>
using namespace std;

class Employee {
public:

    Employee(){
        employeeCount++;
        empId = 1000 + employeeCount;
        isActive = true;
    }

    double getBasicSalary() const{
        return basicSalary;
    }

    void setBasicSalary(double basicSalary){
        if (basicSalary > 10000 && basicSalary < 500000){
            this->basicSalary = basicSalary;
        }
        else{
            cout << "ERROR: Salary must be between Rs.10,000 and Rs.5,00,000. Value rejected." << endl;
            cout << endl;
        }
    }

    string getDepartment() const{
        return department;
    }

    void setDepartment(const string &department){
        string lowerDept = department;
        transform(lowerDept.begin(), lowerDept.end(), lowerDept.begin(), [](unsigned char c) { return tolower(c); });

        if (lowerDept == "engineering") {
            this->department = "Engineering";
        } else if (lowerDept == "hr") {
            this->department = "HR";
        } else if (lowerDept == "finance") {
            this->department = "Finance";
        } else if (lowerDept == "operations") {
            this->department = "Operations";
        } else {
            cout << "ERROR: '" << department << "' is not a registered department." << endl;
            cout << endl;
        }
    }

    int getEmpId() const{
        return empId;
    }

    char getGrade() const{
        return grade;
    }

    void setGrade(char grade){
        char upperGrade = toupper(static_cast<unsigned char>(grade));

        if (upperGrade == 'A' || upperGrade == 'B' || upperGrade == 'C' || upperGrade == 'D'){
            this->grade = upperGrade;
        }
        else{
            cout << "ERROR: Invalid grade '" << grade << "'. Accepted values: A, B, C, D." << endl;
            cout << endl;
        }
    }

    string getName() const{
        return name;
    }

    void setName(const string &name){
        if (name.empty()){
            cout << "ERROR: Name cannot be empty." << endl;
            cout << endl;
        }
        else{
            this->name = name;
        }
    }

    bool getIsActive() const{
        return isActive;
    }

    void deactivate(){
        isActive = false;
    }

    double computeAllowances() const{
        if (grade == 'A'){
            return basicSalary * 0.40;
        }
        else if (grade == 'B'){
            return basicSalary * 0.30;
        }
        else if (grade == 'C'){
            return basicSalary * 0.20;
        }
        else{
            return basicSalary * 0.10;
        }
    }

    double computeGrossSalary() const{
        return basicSalary + computeAllowances();
    }

    double computeTax() const{
        double gross = computeGrossSalary();

        if (gross <= 50000){
            return 0;
        }
        else if (gross <= 100000){
            return (gross - 50000) * 0.10;
        }
        else{
            return 5000 + (gross - 100000) * 0.20;
        }
    }

    double computeNetSalary() const{
        return computeGrossSalary() - computeTax();
    }

    void printPayslip() const{
        cout << "====================================" << endl;
        cout << " EMPLOYEE PAYSLIP - AUG 2026" << endl;
        cout << "====================================" << endl;

        cout << "Emp ID : " << empId << endl;
        cout << "Name : " << name << endl;
        cout << "Department : " << department << endl;
        cout << "Grade : " << grade << endl;

        if (isActive){
            cout << "Status : Active" << endl;
        }
        else{
            cout << "Status : Inactive" << endl;
        }

        cout << "------------------------------------" << endl;
        cout << fixed << setprecision(2);
        cout << "Basic Salary : Rs. " << basicSalary << endl;
        cout << "Allowances : Rs. " << computeAllowances() << endl;
        cout << "Gross Salary : Rs. " << computeGrossSalary() << endl;
        cout << "------------------------------------" << endl;
        cout << "Tax Deduction : Rs. " << computeTax() << endl;
        cout << "Net Salary : Rs. " << computeNetSalary() << endl;
        cout << "====================================" << endl;
    }

    static int getEmployeeCount()
    {
        return employeeCount;
    }

    void acceptDetails(){
        string tempName;
        string tempDepartment;
        char tempGrade;
        double tempSalary;

        cout << "Enter name: " << endl;
        getline(cin >> ws, tempName);
        setName(tempName);

        cout << "Enter department::(Engineering, HR, Finance, Operations): " << endl;
        cin >> tempDepartment;
        setDepartment(tempDepartment);

        cout << "Enter grade::(A, B, C, D):" << endl;
        cin >> tempGrade;
        setGrade(tempGrade);

        cout << "Enter basic salary::(Rs.10,000 - Rs.5,00,000): " << endl;
        cin >> tempSalary;
        setBasicSalary(tempSalary);
        cout << endl;
    }

private:

    int empId;
    string name, department;
    char grade;
    double basicSalary;
    bool isActive;

    static int employeeCount;
};

int Employee::employeeCount = 0;

int main(){

    Employee e1;

    Employee* e2 = new Employee();
    Employee* e3 = new Employee();

    e1.acceptDetails();
    e2->acceptDetails();
    e3->acceptDetails();

    e1.printPayslip();
    e2->printPayslip();
    e3->printPayslip();

    // Simulate resignation
    e3->deactivate();

    if (!e3->getIsActive()){
        cout << e3->getName() << " is no longer active. Payroll skipped." << endl;
    }

    cout << "Total Employees : " << Employee::getEmployeeCount() << endl;
    delete e2;
    delete e3;

    return 0;
}
