function test(array) {
    if (array.length == 0) return;
    if (array.length == 1 && Array.isArray(array[0])) return [...test(array[0])]
    if (array.length == 1 && !Array.isArray(array[0])) return [...array]
    if (Array.isArray(array[0])) return [...array[0], ...test(array.slice(1))]
    return [array[0], ...test(array.slice(1))]
}

console.log(test());