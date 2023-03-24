# my_printf
**`EPITECH 1st year project`**

## Goal
You must recode the printf function from the C library according to the C99 standard. Your function should be prototyped like the printf function.
You do not have to implement the C library printf buffer handling.
You must process all printf formating flags except the following (which are optional):

float or double types management,
%n flag management,
" * " , " ’ " and " I " (capital i) flags management.
You must add a %b formating flag, which prints unsigned numbers in a binary base.
You must also add a %S formating flag, which prints a character string (like %s). However, non-printable characters (ASCII value strictly smaller than 32 or greater or equal than 127) must be represented by a back- slash to be followed by the character’s value in octal base.

## Usage
**`my_printf(%flag, variable)`**

Example:

input
```c
int main(int ac, char **av)
{
    my_printf(%s, "Hello World!");
    return (0);
}
```
outpout
```
Hello World!
```

## Result
<img width="575" alt="Capture d’écran 2023-03-24 à 11 48 01" src="https://user-images.githubusercontent.com/91894666/227503528-d0db3774-966b-42ec-93ca-98a2633deb85.png">

