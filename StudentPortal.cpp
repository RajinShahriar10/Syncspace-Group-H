struct Student
{
    int id;
    char name[50];
    int age;
    float cgpa;
    char department[50];
    char email[100];
    char address[100];
    char gender[10];
    int semester;


    void displayStudents()
    {
        cout << "Age: " << age << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};