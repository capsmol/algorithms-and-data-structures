const arr = [5, 2, 4, 6, 1, 3];

const insertionSort = (arr) => {
    for (let i = 1; i < arr.length; i++) {
        const key = arr[i];
        let j = i - 1; // index previous element

        while (j >= 0 && key < arr[j]) {
            arr[j + 1] = arr[j];
            j--;
            arr[j + 1] = key;
        }
    }
    
};

const invertInsertSort = (arr) => {
    for (let i = 1; i < arr.length; i++) {
        const key = arr[i];
        let j = i - 1;

        while (j >= 0 && key > arr[j]) {
            arr[j + 1] = arr[j];
            j--;
            arr[j + 1] = key;
        }
    }
}

insertionSort(arr);
invertInsertSort(arr);
console.log(arr);