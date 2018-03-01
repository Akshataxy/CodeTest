function getCoordinates(event) {
    var x = event.clientX;
    var y = event.clientY;
}

// Call C from JavaScript
var result = Module.cwrap('multiply', // name of C function
  'number', // return type
  ['number', 'number'], // argument types
  [$x, $y]); // arguments
