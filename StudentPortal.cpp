struct Student
{
    int id;
    char name[50];
    int age;
    float cgpa;
    char department[50];


    void displayStudents()
    {
        cout << "Age: " << age << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};