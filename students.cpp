#include <iostream>
#include "student.h"

class student{
    public:
    string name;
    int uni_id;
    int degree;
    char depratment; 
};

int main()
{
    student student1;
    student student2;
    student student3;
    student student4;
    student student5;

    student1.name= "Mohialdeen";
    student1.uni_id= 17-21020930;
    student1.degree= 90;
    student1.depratment= "C"; 

    student2.name= "Ali";
    student2.uni_id= 2;
    student2.degree= 5;
    student2.depratment= "A";

    student3.name= "Hassan";
    student3.uni_id= 3;
    student3.degree= 74;
    student3.depratment= "T";

    student4.name= "Mohammed";
    student4.uni_id= 4;
    student4.degree= 40;
    student4.depratment= "A";

    student5.name= "Fatima";
    student5.uni_id= 5;
    student5.degree= 81;
    student5.depratment= "C";


    //cout<<"name: "<<student1.name\n<<"uni_id: "<<student1.uni_id\n<<"degree: "<<student1.degree\n<<"depratment: "<<student1.depratment<<endl;
    //cout<<"name: "<<student2.name\n<<"uni_id: "<<student2.uni_id\n<<"degree: "<<student2.degree\n<<"depratment: "<<student2.depratment<<endl;
    //cout<<"name: "<<student3.name\n<<"uni_id: "<<student3.uni_id\n<<"degree: "<<student3.degree\n<<"depratment: "<<student3.depratment<<endl;
    //cout<<"name: "<<student4.name\n<<"uni_id: "<<student4.uni_id\n<<"degree: "<<student4.degree\n<<"depratment: "<<student4.depratment<<endl;
    //cout<<"name: "<<student5.name\n<<"uni_id: "<<student5.uni_id\n<<"degree: "<<student5.degree\n<<"depratment: "<<student5.depratment<<endl;


string student_name[10] = {"Mhialdeen", "Mohammd", "Ali", "Seif", "Fatima", "Waad", "Ammar", "hessen", "Ahmed", "Eva"};
int student_uni_id[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int student_degree[10] = {99, 89, 79, 69, 59, 49, 39,29,19, 9};
char student_depratment[10] = [C, C, A, C, C, C, C, C, T, T];

string subject[8] = {"subject1", "subject2", "subject3", "subject4", "subject5", "subject6", "subject7", "subject8", "subject9", "subject10"}  
}

