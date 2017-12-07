# SGR\_MACRO

This is a header-only library for C and C++ to easily control string color and style on terminal supporting ANSI color sequence.

## Usage

### Setup

Copy the header file `sgr_macro.h` to your project, and write:

```c
#include "sgr_macro.h"
```

### Code

`SGR(code)` and `SGR(code1, code2, ...)` will be expanded to a string literal.

Supported `code`s are listed below:

  * `FG_*`
      + Foreground color.
      + Supported colors are: `BLACK`, `RED`, `GREEN`, `YELLOW`, `BLUE`, `MAGENTA`, `CYAN`, and `WHITE`.
  * `BG_*`
      + Background color.
      + Same colors as `FG_*` are supported.
  * `RESET`: Reset all styles.
  * `BOLD`: Bold.
  * `NO_BOLD`: Stop bold font.
  * `UNDERLINE`: Underline.
  * `NO_UNDERLINE`: Stop underline.
  * `BLINK`: Blink the text.
  * `NO_BLINK`: Stop blink text.
  * `NEGATIVE`: Swap bg color and fg color.
  * `NO_NEGATIVE`: Stop swapping bg color and fg color.

### Examples

  * `SGR(BOLD)` will be expanded to `"\033[1m"`.
  * `SGR(RESET, FG_RED, BOLD)` will be expanded to `"033[0;31;1m"`.

See also: [`examples/sample.c`](examples/sample.c).

### Customize

Add `#define SGR_FOOBAR "999"` before `#include "sgr_macro.h"`, then you can use `SGR(FOOBAR)` and it will be expanded into `"\033[999m"`.

To see the list of available codes, visit <https://en.wikipedia.org/wiki/ANSI_escape_code#SGR_(Select_Graphic_Rendition)_parameters> (referred 2017-12-07).

### Macro definitions

This library defines only macros, all of them have prefix `SGR_`.

## Release

### 1.0 (2017-12-07)

Initial release.

## License

Licensed under MIT license.

See [LICENSE-MIT.txt](LICENSE-MIT.txt) or [https://opensource.org/licenses/MIT](https://opensource.org/licenses/MIT).
