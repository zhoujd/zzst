/* color */

static const char *colorname[] = {
	/* 8 normal colors */
	"#1e2127", /* black   */
	"#e06c75", /* red     */
	"#98c379", /* green   */
	"#d19a66", /* yellow  */
	"#61afef", /* blue    */
	"#c678dd", /* magenta */
	"#56b6c2", /* cyan    */
	"#abb2bf", /* white   */

	/* 8 bright colors */
	"#5c6370", /* black   */
	"#e06c75", /* red     */
	"#98c379", /* green   */
	"#d19a66", /* yellow  */
	"#61afef", /* blue    */
	"#c678dd", /* magenta */
	"#56b6c2", /* cyan    */
	"#ffffff", /* white   */

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
