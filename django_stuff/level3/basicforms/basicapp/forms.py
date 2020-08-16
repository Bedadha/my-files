from django import forms
from django.core import validators


class ForName(forms.Form):
    name=forms.CharField()
    email=forms.EmailField()
    verify_email=forms.EmailField(label='enter your email again')
    text=forms.CharField(widget=forms.Textarea)

    def clean(self):
        all_clean_data=super().clean()
        email=all_clean_data['email']
        vmail=all_clean_data['verify_email']

        if email !=vmail:
            raise forms.ValidationError("email not matched")
    #botcatcher=forms.CharField(required=False,widget=forms.HiddenInput,validators=[validators.MaxLengthValidator(0)])

    #def clean_botcather(self):
        #botcatcher=self.cleaned_data['botcatcher']
        #if len(botcatcher)>0:
        #    raise forms.ValidationError("gotcha bot")

        #return botcatcher
