"""

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/57e3f79c9cb119374600046b/train/python


Instructions:
Define a method hello that returns "Hello, Name!" to a given name, or says Hello, World! if name is not given (or passed as an empty String).

Assuming that name is a String and it checks for user typos to return a name with a first capital letter (Xxxx).

Examples:
With name = "john"  => return "Hello, John!"
With name = "aliCE" => return "Hello, Alice!"
With name not given 
  or name = ""        => return "Hello, World!"

"""

def zdravo(name=''):
    return f"Hello, {name.title() or 'World'}!"
