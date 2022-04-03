class Person{ 
    constructor(name){
        this.name = name;
    }

    greet(){
        console.log(`Hello, ${this.name}.`);
    }
}
class Crew extends Person{ }

let crew1 = new Crew('James Holden');
let crew2 = new Crew('Amos Burton');
let crew3 = new Crew('Naomi Nagata');
let crew4 = new Crew('Alex Kamal');
crew1.greet(), crew2.greet(), crew3.greet(), crew4.greet();