function quickSort(array){
   if(array.length <= 1)
      return array;
   else{
      var leftArr = [];              
      var rightArr = [];
      var newArr = [];
      var pivot = array.pop();
      var length = array.length;
      for(var i = 0; i < length; i++){
         if(array[i] <= pivot)
            leftArr.push(array[i]);      
         else
            rightArr.push(array[i]);
      }
      return newArr.concat(quickSort(leftArr), pivot, quickSort(rightArr));
   }
}
var sampleArray = [46, 38, 25, 109, 127, 11, -69,
               34, 200, 321, -39, 321, 567, 1, 0];
console.log('Sorted array using Quick Sort:', quickSort(sampleArray));