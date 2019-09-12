var images = Array(
    "url(./img/first.jpg)",
    "url(./img/sec.jpg)",
    "url(./img/third.jpg)",
    "url(./img/for.jpg)",
    "url(./img/five.jpg)",
    "url(./img/six.jpg)",
    "url(./img/seven.jpg)",
    "url(./img/eight.jpg)",
    "url(./img/nine.jpg)",
);

var currentPos = 0;

function goRight() {
    if(currentPos >= images.length - 1) {
        currentPos = 0;
    } else {
        currentPos++;
    }

    changeImg();
}

function goLeft() {
    if(currentPos <= 0) {
        currentPos = images.length - 1;
    } else {
        currentPos--;
    }

    changeImg();
}

function changeImg() {
    document.getElementById("gallery").style.backgroundImage = images[currentPos];
}