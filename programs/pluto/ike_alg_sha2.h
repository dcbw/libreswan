/*
 * Copyright (C) 2016 Andrew Cagney <cagney@gnu.org>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.  See <http://www.fsf.org/copyleft/gpl.txt>.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * for more details.
 *
 */

extern struct hash_desc ike_alg_hash_sha2_256;
extern struct hash_desc ike_alg_hash_sha2_384;
extern struct hash_desc ike_alg_hash_sha2_512;

extern struct prf_desc ike_alg_prf_sha2_256;
extern struct prf_desc ike_alg_prf_sha2_384;
extern struct prf_desc ike_alg_prf_sha2_512;

extern struct integ_desc ike_alg_integ_sha2_256;
extern struct integ_desc ike_alg_integ_sha2_384;
extern struct integ_desc ike_alg_integ_sha2_512;
