/*================================================================================================= */
/* This Code is written by JeongHyeon Choi. (Mokpo National University Student in Korea)            */
/*                         KORKIMERA                                                                */
/*                                                                                                  */
/*                                                                                                  */
/* Tool          : Dev C++ 5.10                                                                     */
/* OS            : Windows 7                                                                        */
/* Version       : Prototype 0.0.2                                                                  */
/* Description   : Header File For Coordinates                     									*/
/*================================================================================================= */


#ifndef COORDINATE_H
#define COORDINATE_H


/*================================================================================================= */
/* INCLUDE                                                                                          */

#include "data.h"

/*==================================================================================================*/


/*================================================================================================= */
/* DEFINE                                                                                           */

/*================================================================================================= */


/*================================================================================================= */
/* PROTOTYPE                                                                                        */

int 				 ( *create_board		( int ) )[BOARD_SIZE];
void 				 inputCoordinate		( int (*)[BOARD_SIZE], int, int );
int 				 isOutOfRange			( int, int );

/*================================================================================================= */

#endif
