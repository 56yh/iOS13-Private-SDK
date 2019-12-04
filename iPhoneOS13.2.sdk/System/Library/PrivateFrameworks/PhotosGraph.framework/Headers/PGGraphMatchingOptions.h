//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSSet;

@interface PGGraphMatchingOptions : NSObject
{
    _Bool _needsKeywords;
    unsigned short _targetEventDomain;
    unsigned long long _relatedType;
    NSSet *_focusedNodes;
    NSArray *_sortDescriptors;
}

+ (unsigned short)defaultTargetEventDomain;
+ (id)optionsWithRelatedType:(unsigned long long)arg1;
@property(nonatomic) _Bool needsKeywords; // @synthesize needsKeywords=_needsKeywords;
@property(retain, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property(retain, nonatomic) NSSet *focusedNodes; // @synthesize focusedNodes=_focusedNodes;
@property(nonatomic) unsigned short targetEventDomain; // @synthesize targetEventDomain=_targetEventDomain;
@property(nonatomic) unsigned long long relatedType; // @synthesize relatedType=_relatedType;
- (id)init;

@end

