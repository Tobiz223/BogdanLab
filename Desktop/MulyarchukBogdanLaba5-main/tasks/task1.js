//Функція filterAdults приймає масив об'єктів, що представлє людей (з полями name та age),
//вам потрібно написати код, який повертає новий масив, який містить лише тих людей, чий вік більше або дорівнює 18.

const people = [
      { name: 'Alice', age: 17 },
      { name: 'Bob', age: 20 },
      { name: 'Charlie', age: 16 },
      { name: 'David', age: 25 }
];

function filterAdults(people) {
  return people.filter(people => people.age >= 18);
}

const filtered = filterAdults(people)

console.log(filtered)

module.exports = filterAdults;