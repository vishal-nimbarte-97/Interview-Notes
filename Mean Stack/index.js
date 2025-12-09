// arr=[2,3,7,1];

// arr.sort((a,b)=>a-b);

// console.log(arr);


// function reverseArray(arr) {
//   let i = 0;
//   let j = arr.length - 1;

//   while (i < j) {
//     // swap arr[i] and arr[j]
//     let temp = arr[i];
//     arr[i] = arr[j];
//     arr[j] = temp;

//     i++;  // move i forward
//     j--;  // move j backward
//   }

//   return arr;
// }

// const arr = reverseArray([2, 3, 7, 1]);
// console.log(arr); // Output: [1, 7, 3, 2]



// arr=[2,3,7,1] 

// console.log(sortArray(arr));

// function sortArray(arr)
// {
//     return arr.sort((a,b)=>a-b);
// }

// Sort this array

// let str = "Vishal";

// const arr = [];

// for(let i=0;i<str.length;i++)
// {
//     arr[i] = str.charAt(i);
// }

// console.log(arr.reverse());
// console.log(arr.sort((a,b)=>a.localeCompare(b)))

// let arr = [891, 23, 782, 67, 90];

// console.log(sortArray(arr)); 

// function sortArray(arr)
// {
//     for(let i=0;i<arr.length;i++)
//     {
//         for(let j=0;j<arr.length-1-i;j++)
//         {
//             if(arr[j]>arr[j+1])
//             {
//                 let temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }
//     return arr;
// }



// arr = [891, 23, 782, 67, 90];

// console.log(sortArray(arr));

// function sortArray(arr)
// {
//    return arr.sort((a,b)=>a-b);
// }

// arr = [891, 23, 782, 67, 90];

// // buble sort algorithm
// console.log(sortArray(arr));

// function sortArray(arr)
// {
//     for(let i=0;i<arr.length;i++)
//     {
//         for(let j=0;j<arr.length-1-i;j++)
//         {
//             if(arr[j]>arr[j+1])
//             {
//                 let temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }
//     return arr;
// }


// let str = "Hello";
// str.charAt(0) = 'h';
// console.log(str);  // ?

// they are occured the error because of the string are immutable and does not changes direclty like this so they are occured referance error

// let arr = [1, 2, 3];
// arr[10] = 5;
// console.log(arr.length);      // ? -> 11
// console.log(arr[5]);          // ? -> undefined
// console.log(arr);             // ? -> 1 2 3 undifinded .. 5

// console.log(true + 1);       // ? 2 
// console.log(false + 10);     // ? 10

// let arr = [1,2,3];
// '1,2,3'+ 1 -> 1,2,31
// console.log(arr + 1);        // ? 1,2,31

// console.log(typeof null);   // ? Object
// console.log(typeof NaN);    // ? number

// console.log([] == false);   // ? true

// console.log([] == ![]);   // ? true

// let arr = [1,,3];
// console.log(arr[1]);     // ?undefined
// console.log(arr.length); // ?3


// let obj = {};

// let a = { key: "a" };
// let b = { key: "b" };

// obj[a] = 123;
// obj[b] = 456;

// console.log(obj);        // ? {['object object']:456}
// console.log(obj[a]);     // ? 456

// ['object object']:456
// 456

// let str = "Vishal";

// console.log(reverseString(str));

// function reverseString(str)
// {
//     return str.split('').reverse().join('');
// }

// let str = "Vishal Nimbarte";

// console.log(reverseArray(str));

// function reverseArray(str)
// {
//     const arr = [];

//     for(let i=0;i<str.length;i++)
//     {
//         arr[i] = str.charAt(i);
//     }

//     let m = 0;

//     let n = arr.length-1;

//     while(m<n)
//     {
//         let temp = arr[m];
//         arr[m] = arr[n];
//         arr[n] = temp;
//         m++;
//         n--;
//     }

//     return arr.join('');
// }

// let str = 'maddam';

// let strReverse = checkPalindromOrNot(str);

// if(strReverse===str)
// {
//     console.log('It is Palindrom..!');
// }
// else 
// {
//     console.log('It is not Palindrom..!');
// }

// function checkPalindromOrNot(str)
// {
//     return str.split('').reverse().join('');
// }


// const arr =  [3, 7, 1, 9];

// console.log(findMaximumNumber(arr));

// function findMaximumNumber(arr)
// {
//     // return arr.sort((a,b) => a-b)[arr.length-1];

//     let maxNumber = arr[0];

//     for(let i=1;i<arr.length;i++)
//     {
//         if(maxNumber<arr[i])
//         {
//             maxNumber = arr[i];
//         }
//     }

//     return maxNumber;

// }

// 4. Count Vowels in a String

// Input: "javascript"
// Output: 3 (a, a, i)

// let str = 'javascript';

// console.log(findVowels(str));

// function findVowels(str)
// {

