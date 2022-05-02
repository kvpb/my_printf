# My PRINTF

>### DESCRIPTION
>
>The **my_printf()** function produce output according to a format as described below. The my_printf() functions write output to stdout, the standard output stream;
>
>This function writes the output under the control of a format string that specifies how subsequent arguments (or arguments accessed via the variable-length argument facilities of stdarg(3)) are converted for output.
>
>The format string is composed of zero or more directives: ordinary characters (not %), which are copied unchanged to the output stream; and conversion specifications, each of which results in fetching zero or more subsequent arguments.
>
>Each conversion specification is introduced by the % character. The arguments must correspond properly (after type promotion) with the conversion specifier. After the %, the following appear in sequence:
>
>&#09;&emsp;**doux** The _int_ (or appropriate variant) argument is converted to signed decimal (**d**). unsigned octal (**o**), unsigned decimal (**u**), unsigned hexadecimal (**x**).
>
>&emsp;**c** The int argument is converted to an unsigned char, and the resulting character is written.
>
>&emsp;**s** The _char *_ argument is expected to be a pointer to an array of character type (pointer to a string). Characters from the array are written up to (but not including) a terminating NUL character.
>
>&emsp;**p** The void * pointer argument is printed in hexadecimal.
[https://upskill.us.qwasar.io/projects/my_printf](https://upskill.us.qwasar.io/projects/my_printf)

## Instructions

0.	[Get](https://www.youtube.com/watch?v=7jF7vmR535E) [a](https://www.youtube.com/watch?v=Js67MmvR9Pg) [musical](https://www.youtube.com/watch?v=-C_3eYj-pOM) [culture.](https://www.youtube.com/watch?v=ViN2bRGrBx8) I referenced more in [discography.txt](https://git.us.qwasar.io/my_printf_33555_vuzyqu/my_printf/src/branch/dev/discography.txt).

1.	Launch a terminal emulator, e.g. [Terminator](https://gnome-terminator.org), [iTerm2](https://iterm2.com) or [the integrated terminal of Visual Studio Code](https://code.visualstudio.com/docs/editor/integrated-terminal), and enter this:
```sh
#s=$(pwd)
#cd
mkdir my_printf_33555_vuzyqu
cd my_printf_33555_vuzyqu
git clone https://git.us.qwasar.io/my_printf_33555_vuzyqu/my_printf
cd my_printf
#cd "${s}"
```

2.	Uncomment the test code on lines 217 to 246, or write your own:
```c
int main()
{
             char* a = "";
      signed  int  d = -2147483647; //=  INT_MIN;
    unsigned  int  o =  4294967295; //=  UINT_MAX;
    unsigned  int  u =  4294967295; //=  INT_MAX * 2 - 1;
    unsigned  int  x =  4294967295; //=  INT_MAX * 2 - 1;
             char  c = 'c';
             char* s = "string";
             void* p = &a;

    printf("%d\n",    printf("   PRINTF:\td:\t%d\n", d));
    printf("%d\n", my_printf("My PRINTF:\td:\t%d\n", d));
    printf("%d\n",    printf("   PRINTF:\to:\t%o\n", o));
    printf("%d\n", my_printf("My PRINTF:\to:\t%o\n", o));
    printf("%d\n",    printf("   PRINTF:\tu:\t%u\n", u));
    printf("%d\n", my_printf("My PRINTF:\tu:\t%u\n", u));
    printf("%d\n",    printf("   PRINTF:\tx:\t%x\n", x));
    printf("%d\n", my_printf("My PRINTF:\tx:\t%x\n", x));
    printf("%d\n",    printf("   PRINTF:\tc:\t%c\n", c));
    printf("%d\n", my_printf("My PRINTF:\tc:\t%c\n", c));
    printf("%d\n",    printf("   PRINTF:\ts:\t%s\n", s));
    printf("%d\n", my_printf("My PRINTF:\ts:\t%s\n", s));
    printf("%d\n",    printf("   PRINTF:\tp:\t%p\n", p));
    printf("%d\n", my_printf("My PRINTF:\tp:\t%p\n", p));
    //printf("%d\n",    printf("%s\n", (char*) NULL));
    //printf("%d\n", my_printf("%s\n", (char*) NULL));
    return 0;
} //	debug code
```
_`my_printf/` `src/` **`my_printf.c`**, lines 217 to 246_

3.	Then test it; just compare My PRINTF to any of the original BSD or GNU PRINTF:
```sh
make
./my_printf
```

---

<p align='center'><a href='https://kvpb.co'><img src='https://gist.githack.com/kvpb/bfed748ac5c509985c89ea613a2bfd02/raw/8c0b311b7c848fabddf61672ba6bb72c8754fed9/karlbertinssymbol.svg'></a><br>
<b>Karl V. P. B. `<code>kvpb</code>`</b><br>
<br>
<span style="display:block;text-align:center"><a href='https://www.linkedin.com/in/karlbertin'><img src='https://gistcdn.githack.com/kvpb/4d0c98dbf62d45a48efd38a011981163/raw/37b15e91a71a9125e5aa85e78dcde2977d8148a4/linkedin.svg' alt='LinkedIn'></a>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<a href='https://twitter.com/kvpbx'><img src='https://gistcdn.githack.com/kvpb/941cfa463e75f8c5fa392ddb673172b9/raw/5b29f30b6c0ef5000a27e156c9f78f4feaa78f66/twitter.svg' alt='Twitter'></a>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<a href='https://www.instagram.com/karlbertin/'><img src='https://gistcdn.githack.com/kvpb/b7f2a52ae60036fa14d5d9ccd94c471a/raw/3f92b64ad9c6c02627234e37ed373fa86baccdee/instagram.svg' alt='Instagram'></a>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<a href='https://vm.tiktok.com/ZSwAmcFh/'><img src='https://gistcdn.githack.com/kvpb/71a693f696d87330e5c73f03767cd57e/raw/8a0effb4388dca39ac75ddda61bb5695ccecfbc9/tiktok.svg' alt='TikTok'></a></span></p>