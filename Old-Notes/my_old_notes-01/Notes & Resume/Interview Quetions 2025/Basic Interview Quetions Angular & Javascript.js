Basic Level
What is Angular, and how does it differ from other JavaScript frameworks?
->Angular is a TypeScript-based front-end framework developed by Google for building single-page applications (SPAs). It provides features like two-way data binding, dependency injection, routing, and built-in services, making development faster and more structured.

How is Angular different from other JavaScript frameworks?
Uses TypeScript – Unlike React and Vue, which use JavaScript, Angular is based on TypeScript for better code structure and maintainability.
Two-way Data Binding – Angular supports two-way data binding, meaning changes in the UI and model sync automatically, while React uses one-way binding.
Full-fledged Framework – Angular has built-in routing, form validation, and state management, whereas React and Vue require third-party libraries for these features.
Component-Based Architecture – Like React and Vue, Angular also follows a component-based approach for reusable UI elements.
Real DOM vs. Virtual DOM – Angular updates the Real DOM, making it slightly slower than React and Vue, which use a Virtual DOM for better performance.
When to use Angular?
Angular is best suited for large-scale, enterprise-level applications that need a structured framework with built-in functionalities.

What are components in Angular? How do you create one?
Explain the concept of modules in Angular. What is the purpose of NgModule?
What is Angular CLI? How does it help in project development?
What is two-way data binding in Angular?
Explain the difference between property binding, event binding, and two-way binding.
What is a directive in Angular? Explain the difference between structural and attribute directives.
What is the purpose of the @Input() and @Output() decorators in Angular?
What are services in Angular, and why are they used?
How does dependency injection work in Angular?
Advanced Level
What is lazy loading in Angular, and how is it implemented?
How do you handle API calls in Angular using HttpClient?
What is the difference between Observable and Promise in Angular?
What are Guards in Angular? Explain CanActivate and CanDeactivate.
How does Angular handle routing? What is RouterModule?
What are interceptors in Angular, and how do you use them?
What are the lifecycle hooks in Angular? Explain ngOnInit(), ngOnDestroy(), etc.
How do you optimize Angular applications for better performance?
What is the purpose of ChangeDetectionStrategy in Angular?
How does Angular handle state management? Have you worked with NgRx or any other state management libraries?
JavaScript Interview Questions
Basic Level
What is JavaScript? How does it differ from Java?
Explain the difference between var, let, and const.
What are the different data types in JavaScript?
What is hoisting in JavaScript?
What is the difference between == and === in JavaScript?
Explain callback functions in JavaScript.
What are arrow functions, and how are they different from regular functions?
What is the purpose of this keyword in JavaScript?
What are closures in JavaScript?
What is the difference between synchronous and asynchronous JavaScript?
Advanced Level
What is event delegation in JavaScript?
What are Promises and async/await, and how do they work?
What is debouncing and throttling, and why are they used?
Explain the prototype chain in JavaScript.
What are higher-order functions in JavaScript?
What is JSON.stringify() and JSON.parse()?
What is localStorage, sessionStorage, and cookies?
Explain deep copy vs shallow copy in JavaScript.
What is the difference between map, filter, and reduce?
What is the purpose of setTimeout() and setInterval()?
Coding Questions
Angular Coding Questions
Write a simple Angular component that displays a list of items and allows the user to delete an item.
Implement two-way data binding in Angular using an input field.
Create an Angular service that fetches data from a REST API and displays it in a component.
Implement an Angular route guard that restricts access to a specific route.
Create an Angular form validation for an email and password field using Reactive Forms.
JavaScript Coding Questions
Write a function to reverse a string without using the built-in reverse() method.
js
Copy
Edit
function reverseString(str) {
    return str.split('').reverse().join('');
}
console.log(reverseString("Hello")); // Output: "olleH"
Write a function to find the largest number in an array.
js
Copy
Edit
function findMax(arr) {
    return Math.max(...arr);
}
console.log(findMax([1, 2, 3, 4, 5])); // Output: 5
Write a function to remove duplicates from an array.
js
Copy
Edit
function removeDuplicates(arr) {
    return [...new Set(arr)];
}
console.log(removeDuplicates([1, 2, 2, 3, 4, 4, 5])); // Output: [1,2,3,4,5]
Implement a function to check if a given string is a palindrome.
js
Copy
Edit
function isPalindrome(str) {
    return str === str.split('').reverse().join('');
}
console.log(isPalindrome("madam")); // Output: true
Write a function to find the missing number in an array of numbers from 1 to N.
js
Copy
Edit
function findMissingNumber(arr, n) {
    let expectedSum = (n * (n + 1)) / 2;
    let actualSum = arr.reduce((acc, num) => acc + num, 0);
    return expectedSum - actualSum;
}
console.log(findMissingNumber([1, 2, 3, 5], 5)); // Output: 4
Would you like more detailed explanations or additional questions? 😊







