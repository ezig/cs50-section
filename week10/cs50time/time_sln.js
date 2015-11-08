var clock = document.getElementById('clock');

setInterval(function() {
	// generate the clock here
	var date = new Date();

	clock.innerHTML = '<h1>' + date.getHours() + ':' + date.getMinutes() + ':' + date.getSeconds() + '</h1>';
}, 100);