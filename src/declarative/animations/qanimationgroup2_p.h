/****************************************************************************
**
** Copyright (C) 2011 Nokia Corporation and/or its subsidiary(-ies).
** All rights reserved.
** Contact: Nokia Corporation (qt-info@nokia.com)
**
** This file is part of the QtCore module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation and
** appearing in the file LICENSE.LGPL included in the packaging of this
** file. Please review the following information to ensure the GNU Lesser
** General Public License version 2.1 requirements will be met:
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights. These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU General
** Public License version 3.0 as published by the Free Software Foundation
** and appearing in the file LICENSE.GPL included in the packaging of this
** file. Please review the following information to ensure the GNU General
** Public License version 3.0 requirements will be met:
** http://www.gnu.org/copyleft/gpl.html.
**
** Other Usage
** Alternatively, this file may be used in accordance with the terms and
** conditions contained in a signed written agreement between you and Nokia.
**
**
**
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#ifndef QANIMATIONGROUP2_P_H
#define QANIMATIONGROUP2_P_H

#include "private/qabstractanimation2_p.h"

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(Declarative)



class QAnimationGroup2Private;
class Q_CORE_EXPORT QAnimationGroup2 : public QAbstractAnimation2
{
    Q_OBJECT

public:
    QAnimationGroup2(QObject *parent = 0);
    ~QAnimationGroup2();

    QAbstractAnimation2 *animationAt(int index) const;
    int animationCount() const;
    int indexOfAnimation(QAbstractAnimation2 *animation) const;
    void addAnimation(QAbstractAnimation2 *animation);
    void insertAnimation(int index, QAbstractAnimation2 *animation);
    void removeAnimation(QAbstractAnimation2 *animation);
    QAbstractAnimation2 *takeAnimation(int index);
    void clear();

protected:
    QAnimationGroup2(QAnimationGroup2Private &dd, QObject *parent);
    bool event(QEvent *event);

private:
    Q_DISABLE_COPY(QAnimationGroup2)
    Q_DECLARE_PRIVATE(QAnimationGroup2)
};



QT_END_NAMESPACE

QT_END_HEADER

#endif //QANIMATIONGROUP2_P_H
