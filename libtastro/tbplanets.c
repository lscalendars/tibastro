/*
License for Tibastro - Tibetan almanach calculation program

Copyright (c) 2009-2011 Edward Henning
Copyright (c) 2012-2013 Elie Roux <elie.roux@telecom-bretagne.eu>

Permission is hereby granted, free of charge, to any person obtaining a copy of
this software and associated documentation files (the "Software"), to deal in
the Software without restriction, including without limitation the rights to
use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
the Software, and to permit persons to whom the Software is furnished to do so,
subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

#include "tbplanets.h"
#include "tbmath.h"
#include "tbstructures.h"

static long int merbye1[14] =
  { 16, 15, 14, 13, 11, 7, 5, 0, 4, 11, 20, 28, 34, 16 };
static long int merbye2[14] =
  { 28, 20, 11, 4, 0, 5, 7, 11, 13, 14, 15, 16, 16, 34 };
static long int merdom1[14] =
  { 16, 32, 47, 61, 74, 85, 92, 97, 97, 93, 82, 62, 34, 0 };
static long int merdom2[14] =
  { 34, 62, 82, 93, 97, 97, 92, 85, 74, 61, 47, 32, 16, 0 };
static long int venbye1[14] =
  { 25, 25, 24, 24, 22, 22, 18, 15, 8, 6, 30, 99, 73, 25 };
static long int venbye2[14] =
  { 99, 30, 6, 8, 15, 18, 22, 22, 24, 24, 25, 25, 25, 73 };
static long int vendom1[14] =
  { 25, 50, 75, 99, 123, 145, 167, 185, 200, 208, 202, 172, 73, 0 };
static long int vendom2[14] =
  { 73, 172, 202, 208, 200, 185, 167, 145, 123, 99, 75, 50, 25, 0 };
static long int marbye1[14] =
  { 23, 23, 23, 21, 21, 18, 15, 11, 3, 11, 38, 80, 53, 24 };
static long int marbye2[14] =
  { 80, 38, 11, 3, 11, 15, 18, 21, 21, 23, 23, 23, 24, 53 };
static long int mardom1[14] =
  { 24, 47, 70, 93, 114, 135, 153, 168, 179, 182, 171, 133, 53, 0 };
static long int mardom2[14] =
  { 53, 133, 171, 182, 179, 168, 153, 135, 114, 93, 70, 47, 24, 0 };
static long int jupbye1[14] =
  { 10, 9, 8, 6, 6, 2, 1, 3, 6, 9, 11, 16, 7, 10 };
static long int jupbye2[14] =
  { 16, 11, 9, 6, 3, 1, 2, 6, 6, 8, 9, 10, 10, 7 };
static long int jupdom1[14] =
  { 10, 20, 29, 37, 43, 49, 51, 52, 49, 43, 34, 23, 7, 0 };
static long int jupdom2[14] =
  { 7, 23, 34, 43, 49, 52, 51, 49, 43, 37, 29, 20, 10, 0 };
static long int satbye1[14] = { 5, 5, 4, 4, 2, 2, 0, 2, 4, 5, 6, 8, 3, 6 };
static long int satbye2[14] = { 8, 6, 5, 4, 2, 0, 2, 2, 4, 4, 5, 5, 6, 3 };
static long int satdom1[14] =
  { 6, 11, 16, 20, 24, 26, 28, 28, 26, 22, 17, 11, 3, 0 };
static long int satdom2[14] =
  { 3, 11, 17, 22, 26, 28, 28, 26, 24, 20, 16, 11, 6, 0 };

static long int plahaf[6] = { 13, 30, 0, 0, 0, 0 };
static long int merfac[5] = { 16, 30, 0, 0, 0 };
static long int merbye[6] = { 7, 3, 3, 7, 10, 10 };
static long int merdom[6] = { 10, 17, 20, 17, 10, 0 };
static long int venfac[5] = { 6, 0, 0, 0, 0 };
static long int venbye[6] = { 4, 1, 1, 4, 5, 5 };
static long int vendom[6] = { 5, 9, 10, 9, 5, 0 };
static long int marfac[5] = { 9, 30, 0, 0, 0 };
static long int marbye[6] = { 18, 7, 7, 18, 25, 25 };
static long int mardom[6] = { 25, 43, 50, 43, 25, 0 };
static long int jupfac[5] = { 12, 0, 0, 0, 0 };
static long int jupbye[6] = { 9, 3, 3, 9, 11, 11 };
static long int jupdom[6] = { 11, 20, 23, 20, 11, 0 };
static long int satfac[5] = { 18, 0, 0, 0, 0 };
static long int satbye[6] = { 15, 6, 6, 15, 22, 22 };
static long int satdom[6] = { 22, 37, 43, 37, 22, 0 };

static unsigned char martquo1[15] =
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0 };
static unsigned char martquo2[15] =
  { 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0 };
static unsigned char juptquo1[15] =
  { 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0 };
static unsigned char juptquo2[15] =
  { 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0 };
static unsigned char sattquo1[15] =
  { 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0 };
static unsigned char sattquo2[15] =
  { 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0 };
static unsigned char mertquo1[15] =
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0 };
static unsigned char mertquo2[15] =
  { 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0 };
static unsigned char ventquo1[15] =
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0 };
static unsigned char ventquo2[15] =
  { 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0 };

// Periods of the planets, solar days
static long int mercyc = 8797;
static long int vencyc = 2247;
static long int marcyc = 687;
static long int jupcyc = 4332;
static long int satcyc = 10766;

// least significant radix:
static long int merfrac = 8797;
static long int venfrac = 749;
static long int marfrac = 229;
static long int jupfrac = 361;
static long int satfrac = 5383;

// a constant for the computation of the Rahu position
static long int rahutsa[5] = { 0, 0, 14, 0, 12 };

/* Function computing the longitude of the head of Rahu for the day
 * epch is the epoch
 * m is the integer part of the true month
 * tt is the lunar day
 * rahudong is the longitude of the head of Rahu
 * See KTC p. 96 for details
 */
