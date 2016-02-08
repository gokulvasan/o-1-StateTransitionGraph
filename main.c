#include <stdio.h>
/*
 * filename : main.c
 * Author : gokulvas@gmail.com
 *
 * STATE TRANSITION WITHOUT CASE AND MULTIPLE IF STATEMENTS.
 * This file tries to implement a basic state 
 * transition diagram with condition check that 
 * checks the transition to next state is towards
 * right defined direction. In other words state transition
 * function should check wheather the current state can go to 
 * the next instructed state else it should throw error.
 * 
 * I was writing a small FSM and a task transition graph,
 * What I recently realized was I have to either use if 
 * statements with case statements. 
 * This wole conditional check started exploding when number of 
 * states in the system started increasing. So I have to think on 
 * alternative solution which could handle this scenario more
 * elegantly.
 *
 * How it works: 
 *
 *	Every state is given a bit value 
 * 
 */


