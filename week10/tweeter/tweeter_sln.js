var textarea = document.getElementById('text');
var remaining = document.getElementById('characters-remaining');

textarea.onkeyup = function(e) {
	var r = 140 - textarea.value.length;

	if (r < 0) {
		textarea.value = textarea.value.substring(0, 140);
		return false;
	}

	remaining.innerHTML = r;
}