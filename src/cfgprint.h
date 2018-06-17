/*
 * Copyright 2017 Frank Hunleth
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef CFGPRINT_H
#define CFGPRINT_H

#include <confuse.h>
#include <stdbool.h>
#include "simple_string.h"

int fwup_cfg_to_string(cfg_t *cfg, char **result);

void fwup_cfg_opt_to_string(cfg_opt_t *opt, struct simple_string *s, bool scrub);

#endif // CFGPRINT_H
