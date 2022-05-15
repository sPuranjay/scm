#include<iostream>
using namespace std;
class salary{
	public:
	int da,allow,pf,basic,hra;
	string name;
		
};
int  main(){
salary s;
int total=0;

cout<<"Press 1: For 1300 allowance"<<endl;
cout<<"Press 2: For 1500 allowance"<<endl;
cout<<"Press 3: For 1700 allowance"<<endl;


cout<<"Enter Employee name :";
cin>>s.name;
cout<<"Enter Your basic salary :";
cin>>s.basic;
cout<<"Enter Your Allowance :";
cin>>s.allow;
if(s.allow==1){
	total=s.basic+(0.2*s.basic)+(0.5*s.basic)+1300-(0.11*s.basic);
}
else if(s.allow==2){
	total=s.basic+(0.2*s.basic)+(0.5*s.basic)+1500-(0.11*s.basic);
}
else{
	total=s.basic+(0.2*s.basic)+(0.5*s.basic)+1700-(0.11*s.basic);
}

cout<<"Employee "<<s.name<<" Total Salary : "<<total<<endl;








}
