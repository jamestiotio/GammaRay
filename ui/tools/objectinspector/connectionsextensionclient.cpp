/*
  connectionsextensionclient.cpp

  This file is part of GammaRay, the Qt application inspection and manipulation tool.

  SPDX-FileCopyrightText: 2014-2023 Klarälvdalens Datakonsult AB, a KDAB Group company <info@kdab.com>
  Author: Volker Krause <volker.krause@kdab.com>

  SPDX-License-Identifier: GPL-2.0-or-later

  Contact KDAB at <info@kdab.com> for commercial licensing options.
*/

#include "connectionsextensionclient.h"

#include <common/endpoint.h>
#include <common/variantwrapper.h>

using namespace GammaRay;

ConnectionsExtensionClient::ConnectionsExtensionClient(const QString &name, QObject *parent)
    : ConnectionsExtensionInterface(name, parent)
{
}

ConnectionsExtensionClient::~ConnectionsExtensionClient() = default;

void ConnectionsExtensionClient::navigateToSender(int modelRow)
{
    Endpoint::instance()->invokeObject(name(), "navigateToSender",
                                       QVariantList() << QVariant::fromValue(modelRow));
}

void ConnectionsExtensionClient::navigateToReceiver(int modelRow)
{
    Endpoint::instance()->invokeObject(name(), "navigateToReceiver",
                                       QVariantList() << QVariant::fromValue(modelRow));
}
