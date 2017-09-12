#include<stdio.h>
class Student {
public:
	//the parameters this class includes
	char* name;
	int age;
	float score;
	//the function this class includes
	void display(){
		printf("Name:%s\t\t",name);
		printf("Age:%d\t\t",age);
		printf("Score:%.2f\t\t\n",score);
	}	
};

int main(){
	// creat objects
	class Student stu1;
	class Student stu2;
	// declare member variables of the created objects
	stu1.name = "Lio";
	stu1.age = 24;
	stu1.score = 2.3;
	
	stu2.name = "Andy";
	stu2.age = 26;
	stu2.score = 2.0;
	//use the member function of objects
	stu1.display();
	stu2.display();
	
	return 0;
	
}
