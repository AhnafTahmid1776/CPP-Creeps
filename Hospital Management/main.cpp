#include<iostream>
#include<fstream>
#include<cstdlib>
#include<conio.h>
#include<time.h>
#include<iomanip>
#include <string>
#include <sstream>

using namespace std;
int main()



{
    char name[20];
    char address[100];
    char contact[10];
    char age[5];
    char sex[8];
    char blood_gp[5];
    char disease_past[50];
    char id[15];
char fname[20];
char ffname[20];

time_t rawtime;
struct tm * timeinfo;

time ( &rawtime );
timeinfo = localtime ( &rawtime );




int i;
int login();
login();

b:
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t  HOSPITAL MANAGEMENT SYSTEM \n\n";
cout<<"\n\n\t\t\t\t\t\tPlease,  Choose from the following Options: \n\n";
cout<<"\t\t\t\t\t\t _________________________________________________________________ \n";
cout<<"\t\t\t\t\t\t|                                                                 |\n";
cout<<"\t\t\t\t\t\t|             1  >> Add New Patient Record                        |\n";
cout<<"\t\t\t\t\t\t|             2  >> Add Diagnosis Information                     |\n";
cout<<"\t\t\t\t\t\t|             3  >> Full History of the Patient                   |\n";
cout<<"\t\t\t\t\t\t|             4  >> Information About the Hospital                |\n";
cout<<"\t\t\t\t\t\t|             5  >> Update patient Info                           |\n";
cout<<"\t\t\t\t\t\t|             6  >> Search patient Info                           |\n";
cout<<"\t\t\t\t\t\t|             7  >> Exit the Program                              |\n";
cout<<"\t\t\t\t\t\t|_________________________________________________________________|\n\n";
a:cout<<"\t\t\t\t\t\tEnter your choice: ";cin>>i;
if(i>10||i<1){cout<<"\n\n\t\t\t\t\t\tInvalid Choice\n";cout<<"\t\t\t\t\t\tTry again...........\n\n";goto a;} //if inputed choice is other than given choice



system("cls");

//displaying the information about the hospital........option 4
if(i==4)
{
ifstream file;
file.open("hospital.txt");
if(!file)
{
cout<<"\nError while opening the file\n";goto b;
}
else
{
   cout<<"\n\n\n\n\n\n\n\t\t\t\t\t   ...........................Information about the Hospital.............................\n\n";
   string line;
while(file.good())
{
getline(file,line);
cout<<line<<"\n\t\t";
}
cout<<"\n\n\t\t";
system("pause");
            system("cls");
goto b;
}
}

//Adding the record of the new patient..................option 3
if(i==1)
{
cout<<"Enter File name: ";
      cin>> fname;

        ofstream writefile1(fname, ios::app);

        cout<<"Enter Name:\t";
        cin>> name;
        writefile1<<name<<endl;

        cout<<"Enter Address: ";
        cin>> address;
        writefile1<<address<<endl;

        cout<<"Enter Contact\t";
        cin>> contact;
        writefile1<<contact<<endl;

        cout<<"Enter Age\t";
        cin>> age;
        writefile1<<age<<endl;

        cout<<"Enter Sex\t";
        cin>> sex;
        writefile1<<sex<<endl;

        cout<<"Enter Blood Group\t";
        cin>> blood_gp;
        writefile1<<blood_gp<<endl;

        cout<<"Enter Past disease\t";
        cin>> disease_past;
        writefile1<<disease_past<<endl;

        cout<<"Enter ID\t";
        cin>> id;
        writefile1<<id<<endl;


        writefile1.close();

  system("pause");
  system("cls");
  goto b;

}

//Appending diagnosis information of patient datewise.................option 2
if(i==2)
{
    fstream pat_file;
    cout<<"\n\nEnter the patient's file name to be opened : ";
    cin.ignore();
    gets(fname);
    system("cls");
pat_file.open(fname, ios::in);
if(!pat_file)
{
cout<<"\nError while opening the file\n";goto b;
}
else
{
   cout<<"\n\n\n\n\t\t\t\t........................................ Information about "<<fname<<" ........................................\n\n\n\n";
   string info;
while(pat_file.good())
{
getline(pat_file,info);
cout<<info<<"\n";
}
cout<<"\n";
pat_file.close();
pat_file.open(fname, ios::out | ios::app);
            cout<<"\n";
cout<<"Adding more information in patient's file................on : "<<asctime (timeinfo);pat_file<<"Description of "<<asctime (timeinfo)<<"\n";
                            struct app
                            {
                                char symptom[500];
                                char diagnosis[500];
                                char medicine[500];
                                char addmission[30];
                                char ward[15];
                            };
            app add;
            cout<<"\nSymptoms : "; pat_file<<"Symptoms : ";gets(add.symptom); pat_file<<add.symptom<<"\n";
            cout<<"\nDiagnosis : "; pat_file<<"Diagnosis : ";gets(add.diagnosis); pat_file<<add.diagnosis<<"\n";
            cout<<"\nMedicines : "; pat_file<<"Medicines : ";gets(add.medicine); pat_file<<add.medicine<<"\n";
            cout<<"\nAddmission Required? : "; pat_file<<"Addmission Required? : ";gets(add.addmission); pat_file<<add.addmission<<"\n";
            cout<<"\nType of ward : "; pat_file<<"Type of ward : ";gets(add.ward); pat_file<<add.ward<<"\n";pat_file<<"\n*************************************************************************\n";
            cout<<"\n\n"<<add.ward<<" ward is alloted Successfully\n";
pat_file.close();
cout<<"\n\n";
system("pause");
            system("cls");
goto b;
}
}

//For displaying the full medical history of patient in that hospital............option 3
if(i==3)
{


    cout<<"\n\nEnter the patient's file name to be opened : ";
    cin.ignore();
    gets(fname);
    gets(ffname);
    system("cls");
ifstream readfile1(fname);
ifstream readfile2(ffname);
            cout<<endl<<endl<<endl;

            cout<<setw(50)<<"DETAILS"<<endl;
            readfile1>>name>>address>>contact>>age>>sex>>blood_gp>>disease_past>>id;
                cout<<"\n  ___________________________________________________________________________________________________________________________________________________________________ ";
    cout<<"\n            Name     |         Address    |         Contact     |        Age      |       Sex       |       Blood_Gp      |      Disease Past      |  Id";
    cout<<"\n ______________________|___________________|_____________________|_______________________|______________________|___________________|____________________| ";
    cout<<"\n                       |                   |                     |                       |                      |                   |                    | ";
    cout<<"\n      "<<name<<"       |                  "<<address<<"   |     "<<contact<<"   |        "<<age<<"      |                        "<<sex<<"    |            "<<disease_past<<"|             "<<id<<"        | ";
    cout<<"\n ______________________|___________________|_____________________|_______________________|______________________|___________________|____________________| ";
            readfile2>>name>>address>>contact>>age>>sex>>blood_gp>>disease_past>>id;
                cout<<"\n  ___________________________________________________________________________________________________________________________________________________________________ ";

    cout<<"\n                       |                   |                     |                       |                      |                   |                    | ";
    cout<<"\n      "<<name<<"       |                  "<<address<<"   |     "<<contact<<"   |        "<<age<<"      |                        "<<sex<<"    |            "<<disease_past<<"|             "<<id<<"        | ";
    cout<<"\n ______________________|___________________|_____________________|_______________________|______________________|___________________|____________________| ";

            readfile1.close();
            readfile2.close();


        system("pause");
        system("cls");
        goto b;
}

if(i==5)
{
    cout<<"\n\nEnter the patient's file name you want to update : ";
    cin.ignore();
    gets(fname);
    system("cls");

    ofstream writefile1(fname, ios::ate);

    cout<<"Enter Name:\t";
        cin>> name;
        writefile1<<name<<endl;

        cout<<"Enter Address: ";
        cin>> address;
        writefile1<<address<<endl;

        cout<<"Enter Contact\t";
        cin>> contact;
        writefile1<<contact<<endl;

        cout<<"Enter Age\t";
        cin>> age;
        writefile1<<age<<endl;

        cout<<"Enter Sex\t";
        cin>> sex;
        writefile1<<sex<<endl;

        cout<<"Enter Blood Group\t";
        cin>> blood_gp;
        writefile1<<blood_gp<<endl;

        cout<<"Enter Past disease\t";
        cin>> disease_past;
        writefile1<<disease_past<<endl;

        cout<<"Enter ID\t";
        cin>> id;
        writefile1<<id<<endl;


        writefile1.close();

  system("pause");
  system("cls");
  goto b;

}

if(i==6){
    cout<<"\n\nEnter the patient's file name to be searched : ";
    cin.ignore();
    gets(fname);
    system("cls");
ifstream readfile1(fname);
            cout<<endl<<endl<<endl;

            cout<<setw(50)<<"DETAILS"<<endl;
            readfile1>>name>>address>>contact>>age>>sex>>blood_gp>>disease_past>>id;
            cout<<setw(50)<<"A/c. No. "<<name<<endl;
            cout<<setw(50)<<"Address "<<address<<endl;
            cout<<setw(50)<<"ontact "<<contact<<endl;
            cout<<setw(50)<<"Age "<<age<<endl;
            cout<<setw(50)<<"Sex "<<sex<<endl;
            cout<<setw(50)<<"blood_gp "<<blood_gp<<endl;
            cout<<setw(50)<<"Disease_past "<<disease_past<<endl;
            cout<<setw(50)<<"id "<<id<<endl<<endl<<endl;
            readfile1.close();



    system("pause");
    system("cls");
    goto b;

}

//Exiting Through the system with a Thank You note........................option 5
if(i==7)
{
system("cls");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
cout<<"\t\t\t\t\t@@ _______________________________________________________________________________________ @@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                               THANK YOU FOR USING                                     |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                            HOSPITAL MANAGEMENT SYSTEM                                 |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|_______________________________________________________________________________________|@@\n";
cout<<"\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n\n\t\t\t\t\t";
}


cout<<"\n";

}

int login(){

   int i=0;
    string pass="pass";
    string p;
    cout<<"  HOSPITAL MANAGEMENT SYSTEM \n";
    cout<<"------------------------------\n";
    cout<<"             LOGIN \n";
    cout<<"------------------------------\n";
    while(1)
    {
        i++;
        cout << "Enter Password: ";
        cin>>p;
        if(p.compare(pass)==0&&i<=3)
        {
            break;
        }
        else if(p.compare(pass)!=0 && i<3)
            cout<<"Wrong password you have "<<(3-i)<<" attempts left"<<endl;
        else
            exit(0);
   }



}
