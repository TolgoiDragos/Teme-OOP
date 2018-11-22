#include <iostream>
#include <string>
#include <list>
using namespace std;

class Student {
private:
    int note;
    string name;
public:
    Student(int note = 0, string name="Joe Doe"){
        this->note = note;
        this->name = name;
    }
    void setNote(int n){
        this->note = n;
    }
    int getNote(){
        return this->note;
    }
    string getName(){
        return this->name;
    }
    void setName(string name){
        this->name = name;
    }
};

class StudentsGroup {
private:
    int studentsNumber;
    Student *studentsList;
public:
    StudentsGroup(int studentsNumber){
        this->studentsNumber = studentsNumber;
        studentsList = new Student[studentsNumber];
    }
    void showStudentsInGroup(){
        for(int i=0; i<this->studentsNumber;i++){
            cout<<i<<" "<<studentsList[i].getName()<<" "<<studentsList[i].getNote()<<endl;
        }
    }
    void readStudentGroup(){
        int note;
        string studentName;
        for(int i=0; i<this->studentsNumber;i++){
                cout<<"student "<<i<<" name:";
                cin>>studentName;
                cout<<"note ";
                cin>>note;
                studentsList[i] = Student(note,studentName);
        }
    }
};

int main()
{
    StudentsGroup *studentsGroup = new StudentsGroup(3);
    studentsGroup->readStudentGroup();
    studentsGroup->showStudentsInGroup();
    return 0;
}


/*#include <iostream>
#include <string>
#include <list>
using namespace std;

class Student {
private:
    int note;
    string name;
public:
    Student(int note = 0, string name="Joe Doe"){
        this->note = note;
        this->name = name;
    }
    void setNote(int n){
        this->note = n;
    }
    int getNote(){
        return this->note;
    }
    string getName(){
        return this->name;
    }
    void setName(string name){
        this->name = name;
    }
};

class StudentsGroup {
private:
    int studentsNumber;
    list<pair<string,int> > studentsList;
public:
    StudentsGroup(int studentsNumber){
        this->studentsNumber = studentsNumber;
    }
    void showStudentsInGroup(){
        int i=0;
        list<pair<string,int> >::iterator it;
        for(it=studentsList.begin(); it != studentsList.end();++it){
            cout<<i<<" "<<it->first<<" "<<it->second<<endl;
            i++;
        }
    }
    void readStudentGroup(){
        int note;
        string studentName;
        for(int i=0; i<studentsNumber;i++){
                cout<<"student "<<" name:";
                cin>>studentName;
                cout<<"note ";
                cin>>note;
                studentsList.push_back(make_pair(studentName,note));
        }
    }
    int calculatemax()
    {
        int maxEl=-1;
        string s;
        list<pair<string,int> >::iterator it;
        for(it=studentsList.begin(); it!= studentsList.end();++it)
        {
            if(it->second>maxEl)
                maxEl=it->second;
        }
        return maxEl;
    }
    string student5()
    {
        list<pair<string,int> >::iterator it;
        for(it=studentsList.begin(); it!= studentsList.end();++it)
            if(it->second==5)
                return it->first;
    }
};

int main()
{
    StudentsGroup *studentsGroup = new StudentsGroup(3);
    studentsGroup->readStudentGroup();
    studentsGroup->showStudentsInGroup();
    cout<<"Nota maxima este "<<studentsGroup->calculatemax()<<'\n';
    cout<<"Primul student cu nota 5 este "<<studentsGroup->student5()<<'\n';
    return 0;
}

*/
