//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Silex/SXComponentBlueprint.h>

@class NSDictionary;

@interface SXTextComponentBlueprint : SXComponentBlueprint
{
    NSDictionary *_exclusionPaths;
}

@property(readonly, nonatomic) NSDictionary *exclusionPaths; // @synthesize exclusionPaths=_exclusionPaths;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)invalidateSize;
- (void)addExclusionPath:(id)arg1 forIdentifier:(id)arg2;

@end

