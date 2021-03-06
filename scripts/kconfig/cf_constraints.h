/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (C) 2020 Patrick Franz <patfra71@gmail.com>
 */

#ifndef CF_CONSTRAINTS_H
#define CF_CONSTRAINTS_H

/* build the constraints for each symbol */
void get_constraints(void);

/* count the number of all constraints */
unsigned int count_counstraints(void);

/* add a constraint for a symbol */
void sym_add_constraint(struct symbol *sym, struct fexpr *constraint);

#endif
