#include <iostream>
using namespace std;
#include <string>

int main(){
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
	return 0;
}
/*
My name: Mohialdeen Alderdery
class: seconde year class
Department: computer engineering
*/
