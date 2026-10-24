/*Write a c++ program with a class name trip and use a function make name destination 
 to take input for the destination of user if the user doesn't enter any destination 
 print "Bhad me jaao"*/
 #include<iostream>
 #include<string>
 using namespace std;
 class trip
 {
    private:
           string dest;
    public:
           void destination()
           {
            cout<<"Enter your destination(0 for no destination):";
            cin>>dest;
            if(dest=="0")
            {
                cout<<"Bhad mein jaao";
            }
            else
            {
                cout<<"Your destination is:"<<dest;
            }
           }       
 };
 int main()
 {
    trip t;
    t.destination();
    return 0;
 }