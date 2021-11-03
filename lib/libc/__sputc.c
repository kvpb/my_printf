
#define	__sputc(c, p) \
	(--(p)->_w < 0 ? \
		(p)->_w >= (p)->_lbfsize ? \
			(*(p)->_p = (c)), *(p)->_p != '\n' ? \
				(int)*(p)->_p++ : \
				__swbuf('\n', p) : \
			__swbuf((int)(c), p) : \
		(*(p)->_p = (c), (int)*(p)->_p++))
#endif // https://opensource.apple.com/source/Libc/Libc-167/stdio.subproj/putc.c.auto.html, https://android.googlesource.com/platform/bionic/+/16d1af1/libc/include/stdio.h#385

// So this is a function-like macro? https://en.wikipedia.org/wiki/C_preprocessor#Macro_definition_and_expansion Where are the data types? I gotta study this. If I am getting it, it substitutes text, but it does not check types. Isn't that fucky? BASH already does this, and it works like shit, parses everytime, just fails most of it. Jesus Christ, I cringe before that kind of cryptic code. I must rewrite it as a function. Let's see what's what.

int __sputc(int c, FILE *p) // I suppose, but IDK.
{ // I guessed it, it seems. https://cpip.readthedocs.io/en/stable/_static/dictobject.c/stdio.h_79ef0634ae8f8ca929453be1ddd8933f.html#348
	if ( --(p)->_w < 0 )
	{
		if ( (p)->_w >= (p)->_lbfsize )
		{
			if ( (*(p)->_p = (c)), *(p)->_p != 'n' )
			{
				(int)*(p)->_p++;
			}
			else
			{
				__swbuf('\n', p);
			}
		}
		else
		{
			__swbuf((int)(c), p);
		}
	}
	else
	{
		(*(p)->_p = (c), (int)*(p)->_p++);
	}
} // Did I rewrite it correctly?

// I have to rewrite it again. Now, I understand 42's staff. Hey, why not rewrite it according the norm of 42?

