/*
	Copyright (C) 2006 Andrew Gaydenko <a@gaydenko.com>

	This program is free software; you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation; either version 2 of the License, or
	(at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program; if not, write to the Free Software
	Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
*/

#ifndef LINEEDITDELEGATE_H
#define LINEEDITDELEGATE_H

#include <QtWidgets>

class LineEditDelegate : public QItemDelegate {
	Q_OBJECT

public:
	LineEditDelegate(QObject* parent=0);

	QWidget *createEditor(
		QWidget *parent,
		const QStyleOptionViewItem &option,
		const QModelIndex &index
	) const;

	void setEditorData(
		QWidget *editor,
		const QModelIndex &index
	) const;

	void setModelData(
		QWidget *editor,
		QAbstractItemModel *model,
		const QModelIndex &index
	) const;

	void updateEditorGeometry(
		QWidget *editor,
		const QStyleOptionViewItem &option,
		const QModelIndex &index
	) const;
};

#endif
