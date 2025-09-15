// З масива людей(people) Вам потрібно знайти людину за іменем(name)
const people = [
      { name: 'Alice', age: 25 },
      { name: 'Bob', age: 30 }
  ];
function findByName(people, name) {
  return people.find(people => people.name === name)
}

const task1 = findByName(people, "Bob")
console.log(task1)

module.exports = findByName;