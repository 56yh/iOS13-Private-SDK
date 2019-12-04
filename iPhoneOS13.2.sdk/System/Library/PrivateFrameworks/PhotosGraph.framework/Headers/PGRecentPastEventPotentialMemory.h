//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosGraph/PGPotentialMemory.h>

@class NSSet;

@interface PGRecentPastEventPotentialMemory : PGPotentialMemory
{
    _Bool _isBirthday;
    NSSet *_peopleNodes;
    double _meanContentScore;
    double _neighborScore;
}

@property _Bool isBirthday; // @synthesize isBirthday=_isBirthday;
@property double neighborScore; // @synthesize neighborScore=_neighborScore;
@property double meanContentScore; // @synthesize meanContentScore=_meanContentScore;
@property(retain) NSSet *peopleNodes; // @synthesize peopleNodes=_peopleNodes;
- (id)description;
- (void)computeRemainingScoresWithManager:(id)arg1 controller:(id)arg2 previousPotentialMemory:(id)arg3;
- (id)initWithCategory:(unsigned long long)arg1 subcategory:(unsigned long long)arg2 momentNodes:(id)arg3 sourceType:(long long)arg4;
- (id)initWithAssetCollection:(id)arg1 momentNode:(id)arg2 subcategory:(unsigned long long)arg3;

@end

