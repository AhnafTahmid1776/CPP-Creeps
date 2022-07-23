#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;


class customers{

  char customer_name[20];
  int customer_account_no;
  string customer_address;
  int customer_mobile_no;
  int customer_account_balance;
  int customer_password;

  public:
      void opbal(void);
      void deposit(void);
      void withdraw(void);
      void display(void);
      void maxmin(void);

};

         //CREATE NEW ACCOUNT
      void customers :: opbal(void){

      cout<<"Enter A/c no:\t";
      cin>> customer_account_no;

      if(customer_account_no == 1){
        ofstream writefile1("customer1.txt", ios::app);
        writefile1<<customer_account_no<<endl;

        cout<<"Enter Name:\t";
        cin>> customer_name;
        writefile1<<customer_name<<endl;

        cout<<"Enter Password: ";
        cin>> customer_password;
        writefile1<<customer_password<<endl;

        cout<<"Enter Opening Balance:\t";
        cin>> customer_account_balance;
        writefile1<<customer_account_balance<<endl<<endl;
        writefile1.close();

      }
      else if(customer_account_no == 2){
        ofstream writefile2("customer2.txt", ios::app);
        writefile2<<customer_account_no<<endl;

        cout<<"Enter Name:\t";
        cin>> customer_name;
        writefile2<<customer_name<<endl;

        cout<<"Enter Password: ";
        cin>> customer_password;
        writefile2<<customer_password<<endl;

        cout<<"Enter Opening Balance:\t";
        cin>> customer_account_balance;
        writefile2<<customer_account_balance<<endl<<endl;
        writefile2.close();
      }

      else if(customer_account_no == 3){
        ofstream writefile3("customer3.txt", ios::app);
        writefile3<<customer_account_no<<endl;

        cout<<"Enter Name:\t";
        cin>> customer_name;
        writefile3<<customer_name<<endl;

        cout<<"Enter Password: ";
        cin>> customer_password;
        writefile3<<customer_password<<endl;

        cout<<"Enter Opening Balance:\t";
        cin>> customer_account_balance;
        writefile3<<customer_account_balance<<endl<<endl;
        writefile3.close();
      }

      else if(customer_account_no == 4){
        ofstream writefile4("customer4.txt", ios::app);
        writefile4<<customer_account_no<<endl;

        cout<<"Enter Name:\t";
        cin>> customer_name;
        writefile4<<customer_name<<endl;

        cout<<"Enter Password: ";
        cin>> customer_password;
        writefile4<<customer_password<<endl;

        cout<<"Enter Opening Balance:\t";
        cin>> customer_account_balance;
        writefile4<<customer_account_balance<<endl<<endl;
        writefile4.close();
      }

      else if(customer_account_no == 5){
        ofstream writefile5("customer5.txt", ios::app);
        writefile5<<customer_account_no<<endl;

        cout<<"Enter Name:\t";
        cin>> customer_name;
        writefile5<<customer_name<<endl;

        cout<<"Enter Password: ";
        cin>> customer_password;
        writefile5<<customer_password<<endl;

        cout<<"Enter Opening Balance:\t";
        cin>> customer_account_balance;
        writefile5<<customer_account_balance<<endl<<endl;
        writefile5.close();
      }

      }





             //DEPOSIT
      void customers :: deposit(void){
          int inputted_password;
          int deposit = 0;
      cout<<"Enter A/c no:\t";
      cin>> customer_account_no;


      if(customer_account_no == 1){
        ifstream readfile1("customer1.txt");
        readfile1>>customer_account_no>>customer_name>>customer_password>>customer_account_balance;

        cout<< "Enter Password: ";
        cin>> inputted_password;

        if(inputted_password == customer_password){

            ofstream writefile1("customer1.txt");
            cout<< "Enter Deposit amount :\t";
            cin>>deposit;
            customer_account_balance = deposit + customer_account_balance;
            cout<< "\n Deposit Balance = \t"<<customer_account_balance;

            writefile1<<customer_account_no<<endl;
            writefile1<<customer_name<<endl;
            writefile1<<customer_password<<endl;
            writefile1<<customer_account_balance<<endl;


            writefile1.close();

        }
        else{
        cout<< "Invalid Password. Try Again";
        }

         readfile1.close();

      }
        else if(customer_account_no == 2){
        ifstream readfile2("customer2.txt");
        readfile2>>customer_account_no>>customer_name>>customer_password>>customer_account_balance;

        cout<< "Enter Password: ";
        cin>> inputted_password;

        if(inputted_password == customer_password){

            ofstream writefile2("customer2.txt");
            cout<< "Enter Deposit amount :\t";
            cin>>deposit;
            customer_account_balance = deposit + customer_account_balance;
            cout<< "\n Deposit Balance = \t"<<customer_account_balance;

            writefile2<<customer_account_no<<endl;
            writefile2<<customer_name<<endl;
            writefile2<<customer_password<<endl;
            writefile2<<customer_account_balance<<endl;


            writefile2.close();

        }else{
        cout<< "Invalid Password. Try Again";
        }
        readfile2.close();
      }
      else if(customer_account_no == 3){
        ifstream readfile3("customer3.txt");
        readfile3>>customer_account_no>>customer_name>>customer_password>>customer_account_balance;

        cout<< "Enter Password: ";
        cin>> inputted_password;

        if(inputted_password == customer_password){

            ofstream writefile3("customer3.txt");
            cout<< "Enter Deposit amount :\t";
            cin>>deposit;
            customer_account_balance = deposit + customer_account_balance;
            cout<< "\n Deposit Balance = \t"<<customer_account_balance;

            writefile3<<customer_account_no<<endl;
            writefile3<<customer_name<<endl;
            writefile3<<customer_password<<endl;
            writefile3<<customer_account_balance<<endl;


            writefile3.close();

        }else{
        cout<< "Invalid Password. Try Again";
        }
         readfile3.close();
      }
      else if(customer_account_no == 4){
        ifstream readfile4("customer4.txt");
        readfile4>>customer_account_no>>customer_name>>customer_password>>customer_account_balance;

        cout<< "Enter Password: ";
        cin>> inputted_password;

        if(inputted_password == customer_password){

            ofstream writefile4("customer4.txt");
            cout<< "Enter Deposit amount :\t";
            cin>>deposit;
            customer_account_balance = deposit + customer_account_balance;
            cout<< "\n Deposit Balance = \t"<<customer_account_balance;

            writefile4<<customer_account_no<<endl;
            writefile4<<customer_name<<endl;
            writefile4<<customer_password<<endl;
            writefile4<<customer_account_balance<<endl;


            writefile4.close();

        }else{
        cout<< "Invalid Password. Try Again";
        }
         readfile4.close();
      }
      else if(customer_account_no == 5){
        ifstream readfile5("customer5.txt");
        readfile5>>customer_account_no>>customer_name>>customer_password>>customer_account_balance;

        cout<< "Enter Password: ";
        cin>> inputted_password;

        if(inputted_password == customer_password){

            ofstream writefile5("customer1.txt");
            cout<< "Enter Deposit amount :\t";
            cin>>deposit;
            customer_account_balance = deposit + customer_account_balance;
            cout<< "\n Deposit Balance = \t"<<customer_account_balance;

            writefile5<<customer_account_no<<endl;
            writefile5<<customer_name<<endl;
            writefile5<<customer_password<<endl;
            writefile5<<customer_account_balance<<endl;


            writefile5.close();

        }else{
        cout<< "Invalid Password. Try Again";
        }
         readfile5.close();
      }

      else{
      cout<< "This account number doesn't exist";
      }

      }





            //WITHDRAW
      void customers :: withdraw(void){
      int withdraw;
      int inputted_password;

      cout<<"Enter A/c no:\t";
      cin>> customer_account_no;


      if(customer_account_no == 1){
        ifstream readfile1("customer1.txt");
        readfile1>>customer_account_no>>customer_name>>customer_password>>customer_account_balance;

        cout<< "Enter Password: ";
        cin>> inputted_password;

        if(inputted_password == customer_password){
            cout<< "\nBalance Amount = \t\t"<<customer_account_balance;

            ofstream writefile1("customer1.txt");

            cout<< "\nEnter Withdraw Amount :\t";
            cin>>withdraw;

           if(customer_account_balance>withdraw){
            customer_account_balance = customer_account_balance - withdraw;
            cout<< "\nAfter Withdraw Balance is = \t"<<customer_account_balance;
           }
           else{
            cout<< "\n\t Not Enough Balance";
           }

            writefile1<<customer_account_no<<endl;
            writefile1<<customer_name<<endl;
            writefile1<<customer_password<<endl;
            writefile1<<customer_account_balance<<endl;

            writefile1.close();

        }
        else{
        cout<< "Invalid Password. Try Again";
        }

      readfile1.close();

      }

            else if(customer_account_no == 2){
        ifstream readfile2("customer2.txt");
        readfile2>>customer_account_no>>customer_name>>customer_password>>customer_account_balance;

        cout<< "Enter Password: ";
        cin>> inputted_password;

        if(inputted_password == customer_password){
            cout<< "\nBalance Amount = \t\t"<<customer_account_balance;

            ofstream writefile2("customer2.txt");

            cout<< "\nEnter Withdraw Amount :\t";
            cin>>withdraw;

           if(customer_account_balance>withdraw){
            customer_account_balance = customer_account_balance - withdraw;
            cout<< "\nAfter Withdraw Balance is = \t"<<customer_account_balance;
           }
           else{
            cout<< "\n\t Not Enough Balance";
           }

            writefile2<<customer_account_no<<endl;
            writefile2<<customer_name<<endl;
            writefile2<<customer_password<<endl;
            writefile2<<customer_account_balance<<endl;

            writefile2.close();

        }
        else{
        cout<< "Invalid Password. Try Again";
        }

      readfile2.close();

      }

            else if(customer_account_no == 3){
        ifstream readfile3("customer3.txt");
        readfile3>>customer_account_no>>customer_name>>customer_password>>customer_account_balance;

        cout<< "Enter Password: ";
        cin>> inputted_password;

        if(inputted_password == customer_password){
            cout<< "\nBalance Amount = \t\t"<<customer_account_balance;

            ofstream writefile3("customer3.txt");

            cout<< "\nEnter Withdraw Amount :\t";
            cin>>withdraw;

           if(customer_account_balance>withdraw){
            customer_account_balance = customer_account_balance - withdraw;
            cout<< "\nAfter Withdraw Balance is = \t"<<customer_account_balance;
           }
           else{
            cout<< "\n\t Not Enough Balance";
           }

            writefile3<<customer_account_no<<endl;
            writefile3<<customer_name<<endl;
            writefile3<<customer_password<<endl;
            writefile3<<customer_account_balance<<endl;

            writefile3.close();

        }
        else{
        cout<< "Invalid Password. Try Again";
        }

      readfile3.close();

      }

            else if(customer_account_no == 4){
        ifstream readfile4("customer4.txt");
        readfile4>>customer_account_no>>customer_name>>customer_password>>customer_account_balance;

        cout<< "Enter Password: ";
        cin>> inputted_password;

        if(inputted_password == customer_password){
            cout<< "\nBalance Amount = \t\t"<<customer_account_balance;

            ofstream writefile4("customer4.txt");

            cout<< "\nEnter Withdraw Amount :\t";
            cin>>withdraw;

           if(customer_account_balance>withdraw){
            customer_account_balance = customer_account_balance - withdraw;
            cout<< "\nAfter Withdraw Balance is = \t"<<customer_account_balance;
           }
           else{
            cout<< "\n\t Not Enough Balance";
           }

            writefile4<<customer_account_no<<endl;
            writefile4<<customer_name<<endl;
            writefile4<<customer_password<<endl;
            writefile4<<customer_account_balance<<endl;

            writefile4.close();

        }
        else{
        cout<< "Invalid Password. Try Again";
        }

      readfile4.close();

      }


            else if(customer_account_no == 5){
        ifstream readfile5("customer5.txt");
        readfile5>>customer_account_no>>customer_name>>customer_password>>customer_account_balance;

        cout<< "Enter Password: ";
        cin>> inputted_password;

        if(inputted_password == customer_password){
            cout<< "\nBalance Amount = \t\t"<<customer_account_balance;

            ofstream writefile5("customer5.txt");

            cout<< "\nEnter Withdraw Amount :\t";
            cin>>withdraw;

           if(customer_account_balance>withdraw){
            customer_account_balance = customer_account_balance - withdraw;
            cout<< "\nAfter Withdraw Balance is = \t"<<customer_account_balance;
           }
           else{
            cout<< "\n\t Not Enough Balance";
           }

            writefile5<<customer_account_no<<endl;
            writefile5<<customer_name<<endl;
            writefile5<<customer_password<<endl;
            writefile5<<customer_account_balance<<endl;

            writefile5.close();

        }
        else{
        cout<< "Invalid Password. Try Again";
        }

      readfile5.close();

      }


      else{
      cout<< "This account number doesn't exist";
      }
    }




               //DISPLAY
      void customers :: display(void){

          cout<<"Enter A/c no:\t";
          cin>> customer_account_no;

          if(customer_account_no == 1){
            ifstream readfile1("customer1.txt");
            cout<<endl<<endl<<endl;

            cout<<setw(50)<<"DETAILS"<<endl;
            readfile1>>customer_account_no>>customer_name>>customer_password>>customer_account_balance;
            cout<<setw(50)<<"A/c. No. "<<customer_account_no<<endl;
            cout<<setw(50)<<"Name "<<customer_name<<endl;
            cout<<setw(50)<<"Balance "<<customer_account_balance<<endl<<endl<<endl;
            readfile1.close();
          }
          else if(customer_account_no == 2){
            ifstream readfile2("customer2.txt");
            cout<<endl<<endl<<endl;

            cout<<setw(50)<<"DETAILS"<<endl;
            readfile2>>customer_account_no>>customer_name>>customer_password>>customer_account_balance;
            cout<<setw(50)<<"A/c. No. "<<customer_account_no<<endl;
            cout<<setw(50)<<"Name "<<customer_name<<endl;
            cout<<setw(50)<<"Balance "<<customer_account_balance<<endl<<endl<<endl;
            readfile2.close();
          }
          else if(customer_account_no == 3){
            ifstream readfile3("customer3.txt");
            cout<<endl<<endl<<endl;

            cout<<setw(50)<<"DETAILS"<<endl;
            readfile3>>customer_account_no>>customer_name>>customer_password>>customer_account_balance;
            cout<<setw(50)<<"A/c. No. "<<customer_account_no<<endl;
            cout<<setw(50)<<"Name "<<customer_name<<endl;
            cout<<setw(50)<<"Balance "<<customer_account_balance<<endl<<endl<<endl;
            readfile3.close();
          }
          else if(customer_account_no == 4){
            ifstream readfile4("customer4.txt");
            cout<<endl<<endl<<endl;

            cout<<setw(50)<<"DETAILS"<<endl;
            readfile4>>customer_account_no>>customer_name>>customer_password>>customer_account_balance;
            cout<<setw(50)<<"A/c. No. "<<customer_account_no<<endl;
            cout<<setw(50)<<"Name "<<customer_name<<endl;
            cout<<setw(50)<<"Balance "<<customer_account_balance<<endl<<endl<<endl;
            readfile4.close();
          }
          else if(customer_account_no == 5){
            cout<<endl<<endl<<endl;
            ifstream readfile5("customer5.txt");

            cout<<setw(50)<<"DETAILS"<<endl;
            readfile5>>customer_account_no>>customer_name>>customer_password>>customer_account_balance;
            cout<<setw(50)<<"A/c. No. "<<customer_account_no<<endl;
            cout<<setw(50)<<"Name "<<customer_name<<endl;
            cout<<setw(50)<<"Balance "<<customer_account_balance<<endl<<endl<<endl;
            readfile5.close();
          }

      }


      void customers :: maxmin(void){

      char name1[20];
      int account_no1;
      int password1;

      char name2[20];
      int account_no2;
      int password2;

      char name3[20];
      int account_no3;
      int password3;

      char name4[20];
      int account_no4;
      int password4;

      char name5[20];
      int account_no5;
      int password5;



      int balance1, balance2, balance3, balance4, balance5;
      int i, max, min, num;

      ifstream readfile1("customer1.txt");
      ifstream readfile2("customer2.txt");
      ifstream readfile3("customer3.txt");
      ifstream readfile4("customer4.txt");
      ifstream readfile5("customer5.txt");

      readfile1>>account_no1>>name1>>password1>>balance1;
      readfile2>>account_no2>>name2>>password2>>balance2;
      readfile3>>account_no3>>name3>>password3>>balance3;
      readfile4>>account_no4>>name4>>password4>>balance4;
      readfile5>>account_no5>>name5>>password5>>balance5;


      int array[5];

      array[0] = balance1;
      array[1] = balance2;
      array[2] = balance3;
      array[3] = balance4;
      array[4] = balance5;


    max = array[0];
    min = array[0];
    //Find maximum and minimum in all array elements.
    for(i=1; i<5; i++)
    {
    // If current element is greater than max
        if(array[i] > max)
            max = array[i];
        // If current element is smaller than min
        if(array[i] < min)
            min = array[i];
    }

    cout<< "Choose one Option"<<endl;
    cout<< "1) Account Holder Having Maximum Balance"<<endl;
    cout<< "2) Account Holder Having Minimum Balance"<<endl;

    cin>> num;

    switch(num){

      case 1:

          if(max == balance1){
            cout<<setw(50)<<"DETAILS"<<endl;
            cout<<setw(50)<<"A/c. No. "<<account_no1<<endl;
            cout<<setw(50)<<"Name "<<name1<<endl;
            cout<<setw(50)<<"Balance "<<balance1<<endl<<endl<<endl;
          }
          else if(max == balance2){
            cout<<setw(50)<<"DETAILS"<<endl;
            cout<<setw(50)<<"A/c. No. "<<account_no2<<endl;
            cout<<setw(50)<<"Name "<<name2<<endl;
            cout<<setw(50)<<"Balance "<<balance2<<endl<<endl<<endl;
          }
          else if(max == balance3){
            cout<<setw(50)<<"DETAILS"<<endl;
            cout<<setw(50)<<"A/c. No. "<<account_no3<<endl;
            cout<<setw(50)<<"Name "<<name3<<endl;
            cout<<setw(50)<<"Balance "<<balance3<<endl<<endl<<endl;
          }
          else if(max == balance4){
            cout<<setw(50)<<"DETAILS"<<endl;
            cout<<setw(50)<<"A/c. No. "<<account_no4<<endl;
            cout<<setw(50)<<"Name "<<name4<<endl;
            cout<<setw(50)<<"Balance "<<balance4<<endl<<endl<<endl;
          }
          else if(max == balance5){
            cout<<setw(50)<<"DETAILS"<<endl;
            cout<<setw(50)<<"A/c. No. "<<account_no5<<endl;
            cout<<setw(50)<<"Name "<<name5<<endl;
            cout<<setw(50)<<"Balance "<<balance5<<endl<<endl<<endl;
          }

          break;


      case 2:

            if(min == balance1){
            cout<<setw(50)<<"DETAILS"<<endl;
            cout<<setw(50)<<"A/c. No. "<<account_no1<<endl;
            cout<<setw(50)<<"Name "<<name1<<endl;
            cout<<setw(50)<<"Balance "<<balance1<<endl<<endl<<endl;
          }
          else if(min == balance2){
            cout<<setw(50)<<"DETAILS"<<endl;
            cout<<setw(50)<<"A/c. No. "<<account_no2<<endl;
            cout<<setw(50)<<"Name "<<name2<<endl;
            cout<<setw(50)<<"Balance "<<balance2<<endl<<endl<<endl;
          }
          else if(min == balance3){
            cout<<setw(50)<<"DETAILS"<<endl;
            cout<<setw(50)<<"A/c. No. "<<account_no3<<endl;
            cout<<setw(50)<<"Name "<<name3<<endl;
            cout<<setw(50)<<"Balance "<<balance3<<endl<<endl<<endl;
          }
          else if(min == balance4){
            cout<<setw(50)<<"DETAILS"<<endl;
            cout<<setw(50)<<"A/c. No. "<<account_no4<<endl;
            cout<<setw(50)<<"Name "<<name4<<endl;
            cout<<setw(50)<<"Balance "<<balance4<<endl<<endl<<endl;
          }
          else if(min == balance5){
            cout<<setw(50)<<"DETAILS"<<endl;
            cout<<setw(50)<<"A/c. No. "<<account_no5<<endl;
            cout<<setw(50)<<"Name "<<name5<<endl;
            cout<<setw(50)<<"Balance "<<balance5<<endl<<endl<<endl;
          }

          break;

      default: cout<< "\n Invalid option...";


    }


       readfile1.close();
       readfile2.close();
       readfile3.close();
       readfile4.close();
       readfile5.close();




      }




int main(){
   customers c1;
   int choice;

   do{
       cout<< "\n\n\n\t Banking System Program";
       cout<< "\n\nChoice List\n\n";
       cout<< "1) To Display Details of Customer"<<endl;
       cout<< "2) To Deposit"<<endl;
       cout<< "3) To Withdraw"<<endl;
       cout<< "4) Create an Account"<<endl;
       cout<< "5) Account Holder Details Having Maximum or Minimum Account Balance"<<endl;
       cout<< "6) EXIT"<<endl;
       cout<< "Enter your choice: ";
       cin>>choice;

       switch(choice){

           case 1:

               c1.display();

           break;

           case 2:
                c1.deposit();

           break;

           case 3:
                c1.withdraw();

           break;

           case 4:
                c1.opbal();

           break;

           case 5:
                c1.maxmin();

           break;

           case 6: goto end;
           default: cout<< "\n Invalid option...";

       }
   }while(1);

end:

    return 0;
}
