#include<iostream>
using namespace std;

class Student{//ex1
    private:
        float degree;
    public:
        static int count;
        Student()
        {
            degree=10;
            count++;
        }
        Student(float x)
        {
            degree=x;
            count++;
        }
        int getDegree()
        {
            return degree;
        }
        ~Student(){
            cout<<"Instance destroyed!"<<endl;
        }
};
class Student2{//ex2
    private:
        int grade;
    public:
        int getGrade()
        {
            return grade;
        }
        Student2 ()
        {
            grade = 8;
        }
};
int Student::count = 0;//ex3
class Student3//ex4
{
    struct Node
    {
        int data;
        Node *next;
    };
    private:
        Node *head;
    public:
        static int count2;
        Student3()
        {
            head=NULL;
        }
        void addValue(int val)
        {
            Node *n = new Node();
            n->data = val;
            n->next = head;
            head=n;
            count2++;
        }
        void display()
        {
            while(head!=NULL)
            {
                cout<<head->data<<" ";
                head=head->next;
            }
            cout<<"\n";
        }
};
int Student3::count2=0;
int main()
{
    Student student1;
    Student *student2=new Student(8);
    cout<<student1.getDegree()<<'\n';

    Student2 student3;
    cout<<student3.getGrade()<<'\n';

    cout<<student1.count<<'\n';

    Student3 s1;
    s1.addValue(5);
    s1.addValue(20);
    s1.addValue(10);
    cout<<"Number of elements in list:"<<s1.count2<<'\n';
    s1.display();


}
