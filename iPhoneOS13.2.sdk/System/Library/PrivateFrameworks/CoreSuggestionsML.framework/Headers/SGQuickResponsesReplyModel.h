//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SGQuickResponsesReplyModel : NSObject
{
    unsigned long long _semanticClassIndex;
    NSArray *_semanticClasses;
    NSArray *_selectedPseudocounts;
    double _scoreWeight;
    unsigned long long _category;
}

+ (id)semanticClassesForArray:(id)arg1;
@property(readonly, nonatomic) unsigned long long category; // @synthesize category=_category;
@property(readonly, nonatomic) double scoreWeight; // @synthesize scoreWeight=_scoreWeight;
@property(readonly, nonatomic) NSArray *selectedPseudocounts; // @synthesize selectedPseudocounts=_selectedPseudocounts;
@property(readonly, nonatomic) NSArray *semanticClasses; // @synthesize semanticClasses=_semanticClasses;
@property(readonly, nonatomic) unsigned long long semanticClassIndex; // @synthesize semanticClassIndex=_semanticClassIndex;
- (id)initWithDictionary:(id)arg1 index:(unsigned long long)arg2;

@end

