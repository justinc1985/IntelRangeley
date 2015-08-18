/* generated by MKexpanded.sh */
#define NEED_NCURSES_CH_T 1
#include <curses.priv.h>

#ifndef CUR
#define CUR SP_TERMTYPE
#endif

#if NCURSES_EXPANDED
 void
_nc_toggle_attr_on (attr_t *S, attr_t at)
{
 { if (((int)((((unsigned long)(at) & ((((1UL) << 8) - 1UL) << ((0) + 8))) >> 8))) > 0) { (*S) = ((*S) & ALL_BUT_COLOR) | (attr_t) (at); } else { (*S) |= (attr_t) (at); } ;};
}

 void
_nc_toggle_attr_off (attr_t *S, attr_t at)
{
 { if (((int)((((unsigned long)(at) & ((((1UL) << 8) - 1UL) << ((0) + 8))) >> 8))) > 0) { (*S) &= ~(at|((((1UL) << 8) - 1UL) << ((0) + 8))); } else { (*S) &= ~(at); } ;};
}

 int
_nc_DelCharCost ( int count)
{
 return ((cur_term->type. Strings[105] != 0) ? SP->_dch_cost : ((cur_term->type. Strings[21] != 0) ? (SP->_dch1_cost * count) : 1000000));
}

 int
_nc_InsCharCost ( int count)
{
 return ((cur_term->type. Strings[108] != 0) ? SP->_ich_cost : ((cur_term->type. Strings[31] && cur_term->type. Strings[42]) ? SP->_smir_cost + SP->_rmir_cost + (SP->_ip_cost * count) : ((cur_term->type. Strings[52] != 0) ? ((SP->_ich1_cost + SP->_ip_cost) * count) : 1000000)));
}

 void
_nc_UpdateAttrs ( const cchar_t * c)
{
 if (!((((*((SP)->_current_attr))).attr) == (((*c)).attr))) { attr_t chg = (((*((SP)->_current_attr))).attr); vidattr((((*c)).attr)); if (cur_term->type. Numbers[4] > 0 && (((chg ^ (((*((SP)->_current_attr))).attr))) & SP->_xmc_suppress)) { ; _nc_do_xmc_glitch( chg); } };
}

#if NCURSES_SP_FUNCS
 int
_nc_DelCharCost (int count)
{
 return _nc_DelCharCost (SP, count);
}

 int
_nc_InsCharCost (int count)
{
 return _nc_InsCharCost(SP, count);
}

 void
_nc_UpdateAttrs (const cchar_t * c)
{
 _nc_UpdateAttrs(SP,c);
}
#endif
#else /* ! NCURSES_EXPANDED */
NCURSES_EXPORT(void) _nc_expanded (void) { }
#endif /* NCURSES_EXPANDED */
