class employee_dept{
    public:
      string empname;
        int salary,id;
           string empname1;
        int salary1,id1;
        public:
    void ticket_dept(){
       
        cout<<"enter employee name"<<endl;
        cin>>empname;
        cout<<"enter id"<<endl;
        cin>>id;
        cout<<"enter salary"<<endl;
        cin>>salary;

        

    }
    void displayt(){
        cout<<"employee name is:"<<empname<<endl;
        cout<<"the id is : "<<id<<endl;
        cout<<"the salary is : "<<salary<<endl;
    }
        void tech_dept(){
     
        cout<<"enter employee name"<<endl;
        cin>>empname1;
        cout<<"enter id"<<endl;
        cin>>id1;
        cout<<"enter salary"<<endl;
        cin>>salary1;
        }
           void displayte(){
        cout<<"employee name is:"<<empname1<<endl;
        cout<<"the id is : "<<id1<<endl;
        cout<<"the salary is : "<<salary1<<endl;
    }

};
class price{
    public:
    int vehicle;
    public:
    void vehicle_price(){
        cout<<"enter your vehicle type"<<endl;
        cin>>vehicle;
        if(vehicle==2){
            cout<<"price: 50"<<endl;
        }
        if(vehicle==3){
            cout<<"price: 75"<<endl;
        }
        if(vehicle==4){
            cout<<"price: 100"<<endl;
        }
    }

};