void
get_rahu_l (epoch * epch, long int m, long int tt, long int rahudong[5])
{
  long int lista[5] = { 27, 0, 0, 0, 0 };	// a full circle
  long int listb[5] = { 0, 0, 0, 0, 0 };
  // ( m + epch.rahupart ) % 230 is the Rahu month
  // Rahu month * 30 + tt is the number of lunar days elapsed in a Rahu cycle
  mul_lst (listb, rahutsa, ((m + epch->rahupart) % 230) * 30 + tt, 27, 23);
  lista[0] = 27;
  sub_lst (rahudong, lista, listb, 27, 23);
  /* Uncomment if you want the position of the tail:
     lista[0] = 13;
     lista[1] = 30;
     add_gen ( rahujug, rahudong, lista, 27, 23 ); */
}

/* Function to compute the mean slow longitude of a planet (dal pa bar pa)
 * lst is the result
 * dat is the particular day (KTC p. 57)
 * cyc is the period of the planet
 * frac is the lowest fractional part (KTC p.58)
 */
void
get_mean_slow_l (long int lst[5], long int dat, long int cyc, long int frac)
{
  lst[0] = dat * 27;
  lst[1] = 0;
  lst[2] = 0;
  lst[3] = 0;
  lst[4] = 0;
  lst[5] = 0;
  div_lst_6 (lst, lst, cyc, frac, 1);
}

/* Function to compute the true heliocentric position (dal dag)
 * pdaldag is the result
 * pdalbar is the mean slow longitude (see previous function)
 * pfac is the birth sign of the planet (KTC p. 58)
 * pbye and pdom are the colums of the tables (KTC p. 59 and 78)
 * frac is the lowest fraction (KTC p. 58)
 */
void
get_true_slow_l (long int pdaldag[6], long int pdalbar[6], long int pfac[6],
		 long int pbye[6], long int pdom[6], long int frac)
{
  long int dortst, test, trem, tquo;
  long int lista[6] = { 0, 0, 0, 0, 0, 0 };
  long int listb[6] = { 0, 0, 0, 0, 0, 0 };
  long int listc[6] = { 0, 0, 0, 0, 0, 0 };
  sub_lst (lista, pdalbar, pfac, 27, frac);
  test = lista[0] * 60 + lista[1];
  if (test >= 13 * 60 + 30)
    {
      dortst = 1;		// Subtract half-circle - KTC 59
      test = test - 13 * 60 - 30;
    }
  else
    dortst = 0;			// No subtraction of half-circle
  trem = test % 135;
  tquo = test / 135;
  if (tquo == 0)
    tquo = 6;
  lista[0] = 0;
  lista[1] = trem;
  lista[2] = pdalbar[2];
  lista[3] = pdalbar[3];
  lista[4] = pdalbar[4];
  lista[5] = 0;

  mul_lst_6 (lista, lista, pbye[(int) tquo - 1], frac, 1);
  div_lst_6 (lista, lista, 135, frac, 1);
  listb[1] = pdom[(int) tquo - 1];

// tquo is equal to actual index, except 0, replaced by 6
  if (tquo == 3 || tquo == 4 || tquo == 5)	// Then, subtract:
    sub_lst (listc, listb, lista, 27, frac);
  else
    add_lst (listc, listb, lista, 27, frac);

  if (dortst == 0)
    sub_lst (pdaldag, pdalbar, listc, 27, frac);
  else
    add_lst (pdaldag, pdalbar, listc, 27, frac);
}

