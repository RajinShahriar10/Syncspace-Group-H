struct Student
{
    int studentId;
    char name[100];
    int age;
    float cgpa;
    char department[50];
    char email[100];
    char phone[25];
    char address[200];
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