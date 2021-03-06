/*
 * Copyright (C) 2014-2017 Christopho, Solarus - http://www.solarus-games.org
 *
 * Solarus Quest Editor is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Solarus Quest Editor is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef SOLARUSEDITOR_BORDER_KIND_TRAITS_H
#define SOLARUSEDITOR_BORDER_KIND_TRAITS_H

#include "enum_traits.h"
#include <solarus/entities/BorderKind.h>

namespace SolarusEditor {

using BorderKind = Solarus::BorderKind;
using BorderKindTraits = EnumTraits<BorderKind>;

/**
 * \brief Provides useful properties of border kind enum values.
 */
template<>
class EnumTraits<BorderKind> {

public:

  static QList<BorderKind> get_values();
  static QString get_friendly_name(BorderKind value);
  static QIcon get_icon(BorderKind value);

};

}

#endif
