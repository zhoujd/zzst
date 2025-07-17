/* color */

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
	"#cccccc",
	"#555555",
	"#ebdbb2", /* default foreground colour */
	"#000000", /* default background colour */
};


/*
 * Default colors (colorname index)
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultfg = 258;
unsigned int defaultbg = 259;
unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
