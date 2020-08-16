var roster=[];

function addNew()
{
  var newName=prompt("enter name");
  roster.push(newName);
}

function remove() {
  var reName=prompt("what name like to remove");
  var index=roster.indexOf(reName);
  roster.splice(index,1);

}

function display()
{
  console.log(roster);
}

var start=prompt("would you like to start?Y/N")
var request="empty"
if(start==='Y'){
  while(request!=="quit"){
    request=prompt("please select the action:add,remove or display");
    if(request=="add")
    {
      addNew()
    }
    else if(request==="remove")
    { remove()}
    else if (request==="display"){
      display()
    }
  }
}
