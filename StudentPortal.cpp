struct Student
{
    int id;
    char name[50];
    int age;
    float cgpa;
    char department[50];
    char email[100];
    char phone[20];
    char address[100];
    char gender[10];
    int semester;
    int creditHours;
    char status[20];


    void displayStudents()
    {
        cout << "Age: " << age << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};