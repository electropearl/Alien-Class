/* 
  Name: Nicholas Garcia
  Date: 07-19-2020
  Class: COSC 1437
  Used Bruce Gooch's example made on 3/4/20.
*/
#include <iostream>
#include <string>

using namespace std;

//base class 
class alienType
{
    public:
        //outputs a string
        string description() const; 
        //constructor
        alienType(int e, int a, string s); 
    
    protected:
        int eyes;
        int arms;
        string skin;
};

//subclass martianType
class martianType: public alienType
{
    public:
        //constructor with required values
        martianType(int e, int a, string s);
};

//subclass jupiterianType
class jupiterianType: public alienType
{
    public:
        //constructor with required values 
        jupiterianType(int e, int a, string s);
};

//output string method defined
string alienType::description() const 
{
    //I used https://www.geeksforgeeks.org/stdto_string-in-cpp/ to understand converting to a string
    return "Number of Eyes: " + to_string(eyes)  
            + "\nNumber of Arms: " + to_string(arms)
            + "\nSkin Color: " + skin;
}

//constructor definition I used https://www.geeksforgeeks.org/constructors-c/ for help
alienType::alienType(int e, int a, string s)
{
    eyes = e;
    arms = a;
    skin = s;
}

//constructor defintion. I used https://www.learncpp.com/cpp-tutorial/114-constructors-and-initialization-of-derived-classes/ for help.
martianType::martianType(int e, int a, string s):alienType(e,a,s){}
jupiterianType::jupiterianType(int e, int a, string s):alienType(e,a,s){}

//main function calls everything above.
int main()
{
    martianType martian(2,2,"Red");
    cout << "The common Martian has these key features..."<<endl;
    cout << endl;
    cout << martian.description()<<endl;
    cout << endl;

    jupiterianType jupiterian(10,4,"Purple");
    cout << "The common Jupiterian has these key features..."<<endl;
    cout << endl;
    cout << jupiterian.description()<<endl;
    cout << endl;

    return 0;
}