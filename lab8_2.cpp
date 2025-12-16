#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

char findGrade(double x){
    if(x > 90){
        char y = 'A';
        return y;
    }else if(x > 75){
        char y = 'B';
        return y;
    }else if(x > 60){
        char y = 'C';
        return y;
    }else if(x > 45){
        char y = 'D';
        return y;
    }else{
        char y = 'F';
        return y;
    } 
}

int main(){
	//Input the number of students
	int N,i = 0;
	cout << "Enter the number of students: ";
	cin >> N;
	string name[N];
	float score[N];	
	
	//Store names and scores of students into an array 
	while(i < N){
		float number = 0;
		string x,y; 
		cout << "Name of student " << i+1 << ": ";
		cin.ignore();
		getline(cin,x);
		name[i] = x;
		cout << "Score of student " << i+1 << ": ";
		cin >> number;
		score[i] = number;
		i++;
	}
	
	//Print names scores and grades
	i = 0;
	cout << "---------------------------------------------\n";
	cout << setw(25) << "Name" << setw(8) << "Score" << setw(8) << "Grade" << "\n";
	cout << "---------------------------------------------\n";
	while(i < N){
		cout << setw(25) << name[i] << setw(8) << score[i] << setw(8) << findGrade(score[i]) << "\n";
		i++;
	} 
	cout << "---------------------------------------------\n";

	return 0;
}
