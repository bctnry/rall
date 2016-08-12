# rall
Turn UNIX newlines into DOS/Windows newlines.

spec
---

enter something like this:

` rall [filename] `

in your console and it should output a file with the same name with all `\n` turned into `\n\r`.

why the name
---

add an \\***r*** beside ***all*** \n, hence the name.

purpose
---

This thing serves as a small check of your understanding of the programming
language that you're using. To make such a tool you need to know how to:

- get the commandline arguments
- read/write file
- basic algorithm for string manipulation
 
at least. If you can you're able to do something meaningful with the language
that you're using.

further expansion
---

- a reverse. That is, turn all ` \n\r ` or ` \r\n ` into ` \n `.
  - add another commandline arguments like:
    ` rall --reverse [filename] `
- try to keep DOS/Windows newlines unmoved. That is, when your program occur a ` \n\r `
  or ` \r\n `, make sure that it won't turn it into something like ` \r\n\r `.
- other ideas are welcome.

on language restrictions
---

If the language you're using don't support commandline arguments it is OK to
use the standard input to get the filename from the user.
