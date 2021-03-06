#ifndef _GUANDU_SCENARIO_H
#define _GUANDU_SCENARIO_H

#include "scenario.h"
#include "card.h"
#include "nostalgia.h"

class ZhanShuangxiongCard : public SkillCard
{
    Q_OBJECT

public:
    Q_INVOKABLE ZhanShuangxiongCard();

    bool targetFilter(const QList<const Player *> &targets, const Player *to_select, const Player *Self) const;
    void use(Room *room, ServerPlayer *source, QList<ServerPlayer *> &targets) const;
};

class SmallTuxiCard : public NosTuxiCard
{
    Q_OBJECT

public:
    Q_INVOKABLE SmallTuxiCard();
    bool targetFilter(const QList<const Player *> &targets, const Player *to_select, const Player *Self) const;
    void onEffect(const CardEffectStruct &effect) const;
};

class GuanduScenario : public Scenario
{
    Q_OBJECT

public:
    GuanduScenario();

    AI::Relation relationTo(const ServerPlayer *a, const ServerPlayer *b) const;
    void onTagSet(Room *room, const QString &key) const;
};

#endif

