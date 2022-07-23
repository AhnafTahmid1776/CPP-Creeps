#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;



    class book {
private:
    char *author,*title,*publisher;
    float *price;
    int *stock;

public :
    book(){
    author = new char[20];
    title = new char[20];
    publisher = new char[20];
    price = new float;
    stock = new int;
    }
    void feeddata();
    void editdata();
    void showdata();
    int search(char[],char[]);
    void buybook();

};


        void book :: feeddata(){
          cin.ignore();
          cout << "\nEnter Author Name: "; cin.getline(author,20);
          cout << "Enter Title Name: "; cin.getline(title,20);
          cout << "Enter Publisher Name: "; cin.getline(publisher,20);
          cout << "Enter price: "; cin>>*price;
          cout << "Enter stock position: "; cin>>*stock;
}

void book :: editdata(){
          cin.ignore();
          cout << "\nEnter Author Name: "; cin.getline(author,20);
          cout << "Enter Title Name: "; cin.getline(title,20);
          cout << "Enter Publisher Name: "; cin.getline(publisher,20);
          cout << "Enter price: "; cin>>*price;
          cout << "Enter stock position: "; cin>>*stock;
}

void book :: showdata(){
          cin.ignore();
          cout << "\nEnter Author Name: "<<author ;
          cout << "Enter Title Name: "<<title ;
          cout << "Enter Publisher Name: "<<publisher ;
          cout << "Enter price: " <<*price;
          cout << "Enter stock position: " <<*stock;
}
int book :: search(char tbuy[20], char abuy[20]){
if(strcmp(tbuy,title)==0 && strcmp(abuy,author)==0)
    return 1;
else return 0;
}


void book:: buybook(){
int count;
cout << "\nEnter Number of Books to buy: ";
cin >> count ;
if(count <= *stock){
    *stock = *stock - count;
cout << "\nBooks Bought Successfully";
cout << "\nAmount : Rs."<<(*price)*count;
}
else
    cout << "\nRequired Copies are not available";
}
int main(){
book *B[20];
int i=0,r,t,choice;
char titlebuy[20],authorbuy[20];
while(1){

        cout << "\n\n\tMENU"
        << "\n1.Entry of New book"
        << "\n2. Buy book"
        << "\n3. Search For Book"
        << "\n4. Edit Details of Book"
        << "\n5. Exit"
        << "\n\nEnter your choice: ";
        cin >> choice;

        switch(choice){

        case 1 : B[i] = new book;
                 B[i]-> feeddata();
                 i++;break;

        case 2:
                 cin.ignore();

          cout << "Enter Title Name: "; cin.getline(titlebuy,20);
          cout << "\nEnter Author Name: "; cin.getline(authorbuy,20);
          for(t=0; t<i ; t++){
          if (B[t] -> search(titlebuy,authorbuy)){

        B[t]-> buybook();
        break;
          }

        }
    if(t ==i)
        cout << "\nThis book is not available";
    break;


    case 3:
                 cin.ignore();

          cout << "Enter Title Name: "; cin.getline(titlebuy,20);
          cout << "\nEnter Author Name: "; cin.getline(authorbuy,20);
          for(t=0; t<i ; t++){
          if (B[t] -> search(titlebuy,authorbuy)){
           cout << "\nThis book is in Stock.";
        B[t] -> showdata();
        break;
          }

        }
    if(t ==i)
        cout << "\nThis book is not available";
    break;


case 4:
                 cin.ignore();

          cout << "Enter Title Name: "; cin.getline(titlebuy,20);
          cout << "\nEnter Author Name: "; cin.getline(authorbuy,20);
          for(t=0; t<i ; t++){
          if (B[t] -> search(titlebuy,authorbuy)){
           cout << "\nThis book is in Stock.";
        B[t] -> editdata();
        break;
          }

        }
    if(t ==i)
        cout << "\nThis book is not available";
    break;

    case 5 : exit(0);
    default : cout << "\nInvalid Choice Entered";
}
}

return 0;
}











