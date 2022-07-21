/*
    if age = 21 && has license ===== hired
    else rejected

*/

#include <iostream>

using namespace std;

struct stInfo
{
    int Age;
    bool HasDrivingLicense;
};

struct stInfo ReadInfo(){

    struct stInfo Info;

    cout << "What's your age ? " << endl;
    cin >> Info.Age;

    cout << "Do you have a driver license ? " << endl;
    cin >> Info.HasDrivingLicense;

    return Info;
}

bool IsAccepted(stInfo Info){
    if(Info.Age >= 21 && Info.HasDrivingLicense == true)
        return true;
    else
        return false;
}

void PrintResult(stInfo Info){
    if(IsAccepted(Info))
        cout << "Hired" << endl;
    else 
        cout << "Rejected" << endl;
}

int main(){

    PrintResult(ReadInfo());

    return 0;
}