//     const arr = ['a','e','i','o','u'];

//     let count = 0;

//     for(let i=0;i<str.length;i++)
//     {
//         if(arr.includes(str.charAt(i)))
//         {
//             count++;
//         }
//     }

//     return count;
    
// }

// let fiveDigit = 123456;//sum

// console.log("Sum :- ",sumOfAllNumber(fiveDigit));

// function sumOfAllNumber(fiveDigit)
// {

//     let sum = 0;

//     let mod = 0;

//     while(fiveDigit>0)
//     {
//         mod = fiveDigit % 10;
//         sum = sum + mod;
//         fiveDigit = Math.floor(fiveDigit/10);
//     }

//     return sum;

// }

// 🔹 7. Remove Duplicates from Array

// Input: [1, 2, 2, 3, 4, 4]
// Output: [1, 2, 3, 4]

// const arr = [1, 2, 2, 3, 4, 4];

// console.log("Original Array :- "+arr);

// console.log("Remove Duplicate Element in Array : "+removeDuplicateElement(arr));

// function removeDuplicateElement(arr)
// {
//     const newArray = [];

//     for(let i=0;i<arr.length;i++)
//     {
//         if(!newArray.includes(arr[i]))
//         {
//             newArray.push(arr[i]);
//         }
//     }

//     return newArray;
// }

// 🔹 8. Capitalize First Letter of Each Word

// Input: "hello world"
// Output: "Hello World"


// let str = 'hello world';

// console.log(firstWordCapital(str));

// function firstWordCapital(str)
// {
// 	const strSplit = str.split(' ');
	
// 	for(let i=0;i<strSplit.length;i++)
// 	{
	
// 			let firstWord = '';
			
// 			let words = strSplit[i];
			
// 			for(let j=0;j<words.length;j++)
// 			{
// 				if(j==0)
// 				{
// 					firstWord = firstWord + words[j].toUpperCase();
// 				}
// 				else 
// 				{
// 					firstWord = firstWord + words[j];
// 				}
// 			}
			
// 			strSplit[i] = firstWord;
// 	}
	
// 	return strSplit.join(' ');
// }

// const arr = [1,2,3,4,5,6];

// const value = arr.reduce((acc,data)=>{
//     return acc+data;
// },0);

// console.log(value);


// let str = "Hello";
// str[0] = 'h';
// str.charAt(0) = 'h';
// console.log(str);

// let arr = [1,2,3];
// arr[10] = 4;
// console.log(arr.length);


// --------------------------------------------------------------------------------------

// let str = "World";
// str[0] = 'w'; //javascript string is immutable and they are does not directly change
// console.log(str);  // ?World

// let str = "Hello";
// str.charAt(0) = 'h';
// console.log(str);  // ?referance error are occured because of the string is immutable in the javscript and they are not direclty changes 

// let str = "Hello";

// const strArray = str.split('');

// strArray[0] = 'h';

// str = strArray.join('');

// console.log(str);

// let arr = [1, 2, 3];
// arr[10] = 5;
// console.log(arr.length);      // ? 11
// console.log(arr[5]);          // ? undefined
// console.log(arr);             // ? 1 2 3 ...<undefined list> 5

// console.log(true + 1);       // ? -> 2
// console.log(false + 10);     // ? -> 10

// let arr = [1,2,3];
// console.log(arr + 1);        // ? 1,2,31

// '1,2,3' + 1

// console.log(typeof null);   // ? object

// console.log(typeof NaN);   // ? number

// console.log([] == false);   // ? true

// console.log([] == ![]);   // ? true

// let arr = [1,,3];
// console.log(arr[1]);     // ?undefined
// console.log(arr.length); // ?3

// let obj = {};
// let a = { key: "a" };
// let b = { key: "b" };

// obj[a] = 123;
// obj[b] = 456;

// console.log(obj);        // ?{['object object']:456}
// console.log(obj[a]);     // ?456

// Input: "hello"
// Output: "olleh"

// let str = 'madam';

// console.log(reverseString(str));

// function reverseString(str)
// {
//     // return str.split('').reverse().join('');

//     const strArray = str.split('');

//     let i = 0;
//     let j = strArray.length - 1;

//     while(i<j)
//     {
//         let temp = strArray[i];
//         strArray[i] = strArray[j];
//         strArray[j] = temp;
//         i++;
//         j--;
//     }

//     if(str===strArray.join(''))
//     {
//         return true;
//     }
//     else 
//     {
//         return false;
//     }

// }


// Input: "madam"
// Output: true

// Input: [3, 7, 1, 9]
// Output: 9

// const arr = [3, 7, 1, 9];

// console.log(findMaximumNumber(arr));

// function findMaximumNumber(arr)
// {
//     let maxNumber = arr[0];
//     for(let i=1;i<arr.length;i++)
//     {
//         if(maxNumber<arr[i])
//         {
//             maxNumber = arr[i];
//         }
//     }
//     return maxNumber;
// }

