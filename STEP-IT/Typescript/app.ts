type Student = {
  firstName: string;
  lastName: string;
  age: number;
  grade: number;
  isScholarshipStudent: boolean;
};

const students: Student[] = [
  {
    firstName: "Andrei",
    lastName: "Popescu",
    age: 20,
    grade: 9.45,
    isScholarshipStudent: true
  },
  {
    firstName: "Maria",
    lastName: "Popescu",
    age: 21,
    grade: 8.75,
    isScholarshipStudent: true
  },
  {
    firstName: "Alex",
    lastName: "Dumitru",
    age: 19,
    grade: 7.80,
    isScholarshipStudent: false
  },
  {
    firstName: "Ioana",
    lastName: "Stan",
    age: 22,
    grade: 9.90,
    isScholarshipStudent: true
  },
  {
    firstName: "Mihai",
    lastName: "Radu",
    age: 20,
    grade: 8.20,
    isScholarshipStudent: false
  }
];

function displayStudent(student: Student): void {
  console.log("Student: " + student.firstName + " " + student.lastName);
  console.log("Age: " + student.age);
  console.log("Grade: " + student.grade);
  console.log("Scholarship: " + (student.isScholarshipStudent ? "Yes" : "No"));
  console.log("--------------------");
}

function calculateAverageGrade(studentsList: Student[]): number {
  let sum = 0;

  for (let i = 0; i < studentsList.length; i++) {
    sum = sum + studentsList[i].grade;
  }

  return sum / studentsList.length;
}

function countScholarshipStudents(studentsList: Student[]): number {
  let count = 0;

  for (let i = 0; i < studentsList.length; i++) {
    if (studentsList[i].isScholarshipStudent === true) {
      count++;
    }
  }

  return count;
}

function findBestStudent(studentsList: Student[]): Student {
  let bestStudent = studentsList[0];

  for (let i = 1; i < studentsList.length; i++) {
    if (studentsList[i].grade > bestStudent.grade) {
      bestStudent = studentsList[i];
    }
  }

  return bestStudent;
}

// Display all students
for (let i = 0; i < students.length; i++) {
  displayStudent(students[i]);
}

// Calculate and display average grade
const averageGrade = calculateAverageGrade(students);
console.log("Average grade: " + averageGrade.toFixed(2));

// Count and display scholarship students
const scholarshipStudents = countScholarshipStudents(students);
console.log("Scholarship students: " + scholarshipStudents);

// Find and display best student
const bestStudent = findBestStudent(students);
console.log("Best student:");
displayStudent(bestStudent);