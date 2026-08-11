struct Student
{
    int id;
    char name[50];
    int age;
    float cgpa;
    char department[30];


    void displayStudents()
    {
        cout << "Age: " << age << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};