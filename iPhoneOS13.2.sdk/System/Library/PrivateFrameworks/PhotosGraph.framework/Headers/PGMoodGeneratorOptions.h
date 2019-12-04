//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSSet;

@interface PGMoodGeneratorOptions : NSObject
{
    unsigned long long _memoryCategory;
    unsigned long long _memorySubcategory;
    NSArray *_moodHistory;
    NSSet *_momentIDs;
    NSDate *_referenceDate;
    NSArray *_prefetchedAssets;
    NSDictionary *_sceneIdentifiersByMomentNodeIdentifier;
}

@property(retain) NSDictionary *sceneIdentifiersByMomentNodeIdentifier; // @synthesize sceneIdentifiersByMomentNodeIdentifier=_sceneIdentifiersByMomentNodeIdentifier;
@property(retain) NSArray *prefetchedAssets; // @synthesize prefetchedAssets=_prefetchedAssets;
@property(retain) NSDate *referenceDate; // @synthesize referenceDate=_referenceDate;
@property(retain) NSSet *momentIDs; // @synthesize momentIDs=_momentIDs;
@property(retain, nonatomic) NSArray *moodHistory; // @synthesize moodHistory=_moodHistory;
@property(nonatomic) unsigned long long memorySubcategory; // @synthesize memorySubcategory=_memorySubcategory;
@property(nonatomic) unsigned long long memoryCategory; // @synthesize memoryCategory=_memoryCategory;

@end

