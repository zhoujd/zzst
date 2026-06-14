/*
 * gruvbox.h
 * https://github.com/morhetz/gruvbox
 */

static const char *colorname[] = {
	/* 8 normal colors */
	"#282828", /* black   */
	"#cc241d", /* red     */
	"#98971a", /* green   */
	"#d79921", /* yellow  */
	"#458588", /* blue    */
	"#b16286", /* magenta */
	"#689d6a", /* cyan    */
	"#a89984", /* white   */

	/* 8 bright colors */
	"#928374", /* black   */
	"#fb4934", /* red     */
	"#b8bb26", /* green   */
	"#fabd2f", /* yellow  */
	"#83a598", /* blue    */
	"#d3869b", /* magenta */
	"#8ec07c", /* cyan    */
	"#ebdbb2", /* white   */

	[255] = 0,

	/* more colors can be added after 255 to use with DefaultXX */
	"#ebdbb2", /* default foreground colour */
	"#000000", /* default background colour */
	"#ebdbb2",
	"#000000",
};

/*
 * Default colors (colorname index)
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
unsigned int defaultcs = 258;
static unsigned int defaultrcs = 259;
