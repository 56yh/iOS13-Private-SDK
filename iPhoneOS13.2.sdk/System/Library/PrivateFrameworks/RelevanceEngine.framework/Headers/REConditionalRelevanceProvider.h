//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RelevanceEngine/RERelevanceProvider.h>

@class RERelevanceCondition;

@interface REConditionalRelevanceProvider : RERelevanceProvider
{
    RERelevanceCondition *_condition;
}

- (float)_evaluateCondition;
@property(readonly, nonatomic) RERelevanceCondition *condition;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)_hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRelevanceCondition:(id)arg1;

@end

