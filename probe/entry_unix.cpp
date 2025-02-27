/*
  entry_unix.cpp

  This file is part of GammaRay, the Qt application inspection and manipulation tool.

  SPDX-FileCopyrightText: 2014-2023 Klarälvdalens Datakonsult AB, a KDAB Group company <info@kdab.com>
  Author: Volker Krause <volker.krause@kdab.com>

  SPDX-License-Identifier: GPL-2.0-or-later

  Contact KDAB at <info@kdab.com> for commercial licensing options.
*/

#include "hooks.h"

using namespace GammaRay;

// we need a way to execute some code upon load, so let's abuse
// static initialization
class HitMeBabyOneMoreTime
{
public:
    HitMeBabyOneMoreTime()
    {
        Hooks::installHooks();
    }
};

static HitMeBabyOneMoreTime britney;
