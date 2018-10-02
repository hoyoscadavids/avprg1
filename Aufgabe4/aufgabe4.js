var context = new AudioContext();
var osc = context.createOscillator();
osc.frequency.value = 0;
osc.connect(context.destination);
osc.start();

var osc2 = context.createOscillator();
osc2.frequency.value = 0;
osc2.connect(context.destination);
osc2.start();

function soundSlider(){
  //  osc.frequency.value = document.getElementById("noteRange").value;
    osc2.frequency.value = document.getElementById("noteRange").value /2 ;

}
function sound1(){
    osc.frequency.value = 440;
}
function sound2(){
    osc.frequency.value = 493.88;
}
function sound3(){
    osc.frequency.value = 523.25;
}
function sound4(){
    osc.frequency.value = 587.33;
}

function stop(){
    osc.stop();
    osc2.stop();
}