/* Main function computing and returning all the planet data for a day
 * the needed inputs are the julian day, the lunar day, the main part of the true month, the mean solar longitude and the astro system
 * ouput is the planetary data
 */
tib_planet_data *
get_planets_data (long int jd, long int tt, long int zd0, long int nyibar[6],
		  astro_system * sys)
{
  tib_planet_data *pd;		// we put the result here;
  long int sz = jd - sys->epoch->spz_j;
  long int mardalbar[6] = { 0, 0, 0, 0, 0, 0 };
  long int mardaldag[6] = { 0, 0, 0, 0, 0, 0 };
  long int jupdalbar[6] = { 0, 0, 0, 0, 0, 0 };
  long int jupdaldag[6] = { 0, 0, 0, 0, 0, 0 };
  long int satdalbar[6] = { 0, 0, 0, 0, 0, 0 };
  long int satdaldag[6] = { 0, 0, 0, 0, 0, 0 };
  long int merkanbar[6] = { 0, 0, 0, 0, 0, 0 };
  long int venkanbar[6] = { 0, 0, 0, 0, 0, 0 };
  long int merdaldag[6] = { 0, 0, 0, 0, 0, 0 };
  long int vendaldag[6] = { 0, 0, 0, 0, 0, 0 };
  long int dragkang[6] = { 0, 0, 0, 0, 0, 0 };
  long int nyindhru[6] = { 0, 0, 0, 0, 0, 0 };
  long int rkang_frac, nsz;

  pd = new_tib_planet_data ();
// mars, dal dag. - KTC 57
// Checked against tables by "dbyangs can grub pa'i rdo rje", p. 623
  // here (sz + epch.maradd) % 687 is the particular day (KTC p. 57)
  get_mean_slow_l (mardalbar, (sz + sys->epoch->maradd) % marcyc, marcyc,
		   marfrac);
  get_true_slow_l (mardaldag, mardalbar, marfac, marbye, mardom, marfrac);

// jupiter, dal dag. - KTC 61
// Checked against tables by "dbyangs can grub pa'i rdo rje", p. 625
  get_mean_slow_l (jupdalbar, (sz + sys->epoch->jupadd) % jupcyc, jupcyc,
		   jupfrac);
  get_true_slow_l (jupdaldag, jupdalbar, jupfac, jupbye, jupdom, jupfrac);

// saturn, dal dag. - KTC 61
// Checked against tables by "dbyangs can grub pa'i rdo rje", p. 633
  get_mean_slow_l (satdalbar, (sz + sys->epoch->satadd) % satcyc, satcyc,
		   satfrac);
  get_true_slow_l (satdaldag, satdalbar, satfac, satbye, satdom, satfrac);

// mercury, dal bar, - KTC 85
// Checked against tables by "dbyangs can grub pa'i rdo rje", p. 610
  get_mean_slow_l (merkanbar, (sz * 100 + sys->epoch->meradd) % mercyc,
		   mercyc, merfrac);

// venus, dal bar, - KTC 77
// Checked against tables by "dbyangs can grub pa'i rdo rje", p. 612
  get_mean_slow_l (venkanbar, (sz * 10 + sys->epoch->venadd) % vencyc, vencyc,
		   venfrac);

// now we set nyindhru to 
// TODO: use switch loop
// for Phugpa, we use the dragkang method:
  if (sys->type == PHUGPA)
    {
      rkang_frac = 149209L;	// maybe this should go in sys? maybe not... yes: valued in epoch are dependant of this!
// drag gsum rkang 'dzin, zhi gnyis dal bar - KTC 63
      // here we call the dragkang list nyindhru
      // sys->epoch->dragkadd is here added, be careful setting it in the epoch!
      // if it was -x, then we can add 6714405-x, it's the same...
      nyindhru[0] =
	27 *
	(long) (((long long) sz * 18382 +
		 (long long) sys->epoch->dragkadd) % 6714405LL);
      // here is something a bit different to compute inner planets dal dag
      div_lst_6 (nyindhru, nyindhru, 6714405L, rkang_frac, 1);
    }
  else if (sys->type == SHERAB_LING)
    {
      rkang_frac = 115787L;
      // Now a calculation specific to Sherab Ling:
      // 365;15,31,1,121 (317) * 317 years = 115787 round days 
      // so 317 years is a cycle with a full number of days, and we spot the current day
      // in this cycle. The 317 cycles start with a day at daybreak of which mean solar longitude is 0.
      // nsz is the index of the day in the 317 years cycle
      // same remark as above, nyi_cnt is added, as if we were substracting 115787-nyi_cnt
      nsz = (sz + sys->epoch->nyi_cnt) % 115787L;
      // we set nyindhru to the mean motion of the sun in a solar day
      // for Sherab Ling, it is 0;4,26,0,78348 (115787), a fixed value given by 
      // a full circle divided by 365;15,31,1,121 (317), the number of days in
      // a year according to Sherab Ling system, see KTC p. 343.
      // here nyindhru is {0,0,0,0,0,0}, we fill only non-zero values
      nyindhru[1] = 4L;
      nyindhru[2] = 26L;
      nyindhru[4] = 78348L;
      // so now we just have to multiply the mean solar motion by the number of days
      // since solar longitude was 0 (nsz), in order to have the mean solar longitude:
      mul_lst_6 (nyindhru, nyindhru, nsz, rkang_frac, 1);
      // and we keep only the fraction in the ecliptic, removing full circles:
      nyindhru[0] = nyindhru[0] % 27L;
    }
  else				// tsurphu
    {
      rkang_frac = 13;
      copy_lst (nyindhru, nyibar);
      nyindhru[5] = 0;
      nyindhru[4] = (long) (((long long) nyindhru[4] * 149209L) / 67);
    }

// mercury dal dag. KTC 85
// Checked against tables by "dbyangs can grub pa'i rdo rje", p. 616
  get_true_slow_l (merdaldag, nyindhru, merfac, merbye, merdom, rkang_frac);

// venus dal dag. KTC 77/78
// Checked against tables by "dbyangs can grub pa'i rdo rje", p. 616
  get_true_slow_l (vendaldag, nyindhru, venfac, venbye, vendom, rkang_frac);

  // then the main computation, setting the longitude (pd->xxxmurdag)
  // for mars, see KTC p. 65, checked against calculation tables in British Library tables by "dbyangs can grub pa'i rdo rje", p. 644
  get_geo_l (mardaldag, mardalbar, dragkang, pd->marmurdag, marfrac, marbye1,
	     marbye2, mardom1, mardom2, martquo1, martquo2, OUTER_PLANET,
	     rkang_frac);
  // for jupiter, see KTC p. 74, checked against tables by "dbyangs can grub pa'i rdo rje", p. 645
  get_geo_l (jupdaldag, jupdalbar, dragkang, pd->jupmurdag, jupfrac, jupbye1,
	     jupbye2, jupdom1, jupdom2, juptquo1, juptquo2, OUTER_PLANET,
	     rkang_frac);
  // for saturn, see KTC p. 75, checked against tables by "dbyangs can grub pa'i rdo rje", p. 647
  get_geo_l (satdaldag, satdalbar, dragkang, pd->satmurdag, satfrac, satbye1,
	     satbye2, satdom1, satdom2, sattquo1, sattquo2, OUTER_PLANET,
	     rkang_frac);
  // for mercury, see KTC p. 86, checked against tables by "dbyangs can grub pa'i rdo rje", p. 644
  get_geo_l (merdaldag, merkanbar, dragkang, pd->mermurdag, merfrac, merbye1,
	     merbye2, merdom1, merdom2, mertquo1, mertquo2, INNER_PLANET,
	     rkang_frac);
  // for venus, see KTC p. 82, checked against tables by "dbyangs can grub pa'i rdo rje", p. 645
  get_geo_l (vendaldag, venkanbar, dragkang, pd->venmurdag, venfrac, venbye1,
	     venbye2, vendom1, vendom2, ventquo1, ventquo2, INNER_PLANET,
	     rkang_frac);
  get_rahu_l (sys->epoch, zd0, tt, pd->rahudong);
  return pd;
}

