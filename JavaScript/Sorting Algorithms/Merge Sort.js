function mergeSort(array){
    if(array.length < 2)
        return array;
    var mid = Math.floor(array.length / 2);
    var left = mergeSort(array.slice(0, mid));
    var right = mergeSort(array.slice(mid));

    return merge(left, right);
}
function merge(leftArr, rightArr){
    var finalArr = [];
    while(leftArr.length > 0 && rightArr.length > 0)
        finalArr.push(leftArr[0] < rightArr[0]? leftArr.shift() : rightArr.shift());

    return finalArr.concat(leftArr.length? leftArr : rightArr);
}
var sampleArray = [46, 38, 25, 109, 127, 11, -69,
                34, 200, 321, -39, 321, 567, 1, 0];
console.log('Sorted array using Merge Sort:', mergeSort(sampleArray));