from django.shortcuts import render
#from apptwo.models import User
from apptwo.forms import NewUserForm
# Create your views here.
def index(request):
    return render(request,'appTwo/index.html')

def users(request):

    form=NewUserForm()

    if request.method=='POST':
        form=NewUserForm(request.POST)

        if form.is_valid():
            form.save(commit=True)
            return index(request)

        else :
            print('ERROR FORM INVALID')

    return render(request,'apptwo/users.html',{'form':form})







#def users(request):
#    user_list=User.objects.order_by('first_name')
    #user_dict={'users':user_list}
    #return render(request,'apptwo/users.html',context=user_dict)
