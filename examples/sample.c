#if 0
SOURCE="$(basename "$0")"
cd "$(dirname "$0")"
gcc --std=c11 "$SOURCE" -o a.out && ./a.out
exit
#endif
/*
 * sample source.
 * To run, do `sh sample.c`.
 */
#include <stdio.h>
#include "../sgr_macro.h"

int     main(void)
{
    printf(
        "red char->" SGR(FG_RED)
        "underline and bold->" SGR(UNDERLINE, BOLD)
        "background green->" SGR(BG_GREEN)
        "reset->" SGR(RESET) "sample end\n"
    );
    return 0;
}
