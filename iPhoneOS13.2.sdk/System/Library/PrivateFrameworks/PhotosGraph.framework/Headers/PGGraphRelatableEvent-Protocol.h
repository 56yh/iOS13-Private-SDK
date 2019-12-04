//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosGraph/PGGraphFullMeaninglessEvent-Protocol.h>

@class NSDictionary, NSSet, NSString, PGGraphMomentNode;
@protocol PGGraphPhotoEvent;

@protocol PGGraphRelatableEvent <PGGraphFullMeaninglessEvent>
+ (NSString *)inclusivePathToTargetNodeDomain:(unsigned short)arg1 withName:(NSString *)arg2;
+ (NSString *)inclusivePathFromTargetNodeDomain:(unsigned short)arg1 withName:(NSString *)arg2;
+ (NSString *)pathToTargetNodeDomain:(unsigned short)arg1;
+ (NSString *)pathFromTargetNodeDomain:(unsigned short)arg1;
+ (NSString *)pathToMoment;
+ (NSString *)pathFromMoment;
- (NSDictionary *)keywordsForRelatedType:(unsigned long long)arg1 focusOnNodes:(NSSet *)arg2;
- (NSSet *)connectedEventsWithTargetDomain:(unsigned short)arg1;
- (id <PGGraphPhotoEvent>)photoEvent;
- (double)weightForMoment:(PGGraphMomentNode *)arg1;
@end

