#include <iostream>
using namespace std;
#include <string>
#include "student.h"

int main(){
//step 1..        
string name,depratment,A,T,C;

//name area51
cin >>name;
cout<<"name :"<<name<<endl; 

//university_id area51
int unv_id;
cin>>unv_id;
cout<<"unv_id :"<<unv_id<<endl;

//degree area51
    int degree;
cin >> degree;
switch (degree){
    case 50 ... 59:
    cout<<"Acadimeic appreciation: F"<<endl;
    break;
    case 60 ... 69:
    cout<<"Acadimeic appreciation: D"<<endl;
    break;
    case 70 ... 79:
    cout<<"Acadimeic appreciation: C"<<endl;
    break;
    case 80 ... 89:
    cout<<"Acadimeic appreciation: B"<<endl;
    break;
    case 90 ... 100:
    cout<<"Acadimeic appreciation: A"<<endl;
    break;
    default:
    cout<<"i am out"<<endl;
}

//depratment area51
cin>>depratment;
if (depratment == "A") {
cout<<"depratment :control"<<endl;
}
else if (depratment == "T") {
cout<<"depratment :communications"<<endl;
}
else if (depratment == "C") {
cout<<"depratment :computer"<<endl;
}

//step 2..
    int studentnum =5;
    for (int i = 0; i < studentnum; ++i){
        student student;
        cout<< i <<endl;
    }

    do{
        cout<< student <<endl;
        studentnum++;
    } while(true) { exit; }

//atep 3..
std::cout << "nmae: " <<student_name[0] <<student_uni_id[0] << student_degree[0] << student_depratment[0] << endl,
std::cout << "student_degree / subject =" << student_degree[0] / int subject <<endl;

std::cout << "nmae: " <<student_name[1] <<student_uni_id[1] << student_degree[1] << student_depratment[1] << endl,
std::cout << "student_degree / subject =" << student_degree[1] / int subject <<endl;

std::cout << "nmae: " <<student_name[2] <<student_uni_id[2] << student_degree[2] << student_depratment[2] << endl,
std::cout << "student_degree / subject =" << student_degree[2] / int subject <<endl;

std::cout << "nmae: " <<student_name[3] <<student_uni_id[3] << student_degree[3] << student_depratment[3] << endl,
std::cout << "student_degree / subject =" << student_degree[3] / int subject <<endl;

std::cout << "nmae: " <<student_name[4] <<student_uni_id[4] << student_degree[4] << student_depratment[4] << endl,
std::cout << "student_degree / subject =" << student_degree[4] / int subject <<endl;

std::cout << "nmae: " <<student_name[5] <<student_uni_id[5] << student_degree[5] << student_depratment[5] << endl,
std::cout << "student_degree / subject =" << student_degree[5] / int subject <<endl;

std::cout << "nmae: " <<student_name[6] <<student_uni_id[6] << student_degree[6] << student_depratment[6] << endl,
std::cout << "student_degree / subject =" << student_degree[6] / int subject <<endl;

std::cout << "nmae: " <<student_name[7] <<student_uni_id[7] << student_degree[7] << student_depratment[7] << endl,
std::cout << "student_degree / subject =" << student_degree[7] / int subject <<endl;

std::cout << "nmae: " <<student_name[8] <<student_uni_id[8] << student_degree[8] << student_depratment[8] << endl,
std::cout << "student_degree / subject =" << student_degree[8] / int subject <<endl;

std::cout << "nmae: " <<student_name[9] <<student_uni_id[9] << student_degree[9] << student_depratment[9] << endl,
std::cout << "student_degree / subject =" << student_degree[9] / int subject <<endl;




	return 0;
}
/*
My name: Mohialdeen Alderdery
class: seconde year class
Department: computer engineering
*/