/*
 * Function to calculate geocentric longitude
 *  - plandaldag is the true slow longitude
 *  - plandalbar is the mean slow longitude (used only for inner planets)
 *  - dragkang is drag gsum rkang 'dzin, zhi gnyis dal bar - KTC 63
 *  - planmurdag is the result
 *  - planfrac is the lowest fractional part
 *  - planbye1, planbye2, plandom1 and plandom2 are the columns of the tables page 65, 66, 67, 83 and 84
 *  - plantquo1 and plantquo2 are tables describing when, in these tables, we need to substract or add the longitude, in the case (plantquo1) where no substraction of half cycle is needed, or (plantquo2) in the case where it's needed
 *  - type is INNER_PLANET or OUTER_PLANET
 *  - rkang_frac is 13 for tsurphu, 149209 for phugpa
 */
void
get_geo_l (long int plandaldag[6], long int plandalbar[6],
	   long int dragkang[6], long int planmurdag[6], long int planfrac,
	   long int *planbye1, long int *planbye2, long int *plandom1,
	   long int *plandom2, unsigned char plantquo1[15],
	   unsigned char plantquo2[15], unsigned char type,
	   long int rkang_frac)
{
  long int lista[6], listc[6], dald[6];
  long int listb[6] = { 0, 0, 0, 0, 0, 0 };	// listb is the only one that has to be initialized
  long int test, tquo, trem, x;
  long long int z;
  int dortst, conttest;

  if (type == OUTER_PLANET)
    copy_lst_6 (dald, dragkang);
  else
    copy_lst_6 (dald, plandaldag);

// Adjust the units for later combination:
  z = ((long long) dald[4] * (long long) planfrac);
  dald[4] = (long) (z / (long long) rkang_frac);
  dald[5] = (long) (z % (long long) rkang_frac);

  if (type == OUTER_PLANET)
    sub_lst_6 (lista, dald, plandaldag, 27, planfrac, rkang_frac);
  else
    sub_lst_6 (lista, plandalbar, dald, 27, planfrac, rkang_frac);

  test = lista[0] * 60 + lista[1];
  // 13 * 60 + 30 = half a circle
  if (test >= 13 * 60 + 30)
    {
      dortst = 1;		// Subtract half-circle
      sub_lst (lista, lista, plahaf, 27, rkang_frac);
    }
  else
    dortst = 0;			// No subtraction of half-circle

  tquo = lista[0];
  trem = lista[1];

  if (!dortst)			//  = ma dor, rim pa, lugs 'byung.
    {
      if (tquo == 13)
	conttest = 1;
      else
	conttest = 0;
      if (tquo == 0)
	tquo = 14;

      x = planbye1[(int) tquo - 1];	// Multiplier, looking down
      lista[0] = 0;
      mul_lst_6 (lista, lista, x, planfrac, rkang_frac);
      if (conttest)
	mul_lst_6 (lista, lista, 2, planfrac, rkang_frac);

// Now divide all the way through by 60:
      div_lst_6 (lista, lista, 60, planfrac, rkang_frac);
      listb[1] = plandom1[(int) tquo - 1];	// Totals, left hand list.
      listb[0] = listb[1] / 60;
      listb[1] = listb[1] % 60;

      // tquo is equal to actual index, except 0, replaced by 14
      if (plantquo1[(int) tquo] == 1)
	// Then, subtract:
	sub_lst_6 (listc, listb, lista, 27, planfrac, rkang_frac);
      else
	add_lst_6 (listc, listb, lista, 27, planfrac, rkang_frac);
    }
  else				// IF DORTST, rim min, lugs ldog.
    {
      conttest = 0;
      if (lista[0] == 0)
	{
	  if (lista[1] < 30)
	    conttest = 1;
	}
      if (lista[1] >= 30)
	{
	  ++tquo;
	  trem = lista[1] - 30;
	}
      else if (lista[0] != 0)
	trem = lista[1] + 30;

      if (tquo == 0)
	tquo = 14;

      x = planbye2[(int) tquo - 1];
      lista[0] = 0;
      lista[1] = trem;
      mul_lst_6 (lista, lista, x, planfrac, rkang_frac);
      if (conttest)
	mul_lst_6 (lista, lista, 2, planfrac, rkang_frac);

// Now divide all the way through by 60:
      div_lst_6 (lista, lista, 60, planfrac, rkang_frac);
      listb[1] = plandom2[(int) tquo - 1];
      listb[0] = listb[1] / 60;
      listb[1] = listb[1] % 60;

      // tquo is equal to actual index, except 0, replaced by 14
      if (plantquo2[(int) tquo] == 1)
	sub_lst_6 (listc, listb, lista, 27, planfrac, rkang_frac);
      else
	add_lst_6 (listc, listb, lista, 27, planfrac, rkang_frac);
    }
  if (dortst == 1)
    if (type == OUTER_PLANET)
      sub_lst_6 (planmurdag, plandaldag, listc, 27, planfrac, rkang_frac);
    else
      sub_lst_6 (planmurdag, dald, listc, 27, planfrac, rkang_frac);
  else if (type == OUTER_PLANET)
    add_lst_6 (planmurdag, plandaldag, listc, 27, planfrac, rkang_frac);
  else
    add_lst_6 (planmurdag, dald, listc, 27, planfrac, rkang_frac);
}
