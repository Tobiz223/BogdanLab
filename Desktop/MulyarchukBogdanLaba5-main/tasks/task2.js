const students = [
  { name: "John", age: 20, score: 85 },
  { name: "Jane", age: 22, score: 92 },
  { name: "Jim", age: 19, score: 75 },
  { name: "Jill", age: 21, score: 65 },
  { name: "Jack", age: 23, score: 95 },
];

// Ваше завдання: реалізувати наступні функції

// 1. getTopScoringStudents
// Приймає масив студентівaта повертає масив імен студентів, які мають оцінку більше 80
function getTopScoringStudents(students) {
  return students
  .filter(students => students.score >= 80)
  .map(student => student.name);
}

// 2. getAverageAge
// Приймає масив студентів та повертає середній вік студентів
function getAverageAge(students) {
  let totalAge = 0;
  for (let i = 0; i < students.length; i++) {
    totalAge += students[i].age;
  }
  const average = totalAge / students.length;
  return average;
}

// 3. addStudent
// Приймає масив студентів та новий об'єкт студента і додає його до масиву
function addStudent(students, student) {
  return students.concat(student)
}

// 4. removeStudentByName
// Приймає масив студентів та ім'я студента, якого потрібно видалити, і повертає новий масив без цього студента
function removeStudentByName(students, name) {
  return students.filter(students => students.name !== name)
}

console.log(getAverageAge(students))

module.exports = { getTopScoringStudents, getAverageAge, addStudent, removeStudentByName };