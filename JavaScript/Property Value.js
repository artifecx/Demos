let person1 = {
   name: "Henry",
   age: 23,
   degree: "IT"
}
let person2 = {
   name: "Victor",
   age: 21,
   degree: "CS"
}
function check(person1, person2){
   console.log(`Person 1: ${person1.name}, ${person1.age}, ${person1.degree}`);
   console.log(`Person 2: ${person2.name}, ${person2.age}, ${person2.degree}`);
   for(key in person2){
      if(person1[key] !== person2[key])
         return false;
   }
   return true;
}

console.log(`Match = ${check(person1, person2)}`);