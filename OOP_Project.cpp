#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Employee{
protected:
string name,email,adress,role;
float salary=0;
int id;
int hours;
public:
string get_name()     
{
    return name;
}
string get_email()
{
    return email;
}

string get_role()
{
    return role;
}

string get_adress()
{
    return adress;
}
float get_salary()
{
    return salary;
}
int get_id(int x)
{
    return id;
}  
void set_id(int x)
{
    id=x;
}

int return_id()
{
    return id;
}


   virtual void  set_employee(){};
   virtual void fire_employee(){};
    virtual void show_details()=0;

};

class Add_Employee:public Employee
{
    public:
    void show_details()
     {
            
                cout<<"name of employee is  "<<name<<endl;
                cout<<"email of employee is "<<email<<endl;
                cout<<"adress of employee is "<<adress<<endl;
                if (role=="1")
                {
                    cout<<"role of employee is Develepor"<<endl;
                }
                else if (role=="2")
                {
                    cout<<"role of employee is Manager"<<endl;
                }
                else if (role=="3")
                {
                    cout<<"role of employee is Accountant"<<endl;
                }
                else
                {
                    cout<<"Enter valid role"<<endl;
                    
                }

                cout<<"salary of employee is "<<salary<<endl;

            
     }
     
   void set_employee()
    {
      cout<<"Enter the name of employee"<<endl;
      cin>>name;
      cout<<"Enter Email of Employee"<<endl;
      cin>>email;
      cout<<"Enter adress of Employee"<<endl;
      cin>>adress;
      cout<<"Enter Role of Employee "<<endl;
       cout<<"1. Develepor"<<endl;
         cout<<"2. Manager"<<endl;
         cout<<"3. Accountant"<<endl;
        cin>>role;
        if (role=="1")

    {   
        cout<<"ENter hours of Employee"<<endl;
        cin>>hours;
        salary=hours*1000;
    }
    else if (role=="2")
    {
        cout<<"ENter hours of Employee"<<endl;
        cin>>hours;
        salary=hours*2000;
    }
    else if (role=="3")
    {
        cout<<"ENter hours of Employee"<<endl;
        cin>>hours;
        salary=hours*3000;
    }
    else
    {
        cout<<"Enter valid role"<<endl;
    }
 
   }
    
     };
   class Modify_Employee:public Employee
   {
       public:
     
            void show_details()
            {
                cout<<"name of employee is  "<<name<<endl;
                cout<<"email of employee is "<<email<<endl;
                cout<<"adress of employee is "<<adress<<endl;
                if (role=="1")
                {
                    cout<<"role of employee is Develepor"<<endl;
                }
                else if (role=="2")
                {
                    cout<<"role of employee is Manager"<<endl;
                }
                else if (role=="3")
                {
                    cout<<"role of employee is Accountant"<<endl;
                }
                else
                {
                    cout<<"Enter valid role"<<endl;
                    
                }

                cout<<"salary of employee is "<<salary<<endl;

            }
            
   };
   class Fire_Employee:public Employee
   {
       public:
       void show_details()
            {
                cout<<"name of employee fired is :"<<get_name()<<endl;
                cout<<"email of employee fired is :"<<get_name()<<endl;
                cout<<"adress of employee fired :"<<get_adress()<<endl;
                cout<<"role of employee is fired is :"<<get_role()<<endl;
                cout<<"salary of employee fired is : "<<get_salary()<<endl;

            }
       void fire_employee()
         {  
             
             
                cout<<"employee fired"<<endl;
                
         }
   };
    

   int main()
    {   int choice;
        Employee *obj1[100];
        
        Modify_Employee obj2;
        Add_Employee obj3;
        Fire_Employee obj4;
      //  int n;
        int d=1;
        int id=0;   
      obj1[id]=&obj3;
        obj1[id]->set_id(id);
         string mainpass="abc123";
         string pass;
        cout<<"Enter password to acess the HR system"<<endl;
        cin>>pass;
        string change;
    
    if (pass==mainpass){
        cout<<"correct Password"<<endl;
        cout<<"Acess granted"<<endl;
   while(d==1)
   { 
    cout << "----------------------------------------------------"  << endl;
    cout << "|                                                   |" << endl;
    cout << "|                HR Management System               |" << endl;
    cout << "|                                                   |" <<endl;
    cout << "----------------------------------------------------"  << endl;

    cout << "Please select an option:" << endl;
 
    cout << "1. Hire a new employee" << endl;
 
    cout << "2. Terminate an existing employee" << endl;
 
    cout << "3. View details of currently working employees" << endl ;

    
    cout<<"4. change password   "<<endl<<endl;
    

    cout << "Enter your choice (1-3): "<<endl;
    
    cin>>choice;
     switch(choice)
     {
         case 1:
    

                obj1[id]=&obj3;
                obj1[id]->set_id(id);
                obj1[id]->set_employee();
                obj1[id]->show_details();
                cout<<"id of employee is : "<<id<<endl;
                id++;


            
         break;
    
         case 2:
       cout<<"Enter ID: ";
       int idchk;
       cin>>idchk;
       for (int i = 0; i < id+1; i++)
       {
            if(idchk==obj1[i]->return_id())
            {
                for (int j = i; j < id-1; j++)
                {
                    obj1[j]=obj1[j+1];
                }
                id--;
                cout<<"Employee terminated\n";
                obj1[id]=&obj4;
                obj1[id]->fire_employee();   
                      }
            else{
            cout<<"employee not found"<<endl;
       }
       }
           
           
            
            break;
    
        case 3:


int id_to_find;


cout << "Enter the ID of the employee you want to find: ";
cin >> id_to_find;

    {if (obj1[id_to_find]->get_id(id_to_find) == id_to_find) {     
         obj1[id_to_find]->show_details();}
         else 
         cout<<"Employee not found";
         break;
          
    }
     break;
     case 4:
     string temp=" ";
     cout<<"Enter orignal password"<<endl;
     cin>>temp;
     if (temp==mainpass)
     {
        cout<<"correct password"<<endl;
        cout<<"Enter new password"<<endl;
        cin>>mainpass;

     }
     else 
     cout<<"wrong password"<<endl;
     
       }





    
           
        cout<<"To exit program press 2 or any other key to continue: ";
        cin>>d;

      if (d == 2) {
        break;
    }
    else {
        continue;
    }
      
         

          
    
     }}else
        cout<<"Invalid Password"<<endl;
    }
    
    
             


    

     

    