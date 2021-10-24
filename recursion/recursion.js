let arr = [1, 2, 3, 4, 5];

function reverseArr(arr, i, j) {
    if (i === j || i > j) {
        return;
    }
    const temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    reverseArr(arr, i + 1, j - 1);
}

function reverseArr(arr, i, n) {
    if (i > n / 2) {
        return;
    }
    const temp = arr[i];
    arr[i] = arr[n - 1 - i];
    arr[n - 1 - i] = temp;
    reverseArr(arr, i + 1, n);
}

function isPalindrome(arr, i, n) {
    if (i > n / 2) {
        return true;
    }
    if (arr[i] === arr[n - 1 - i]) {
        return isPalindrome(arr, i + 1, n);
    }
    return false;
}    


function sumofDigits(number){
    if(number/10 ===0 ){
        return number;
    }
    retunr (number%10 + sumofDigits(number/10));
}
            
                    