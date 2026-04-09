function ho() {
	return arguments.length ? `Ho ${ arguments['0'] }` : 'Ho!';
}
console.log(ho(ho(ho(ho(ho())))));
