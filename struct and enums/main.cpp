#include <iostream>

using namespace std;

// enums

enum enColor { Red, Green, Yellow, Blue};
enum enGender { Male, Female};
enum enMaritalStatus { Single, Married};

// structs

struct stAddress
{
    string StreetName;
    string BuildingNo;
    string POBox;
    string ZipCode;
};


struct stContactInfo 
{
    string Phone;
    string Email;

    stAddress Address;
};


struct stPerson 
{   
    string FirstName;
    string LastName;


    stContactInfo ContactInfo;

    enMaritalStatus MaritalStatus;
    enGender Gender;
    enColor FavourateColor;
};



int main(){

    stPerson Person1;

    Person1.FirstName = "Yahya";
    Person1.LastName = "Mallak";

    Person1.ContactInfo.Email = "yahya10mallak@gmail.com";
    Person1.ContactInfo.Phone = "0630864530";
    Person1.ContactInfo.Address.POBox = "A20";
    Person1.ContactInfo.Address.ZipCode = "10578";
    Person1.ContactInfo.Address.StreetName = "Tayla Street";
    Person1.ContactInfo.Address.BuildingNo = "12";


    Person1.Gender = enGender::Male;
    Person1.MaritalStatus = enMaritalStatus::Married;
    Person1.FavourateColor = enColor::Green;


    cout << Person1.FirstName << endl;





    return 0;
}