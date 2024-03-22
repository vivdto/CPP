#include<iostream>
using namespace std;

// Abstract class representing an employee
class AbstractEmployee{
    virtual void AskForPromotion() =0; // Pure virtual function, making it an abstract class
};

// Employee class
class Employee:AbstractEmployee{
    private:
    string Company;
    int Age;
    protected:
    string Name;
    
    public:
    // Setter and Getter methods for Name, Company, and Age
    void setName(string name){
        Name = name;
    }
    string getName() {
        return Name;
    }

    void setCompany(string company){
        Company = company;
    }
    string getCompany() {
        return Company;
    }
    
    void setAge(int age){
        if(age>=18)
        Age = age;
    }
    int getAge() {
        return Age;
    }

    // Method to introduce the employee
    void IntroduceYourself(){ 
        cout<<"Name: "<<Name<<endl;
        cout<<"Company: "<<Company<<endl;
        cout<<"Age: "<<Age<<endl;
    }
    
    // Constructor to initialize employee data
    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }
    
    // Method to ask for promotion
    void AskForPromotion()
    {
        if (Age>40)
        cout<<Name<<" got promoted!"<<endl;
        else
        cout<< Name <<" sorry no promotion for you! "<<endl;
    }
    
    // Virtual method representing work
    virtual void Work()
    {
        cout<<Name << " is checking email, task backlog, performing tasks..."<<endl;
    }
};

// Developer class inheriting from Employee
class Developer:public Employee {
    public:
    string FavProgrammingLanguage;
    Developer(string name, string company, int age, string favProgrammingLanguage)
    
    :Employee(name, company, age)
    {
        FavProgrammingLanguage = favProgrammingLanguage;
    }
    
    // Method specific to developers to fix bugs
    void FixBug() {
        cout<<Name<<" fixed bug using "<< FavProgrammingLanguage <<endl;
    }
};

// Teacher class inheriting from Employee
class Teacher:public Employee{
    public:
    string Subject;
    void PrepareLesson()
    {
        cout<<Name<<" is preparing "<< Subject <<" lesson"<<endl;
    }
    Teacher(string name, string company, int age, string Subject)
    
    :Employee(name, company, age)  
    {
        Subject=Subject;
    }
};

int main ()
{
    // Creating instances of Developer and Teacher
    Developer d = Developer("Vivashwat","Google",25,"C++");
    Teacher t = Teacher("Vivashwat","Google",55,"Maths");
    
    // Calling specific methods of Developer and Teacher
    t.PrepareLesson();
    t.AskForPromotion();
    d.Work();
    t.Work();

    // Using polymorphism with pointers to Employee objects
    Employee *e1=&d;
    Employee *e2=&t;
    
    e1->Work();
    e2->Work();

    return 0;
}
