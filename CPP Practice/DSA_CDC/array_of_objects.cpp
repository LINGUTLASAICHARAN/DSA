#include <iostream>
using namespace std;
class Emp{
    int id, salary;
    public :
    void setData(void){
        
        cout << "Enter the id of employee" <<endl;
        cin >> id;
        cout << "Enter the salary" << endl;
        cin >> salary;

    }
    void displayData(void){
        cout << "id : " << id << "  salary: " <<salary<< endl;

    }
};
int main(){
    int num;
    cout << "Enter the no of Employees" << endl;
    cin >> num;
    Emp company[num];
    for(int i = 0 ; i < num ; i++){
company[i].setData();
    }
    cout << "----Displaying the data of employees in the company----"<<endl;
    for(int i = 0 ; i < num ; i++){
        cout << "Employee num " << i+1 << endl;
company[i].displayData();
    }

    return 0;
}