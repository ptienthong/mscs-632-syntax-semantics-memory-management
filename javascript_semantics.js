// Compute the factorial of a number using recursion
function factorialOf(number) {
    if (number === 0 || number === 1) {
        return 1;
    } else {
        return number * factorialOf(number - 1);
    }
}

// Compute the factorial of a number using closure
function factorialClosure() {
    function factorial(number) {
        if (number === 0 || number === 1) {
            return 1;
        } else {
            return number * factorial(number - 1);
        }
    }
    return factorial;
}

{
var fact = factorialClosure();

let number = 5;
let result = factorialOf(number);
console.log(`Factorial of ${number} is ${result}`);

number = 10;
result = factorialOf(number);
console.log(`Factorial of ${number} is ${result}`);

number = 15;
result = factorialOf(number);
console.log(`Factorial of ${number} is ${result}`);
}
// Using closure
number = 5;
console.log(`[Closure] Factorial of ${number} is ${fact(number)}`);
number = 10;
console.log(`[Closure] Factorial of ${number} is ${fact(number)}`);
number = 15;
console.log(`[Closure] Factorial of ${number} is ${fact(number)}`);