/* You have to create a class, named Student, representing the student's details, as mentioned above, and store the data of a student. Create setter and getter functions for each element; that is, the class should at least have following functions:

get_age, set_age
get_first_name, set_first_name
get_last_name, set_last_name
get_standard, set_standard
Also, you have to create another method to_string() which returns the string consisting of the above elements, separated by a comma(,). You can refer to stringstream for this.

Input Format

Input will consist of four lines.
The first line will contain an integer, representing the age. The second line will contain a string, consisting of lower-case Latin characters ('a'-'z'), representing the first_name of a student.
The third line will contain another string, consisting of lower-case Latin characters ('a'-'z'), representing the last_name of a student.
The fourth line will contain an integer, representing the standard of student.

Note: The number of characters in first_name and last_name will not exceed 50.

Output Format

The code provided by HackerRank will use your class members to set and then get the elements of the Student class.

Sample Input

15
john
carmack
10
Sample Output

15
carmack, john
10

15,john,carmack,10 

*/


/*  Solution */

#include <iostream>
#include <sstream>
using namespace std;

// Student class 
// getter, setter methods

class Student {
    public:
    int age;
    string standard;
    string first_name;
    string last_name;
    
    void set_age(int age){
        this->age = age;
     }
     
     int get_age(){
         return age;
     }
     
     void set_standard(string standard){
         this->standard= standard;
     }
     string get_standard() {
         return standard ;
     }
     
    void set_first_name (string first_name){
         this->first_name=first_name;
     }
     void set_last_name (string last_name){
         this->last_name=last_name;
     }
     string get_first_name (){
         return first_name;
     }
     string get_last_name (){
         return last_name;
     }
      
      string to_string(){
          stringstream s;
          s<<age<<","<<first_name<<","<<last_name<<","<<standard;
          return s.str();
      }
      
};

int main() {
    int age ;
    string first_name, last_name , standard;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout<<st.to_string()<<endl;
    
    return 0;
}
