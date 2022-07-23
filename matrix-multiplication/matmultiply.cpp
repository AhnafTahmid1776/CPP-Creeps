#include <iostream>

using namespace std;

int main()
{
    int first[100][100],second[100][100],result[100][100];
    int i,j,k,c1,c2,r1,r2,sum=0;
    cout << "enter row of first matrix"<< endl;
    cin >> r1;
    cout << "enter column of first matrix"<< endl;
    cin >> c1;
    cout << "enter row of second matrix"<< endl;
    cin >> r2;
    cout << "enter row of first matrix"<< endl;
    cin >> c2;

while(c1 != r2){
    cout << "Error! give input again"<< endl;
    cout << "enter row of first matrix"<< endl;
    cin >> r1;
    cout << "enter column of first matrix"<< endl;
    cin >> c1;
    cout << "enter row of second matrix"<< endl;
    cin >> r2;
    cout << "enter row of first matrix"<< endl;
    cin >> c2;
}

for(i=0 ; i< r1 ; i++){
    for(j=0 ; j<c1 ; j++){
        cin >> first[i][j];
        cout << endl;
    }
}

for(i=0 ; i< r2 ; i++){
    for(j=0 ; j<c2 ; j++){
        cin >> second[i][j];
        cout << endl;
    }
}
//output of first matrix
for(i=0 ; i<r1 ; i++){
    for(j=0 ; j<c1 ; j++){
        cout << first[i][j];
    }cout << endl;
}
cout << endl;
//output of second matrix
for(i=0 ; i<r2 ; i++){
    for(j=0 ; j<c2 ; j++){
        cout << second[i][j];
    }cout << endl;
}
//formula of multiplication matrix
for(i=0 ; i<r1 ; i++){
    for(j=0 ; j<c2 ; j++){
        for(k=0 ; k <c1 ; k++){
            sum  = sum + first[i][k]* second[k][j];}
            result[i][j] = sum ;
            sum = 0;
        }
    }

    cout << endl << endl;
   for(i=0 ; i<r1 ; i++){
    for(j=0 ; j<c2 ; j++){
        cout << result[i][j]<< " ";
    }cout << endl;
}
return 0;
}