// Input: "javascript"
// Output: 3 (a, a, i)

// let str = 'javascript';
// console.log(countVowels(str));
// function countVowels(str) 
// {
//   const vowelArray = ['a','e','i','o','u'];
//   let count = 0;
//   for(let i=0;i<str.length;i++)
//   {
//     if(vowelArray.includes(str.charAt(i)))
//     {
//         count++;
//     }
//   }
//   return count;
// }

// Input: 1234
// Output: 10

// let value = 123456;

// console.log(sumOfAllNumber(value));

// function sumOfAllNumber(value)
// {
//     let totalCount = 0;
//     let mod = 0;

//     while(value>0)
//     {
//         mod = value % 10;
//         totalCount = totalCount + mod;
//         value = Math.floor(value/10);
//     }
//     return totalCount;
// }

// Input: [1, 2, 2, 3, 4, 4]
// Output: [1, 2, 3, 4]

// const arr = [1, 2, 2, 3, 4, 4];

// console.log('Orignal Array :- ',arr);

// console.log('Duplicates Remove :- ',duplicateRemove(arr));

// function duplicateRemove(arr)
// {
//     const dArray = [];
//     for(let i=0;i<arr.length;i++)
//     {
//         if(!dArray.includes(arr[i]))
//         {
//             dArray.push(arr[i]);
//         }
//     }
//     return dArray;
// }

// Input: "hello world"
// Output: "Hello World"

// let str = 'hello world';

// console.log(capitalizeWords(str));

// function capitalizeWords(sentence) {

//     const sentenceSplit = sentence.split(' ');

//     for(let i=0;i<sentenceSplit.length;i++)
//     {

//         let words = sentenceSplit[i];

//         let firstCapitalLetter = '';

//         for(let j=0;j<words.length;j++)
//         {
//             if(j==0)
//             {
//                 firstCapitalLetter = firstCapitalLetter + words[0].toUpperCase();
//             }
//             else 
//             {
//                 firstCapitalLetter = firstCapitalLetter + words[j];
//             }
//         }

//         sentenceSplit[i] = firstCapitalLetter;

//     }

//     return sentenceSplit.join(' ');
// }


// Input: "listen", "silent"
// Output: true

// let str1 = 'listen';
// let str2 = 'silent';

// console.log(isAnagram(str1,str2));

// function isAnagram(str1, str2) {

//     const arr1 = str1.split('').sort((a,b)=>a.localeCompare(b)).join('');
//     const arr2 = str2.split('').sort((a,b)=>a.localeCompare(b)).join('');

//     if(arr1===arr2)
//     {
//         return true;
//     }

//     return false;
// }


// Input: [1, 2, 2, 3, 3, 3]
// Output: {1: 1, 2: 2, 3: 3}

// const arr = [1, 2, 2, 3, 3, 3];

// let arr = [1,2,3];
// arr[10] = 4;
// console.log(arr.length);

// let str = "Hello";
// str[0] = 'h'; 
// str.charAt(0) = 'h';
// console.log(str);

// const arr = [2,3,7,1];

// console.log(sortArray(arr));

// function sortArray(arr)
// {
//     return arr.sort((a,b)=>a-b);
// }

// const arr = [1,1,5,2,3,4,4,5,2];

// // find single repeat value 

// console.log(findSingleRepeatValue(arr));

// function findSingleRepeatValue(arr)
// {
//     for(let i=0;i<arr.length;i++)
//     {

//     }
// }

// let str = "Hello";
// 	//  str[0] = 'h'; 
// 	str.charAt(0) = 'h';
// 	 console.log(str);

//  let arr = [1,2,3];
// 	arr[10] = 4;
// 	console.log(arr.length);
//     console.log(arr[6]);

//  let arr = [1,2,3];
    // sort
    // bubbule sort
	// Time Complexity
    // arr.sort((a,b)=>a.localeCompare(b));
    // console.log(arr);

//     console.log(sortArray(arr));

// function sortArray(arr)
// {
//     for(let i=0;i<arr.length;i++)
//     {
//         for(let j=0;j<arr.length-1-i;j++)
//         {
//             if(arr[j]<arr[j+1])
//             {
//                 let temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }
//     return arr;
// }

// what is callback function 
// ->callback function is function that is passed as an argument to the another function.

// function firstFunction(callback){
//     callback();
// }

// function demoFunction(){
//     console.log('Hello World..!');
// }

// firstFunction(demoFunction);


// function demoFunction(){
//     setTimeout(()=>{
//         console.log("Hello World..!");
//     },2000);
// }

// demoFunction();

function demoFunction(){
    let count = 0;
    let stop = setInterval(()=>{
        count = count + 1;
        console.log('Hello, World..!');
        if(count===5){
            setInterval(stop);
        }
    },1000);
}
demoFunction();