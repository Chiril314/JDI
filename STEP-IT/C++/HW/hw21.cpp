#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <conio.h>

using namespace std;

void save_VECTOR_X(char NF[], int *X) {
    FILE *fp = fopen(NF, "w+");
    if(!fp){ 
        cout << "Error opening file for writing" << endl; 
        exit(1); 
    }

    fprintf(fp, "%d\n", *X);
    for(int i = 0, N; i < *X; i++){
        N = rand() % 20 + 10;
        fprintf(fp, "%d ", N);
        for(int j = 0; j < N; j++)
            fprintf(fp, "%d ", rand() % 10);
        fprintf(fp, "\n");
    }
    fclose(fp);
}

int load_VECTOR_X(char *NF, int MATRIX[][100]){
    int X;
    FILE *fp = fopen(NF, "r+");
    if(!fp){ 
        cout << "Error opening file for reading" << endl; 
        exit(1); 
    }

    fscanf(fp, "%d", &X);
    for(int i = 0; i < X; i++){
        fscanf(fp, "%d", &MATRIX[i][0]);
        for(int j = 1; j <= MATRIX[i][0]; j++)
            fscanf(fp, "%d", &MATRIX[i][j]);
    }
    fclose(fp);

    return X;
}

struct ABC{
    int a;
    int b;
    int c;
    int R;
};

template <typename T>
void SAVE_BIN(char file_name[], T STRUCT[], int NR){
    FILE *fp = fopen(file_name, "w+b");
    if(!fp){ 
        cout << "Error opening file for binary write" << endl; 
        exit(1); 
    }
    fwrite(STRUCT, sizeof(T), NR, fp);
    fclose(fp);
}

template <typename T>
int LOAD_BIN(char file_name[], T STRUCT[], int MAX_SIZE){
    FILE *fp = fopen(file_name, "r+b");
    if(!fp){ 
        cout << "Error opening file for binary read" << endl; 
        exit(1); 
    }
    int count = fread(STRUCT, sizeof(T), MAX_SIZE, fp);
    fclose(fp);

    return count;
}

int meniu(){
    system("cls");
    cout << endl << endl << "\t   MENIU        " << endl;
    cout << "\t  1. Insert Student " << endl;
    cout << "\t  2. Show Student   " << endl;
    cout << "\t  3. Edit Student   " << endl;
    cout << "\t  4. Find Student   " << endl;
    cout << "\t  5. SAVE Student   " << endl;
    cout << "\t  6. LOAD Student   " << endl;
    cout << "\tESC. EXIT           " << endl;

    return _getch();
}

int main(){
    srand(time(0));

    bool flag = true;
    int ch; 

    struct Student{
        char name[50];
        int age;
    } students[100];

    int studentCount = 0;
    while(flag){
        ch = meniu();
        switch(ch){
            case '1': {
                system("cls");
                cout << endl << "INSERT STUDENT" << endl;
                if(studentCount >= 100){
                    cout << "Too many students." << endl;
                    system("pause");
                    break;
                }
                cout << "Enter name: ";
                cin >> students[studentCount].name;
                cout << "Enter age: ";
                cin >> students[studentCount].age;
                studentCount++;
                cout << "Student added successfully." << endl;
                system("pause");
                break;
            }

            case '2': {
                system("cls");
                cout << endl << "SHOW STUDENTS" << endl;
                for(int i = 0; i < studentCount; i++){
                    cout << setw(3) << i + 1 << ". "
                         << setw(15) << students[i].name
                         << " Age: " << students[i].age << endl;
                }
                if(studentCount == 0)
                    cout << "No students available." << endl;
                system("pause");
                break;
            }

            case '3': {
                system("cls");
                cout << endl << "EDIT STUDENT" << endl;
                int id;
                cout << "Enter student number: ";
                cin >> id;
                if(id < 1 || id > studentCount){
                    cout << "Invalid ID." << endl;
                    system("pause");
                    break;
                }
                cout << "Enter new name: ";
                cin >> students[id - 1].name;
                cout << "Enter new age: ";
                cin >> students[id - 1].age;
                cout << "Updated successfully." << endl;
                system("pause");
                break;
            }

            case '4': {
                system("cls");
                cout << endl << "FIND STUDENT" << endl;
                char target[50];
                cout << "Enter name: ";
                cin >> target;
                bool found = false;
                for(int i = 0; i < studentCount; i++){
                    if(strcmp(students[i].name, target) == 0){
                        cout << "Found: " << students[i].name
                             << " Age: " << students[i].age << endl;
                        found = true;
                    }
                }

                if(!found)
                    cout << "Student not found." << endl;
                system("pause");
                break;
            }

            case '5': {
                system("cls");
                cout << endl << "SAVE STUDENTS TO FILE" << endl;
                SAVE_BIN("students.bin", students, studentCount);
                cout << "Saved " << studentCount << " students." << endl;
                system("pause");
                break;
            }

            case '6': {
                system("cls");
                cout << endl << "LOAD STUDENTS FROM FILE" << endl;
                studentCount = LOAD_BIN("students.bin", students, 100);
                cout << "Loaded " << studentCount << " students." << endl;
                system("pause");
                break;
            }

            case 27:
                flag = false;
                break;

            default:
                cout << "Invalid choice." << endl;
                system("pause");
        }
    }

    cout << "Exiting program..." << endl;
    
    return 0;
}