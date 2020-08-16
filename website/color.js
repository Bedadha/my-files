var x=document.querySelector("h1")

x.style.color="red"

function randomSelector(){
  var letter="0123456789ABCDEF";
  var color="#";
  for(i=0;i<6;i++)
  {
    color+=letter[Math.floor(Math.random()*16)];
  }
  return color;
}

function changeColor(){
  colorInput=randomSelector();
  x.style.color=colorInput;
}

setInterval("changeColor()",500);
