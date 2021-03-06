/* op.cpp */
/*
   Java Decompiler 
   Copyright (c) 1994-2003, Pete Ryland.
   Distributed under the GNU GPL Version 2.
   This package is available from http://pdr.cx/hbd/
*/

char *op2str[] = {
  " + ", " - ", " * ", " / ", " %% ", ".", " = ", " << ",
  " >> ", " >>> ", " & ", " | ", " ^ ", "~", "-", "(cast)",
  "return ", "throw ", "new ", "goto ", " += ", " -= ", "++", "--",
  " ? ", " : ", " error ", " cmp ", " == ", " != ", " < ", " >= ",
  " > ", " <= ", "!", " && ", " || ", " instanceof ", ", ",
  ""
};
int op_prec[] = {
  27, 27, 29, 29, 29, 39,  2, 26,
  26, 26, 19, 17, 18, 32, 32, 39,
  38, 38, 38, 38,  2,  2, 32, 32,
  14, 14, 39, 20, 20, 20, 22, 22,
  22, 22, 32, 16, 15, 32,  1,
  39
};
int op_assoc[] = {
  0,0,0,0,0,0,1,0,  0,0,0,0,0,0,0,0,
  0,0,1,1,0,0,0,0,  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,
  0
};
