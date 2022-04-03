function insertionSort(array){
    for(var i = 1; i < array.length; i++){
        if(array[i] < array[0])
            array.unshift(array.splice(i,1)[0]);
        else if (array[i] > array[i-1])
            continue;
        else{
            for(var j = 1; j < i; j++){
                if(array[i] > array[j-1] && array[i] < array[j])
                    array.splice(j,0,array.splice(i,1)[0]);
            }
        }
    }
    return array;
}
var sampleArray = [46, 38, 25, 109, 127, 11, -69,
                34, 200, 321, -39, 321, 567, 1, 0];
console.log('Sorted array using Insertion Sort:', insertionSort(sampleArray));