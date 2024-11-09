//Some time in programming you're going to have some classes for which you want to specialize the storage mechanism,For example you want to speed up the creation of an object or we want to use the memory which is used by another object.At that time we can overload new and delete opertor
//Another things is the c++ does not provide any garbage collection like another language like C# or java,we can provide garbage collection for our object.So when our object are no longer needed they will be automatically deleted.  
// Don't be confuse between new keyword and new operator
// Student *stup = new Student;
//new opertor allows you to change the memory allocation technique or matter but it doesn't have responsibility for calling the constructor  
//and the job of calling a constructor will be done by new keyword.
//Here we will discuss about new opertor 
#include <iostream>
#include<string.h>
#include<stdlib.h>
#include<stdexcept>
using namespace std;
class Student
{
    private:
      string name;
      int age;
    public:
      Student()
      {
        name="NULL";
        age=0;
      }
      Student(string name,int age)
      {
        this->name=name;
        this->age=age;
      }
      void display()
      {
        cout<<"Name: "<<name<<endl;
        cout<<"Age : "<<age<<endl;
      }
      void* operator new(size_t size)
      {
        void* point_to_current_obj;
        cout<<"Overloaded new size= "<<size<<endl;
        point_to_current_obj=malloc(size);
        // if(!point_to_current_obj)
        // {
        //   bad_alloc=ba;//error
        //   throw ba;
        // }
        return point_to_current_obj;
      }
      void operator delete(void* point_to_current_obj)
      {
        cout<<"Overloaded delete"<<endl;
        free(point_to_current_obj);
      }
};

int main()
{
  Student *stup;
  // try
  // {
    stup=new Student("Anish Roy", 27);
    stup->display();
    delete stup;
    stup->display();
  // }
  // catch(bad_alloc b)
  // {
  //   b.what();
  // }

  return 0;
}
